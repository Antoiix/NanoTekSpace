//
// Created by ktimote on 2/12/25.
//

#ifndef NANOTEKSPICE_PARSING_HPP
#define NANOTEKSPICE_PARSING_HPP

#include "Utils.hpp"
#include <algorithm>
#include <cstdio>
#include <cstring>

enum TYPE {
    NOTHING,
    CHIPSET,
    LINKS
};

void manage_parsing(const std::string& file_name);

#endif //NANOTEKSPICE_PARSING_HPP
