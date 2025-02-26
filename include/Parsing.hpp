/*
** EPITECH PROJECT, 2025
** NanoTekSpice
** File description:
** Parsing.hpp
*/

#ifndef NANOTEKSPICE_PARSING_HPP
#define NANOTEKSPICE_PARSING_HPP

#include "Utils.hpp"
#include <algorithm>
#include <cstdio>
#include <cstring>

enum TYPE
{
    NOTHING,
    CHIPSET,
    LINKS
};

class InvalidFileException : public std::exception
{
public:
    const char* what() const noexcept override
    {
        return "Invalid File.";
    };
};

void manage_parsing(const std::string& file_name);

#endif //NANOTEKSPICE_PARSING_HPP
