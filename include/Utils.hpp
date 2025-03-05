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

namespace Utils
{
    inline bool loopExitFlag = false;

    std::list<std::string> myStrToWordArray(const std::string& buffer, const std::string& delimiter);
    std::string getFileContent(const std::string& fileName);
    void writeInFile(const std::string& string, const std::string& fileName);
    std::string removeComment(const std::string& string);

    class FileError : public std::exception
    {
    public:
        const char* what() const noexcept override
        {
            return "Error of file.";
        };
    };
}


#endif //NANOTEKSPICE_UTILS_HPP
