/*
** EPITECH PROJECT, 2025
** NanoTekSpice
** File description:
** Shell.hpp
*/

#ifndef NANOTEKSPICE_SHELL_HPP
    #define NANOTEKSPICE_SHELL_HPP

#include "Utils.hpp"
#include <iostream>
#include <cstring>
#include <csignal>
#include <list>

class shell {
    public:
    shell();
    ~shell();
    static void getExecutionCommands();
};

#endif //NANOTEKSPICE_SHELL_HPP
