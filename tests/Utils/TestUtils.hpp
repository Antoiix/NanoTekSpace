/*
** EPITECH PROJECT, 2025
** TestUtils.hpp
** File description:
** TestUtils.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef TESTUTILS_HPP
    #define TESTUTILS_HPP

#include <iostream>
#include <sstream>
#include <fstream>
#include <cstring>

class TestUtils {
public:
    TestUtils(const char *fileName);

    const char *End();
    const char *GetFileContent() const;

private:
    static const char *getFileContent(std::string fileName);
    const char *fileContent;
    std::streambuf *old;
    std::stringstream test;
    std::string testStr;
};

#endif //TESTUTILS_HPP