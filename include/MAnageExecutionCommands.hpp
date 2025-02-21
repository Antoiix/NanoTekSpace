/*
** EPITECH PROJECT, 2025
** NanoTekSpice
** File description:
** ManageExecutionCommands.hpp
*/

#ifndef NANOTEKSPICE_MANAGEEXECUTIONCOMMANDS_HPP
    #define NANOTEKSPICE_MANAGEEXECUTIONCOMMANDS_HPP

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

#endif //NANOTEKSPICE_MANAGEEXECUTIONCOMMANDS_HPP
