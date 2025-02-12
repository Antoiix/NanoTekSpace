/*
** EPITECH PROJECT, 2025
** NanoTekSpice
** File description:
** parsing.cpp
*/

#include "parsing.hpp"

std::list<std::string> my_str_to_word_array(const std::string& buffer, const std::string& delimiter)
{
    std::list<std::string> word_array;
    std::string temp;
    size_t buffer_len = buffer.length();
    size_t find_indice = 0;
    size_t indice = 0;

    find_indice = buffer.find(delimiter, indice);
    while (find_indice != std::string::npos){
        if (indice != find_indice)
            word_array.push_back(buffer.substr(indice));
        indice = find_indice + 1;
        find_indice = buffer.find(delimiter, indice);
    }
    if (indice != buffer_len)
        word_array.push_back(buffer.substr(indice));
    return word_array;
}
