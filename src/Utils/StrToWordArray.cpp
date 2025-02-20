/*
** EPITECH PROJECT, 2025
** NanoTekSpice
** File description:
** parsing.cpp
*/

#include "Utils.hpp"

static bool is_delimiter(char c, const std::string &delimiter)
{
    return (delimiter.find(c) != std::string::npos);
}

std::list<std::string> Utils::myStrToWordArray(const std::string &buffer, const std::string &delimiter)
{
    std::list<std::string> word_array;
    std::string word;

    for (char c: buffer) {
        if (is_delimiter(c, delimiter)) {
            if (!word.empty()) {
                word_array.push_back(word);
                word = "";
            }
        } else {
            word += c;
        }
    }
    if (!word.empty())
        word_array.push_back(word);

    return word_array;
}
