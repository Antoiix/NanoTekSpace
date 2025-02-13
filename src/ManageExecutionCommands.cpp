/*
** EPITECH PROJECT, 2025
** NanoTekSpice
** File description:
** ManageExecutionCommands.cpp
*/

#include "MAnageExecutionCommands.hpp"

void getExecutionCommands()
{
    std::string buffer;

    std::cout << "> ";
    while (std::getline(std::cin, buffer) && buffer != "exit") {
        if (buffer == "display") {
            // call display to display all component
            continue;
        }
        if (buffer == "simulate") {
            // do one tick simulation
            continue;
        }
        if (buffer == "loop") {
            // do a loop while != CTRL + C
            continue;
        }
        // test : '=' in buffer && 2 word && input exist && value == 0/1/U
    }
}
