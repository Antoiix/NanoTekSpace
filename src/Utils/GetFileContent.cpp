/*
** EPITECH PROJECT, 2025
** NanoTekSpice
** File description:
** getFileContent.cpp
*/

#include "Utils.hpp"

std::string Utils::getFileContent(const std::string& fileName)
{
    std::ifstream f;
    std::stringstream ss;

    f.open(fileName);
    if (f.is_open() && f.good())
        ss << f.rdbuf();
    else
        throw std::runtime_error("ERROR OF FILE");

    std::string str = ss.str();

    f.close();
    return str;
}
