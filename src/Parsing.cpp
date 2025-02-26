/*
** EPITECH PROJECT, 2025
** NanoTekSpice
** File description:
** parsing.cpp
*/

#include "Parsing.hpp"

void chooseFunction(TYPE actual, const std::list<std::string>& word_array)
{
    if (word_array.size() == 2 && actual != NOTHING) {
        if (actual == LINKS)
            return; //replace by links creator
        if (actual == CHIPSET)
            return; //replace by chipset factory
    } else {
        throw InvalidFileException();
    }
}

void manage_parsing(const std::string& file_name)
{
    std::string buffer;
    try
    {
        buffer = Utils::getFileContent(file_name);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
        return;
    }
    std::list<std::string> line_array = Utils::myStrToWordArray(buffer, "\n");
    std::list<std::string> temp_word_array;
    TYPE actual = NOTHING;

    std::for_each(line_array.begin(), line_array.end(), Utils::removeComment);

    for (const auto& line: line_array) {
        temp_word_array = Utils::myStrToWordArray(line, " \t");

        if (std::strcmp(temp_word_array.front().c_str(), ".chipset:") != 0) {
            actual = CHIPSET;
            continue;
        }
        if (std::strcmp(temp_word_array.front().c_str(), ".links:") != 0) {
            actual = LINKS;
            continue;
        }
        try
        {
            chooseFunction(actual, temp_word_array);
        }
        catch (const std::exception& e)
        {
            std::cerr << e.what() << std::endl;
        }
    }
}
