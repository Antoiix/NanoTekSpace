/*
** EPITECH PROJECT, 2025
** NanoTekSpice
** File description:
** parsing.cpp
*/

#include "parsing.hpp"

std::string remove_comment(const std::string& string)
{
    size_t indice = string.find('#');
    return string.substr(0, indice);
}

void manage_parsing(std::string file_name)
{
    std::string buffer; //open file
    std::list<std::string> line_array = my_str_to_word_array(buffer, "\n");
    std::list<std::string> temp_word_array;
    std::list<void (*)()> function_list;
    TYPE actual = NOTHING;

    std::for_each(line_array.begin(), line_array.end(), remove_comment);

    for (const auto& line: line_array) {
        temp_word_array = my_str_to_word_array(line, " \t");

        if (std::strcmp(temp_word_array.front().c_str(), ".chipset:") != 0) {
            actual = CHIPSET;
            continue;
        }
        if (std::strcmp(temp_word_array.front().c_str(), ".links:") != 0) {
            actual = LINKS;
            continue;
        }

        // exécute une fonction faisant partie d'une liste, choisi la fonction en fonction de l'ENUM actuel (CHIPSET / LINKS)

        (*function_list.)(temp_word_array);

    }
}
