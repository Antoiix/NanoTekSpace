//
// Created by ktimote on 2/13/25.
//

#ifndef NANOTEKSPICE_UTILS_HPP
#define NANOTEKSPICE_UTILS_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include <list>
#include <string>

namespace Utils {
    static std::list<std::string> myStrToWordArray(const std::string &buffer, const std::string &delimiter);
    static std::string getFileContent(const std::string& fileName);
    std::string remove_comment(const std::string& string);
}



#endif //NANOTEKSPICE_UTILS_HPP
