/*
** EPITECH PROJECT, 2025
** TestUtils.cpp
** File description:
** TestUtils.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "TestUtils.hpp"

const char *TestUtils::getFileContent(std::string fileName) {
    std::ifstream f;
    std::stringstream ss;

    f.open(fileName);
    if (f.is_open() && f.good())
        ss << f.rdbuf();
    else
        return "ERROR OF FILE";

    std::string str = ss.str();
    char *c_str = new char[str.length()];
    strcpy(c_str, str.c_str());

    return c_str;
}

TestUtils::TestUtils(const char *fileName)
{
    this->fileContent = getFileContent(fileName);
    this->old = std::cout.rdbuf(this->test.rdbuf());
}

const char *TestUtils::End()
{
    std::cout.rdbuf(old);
    this->testStr = test.str();
    const char *finalStr = testStr.c_str();

    if (::strcmp(finalStr, fileContent) != 0) {
        std::cerr << "Got:\n\"" << finalStr << "\"" << std::endl << "Expected:\n\"" <<
        fileContent << "\"" << std::endl;
    }
    return finalStr;
}

const char *TestUtils::GetFileContent() const
{
    return this->fileContent;
}