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

class NameAlreadyUsed : public std::exception {
    public:
    const char *what() const noexcept override {
        return "Name already used";
    }
};

class InvalidFileInstruction : public std::exception {
    public:
    const char *what() const noexcept override {
        return "Invalid instruction in file";
    }
};

nts::Shell manage_parsing(nts::Shell shell ,const std::string& file_name);

#endif //NANOTEKSPICE_PARSING_HPP
