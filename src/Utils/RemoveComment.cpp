/*
** EPITECH PROJECT, 2025
** NanoTekSpice
** File description:
** RemoveComment.cpp
*/

#include "Utils.hpp"

std::string Utils::removeComment(const std::string& string)
{
    size_t indice = string.find('#');
    return string.substr(0, indice);
}
