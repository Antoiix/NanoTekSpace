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
    std::list<std::string> myStrToWordArray(const std::string &buffer, const std::string &delimiter);
    std::string getFileContent(const std::string& fileName);
    std::string removeComment(const std::string& string);
}



#endif //NANOTEKSPICE_UTILS_HPP
