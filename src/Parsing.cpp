/*
** EPITECH PROJECT, 2025
** NanoTekSpice
** File description:
** parsing.cpp
*/

#include "Parsing.hpp"

Shell chooseFunction(Shell shell, TYPE actual, const std::list<std::string>& word_array)
{
    printf("front: %s, back: %s\n", word_array.front().c_str(), word_array.back().c_str());
    if (word_array.size() == 2 && actual != NOTHING) {
        if (actual == LINKS)
            shell.addLink(word_array.front(), word_array.back());
        if (actual == CHIPSET)
            shell.addComponent(word_array.back(), word_array.front());
    } else {
        throw std::runtime_error("INVALID FILE");
    }
    return shell;
}

Shell manage_parsing(Shell shell ,const std::string& file_name)
{
    std::string buffer = Utils::getFileContent(file_name);
    std::list<std::string> line_array = Utils::myStrToWordArray(buffer, "\n");
    std::list<std::string> temp_word_array;
    TYPE actual = NOTHING;

    std::for_each(line_array.begin(), line_array.end(), Utils::removeComment);

    for (const auto& line: line_array) {
        temp_word_array = Utils::myStrToWordArray(line, " \t");

        if (std::strcmp(temp_word_array.front().c_str(), ".chipsets:") == 0) {
            actual = CHIPSET;
            continue;
        }
        if (std::strcmp(temp_word_array.front().c_str(), ".links:") == 0) {
            actual = LINKS;
            continue;
        }
        shell = chooseFunction(shell, actual, temp_word_array);
    }
    return shell;
}
