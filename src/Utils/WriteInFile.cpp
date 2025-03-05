/*
** EPITECH PROJECT, 2025
** NanoTekSpice
** File description:
** WriteInFile.cpp
*/

#include "Utils.hpp"

void Utils::writeInFile(const std::string& string, const std::string& fileName)
{
    std::ofstream f;

    f.open(fileName, std::ios::app);
    if (f.is_open() && f.good())
        f << string;
    else
        throw Utils::FileError();
    f.close();
}
