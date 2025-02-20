/*
** EPITECH PROJECT, 2025
** NanoTekSpice
** File description:
** Utils.hpp
*/

#ifndef NANOTEKSPICE_UTILS_HPP
#define NANOTEKSPICE_UTILS_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <list>
#include <string>

namespace Utils {
    bool loopExitFlag = false;

    std::list<std::string> myStrToWordArray(const std::string &buffer, const std::string &delimiter);
    std::string getFileContent(const std::string& fileName);
    std::string removeComment(const std::string& string);
}



#endif //NANOTEKSPICE_UTILS_HPP
