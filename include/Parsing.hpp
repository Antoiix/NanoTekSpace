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
#include <Shell.hpp>

enum TYPE {
    NOTHING,
    CHIPSET,
    LINKS
};

Shell manage_parsing(Shell shell ,const std::string& file_name);

#endif //NANOTEKSPICE_PARSING_HPP
