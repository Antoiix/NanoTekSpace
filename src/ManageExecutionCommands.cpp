/*
** EPITECH PROJECT, 2025
** NanoTekSpice
** File description:
** ManageExecutionCommands.cpp
*/

#include "../include/MAnageExecutionCommands.hpp"

bool loop = true;

void signalHandler(int signum)
{
    loop = false;
}

void getExecutionCommands()
{
    std::string buffer;

    std::cout << "> ";
    while (std::getline(std::cin, buffer) && buffer != "exit") {
        if (buffer == "display") {
            // call display to display all component
            std::cout << "> ";
            continue;
        }
        if (buffer == "simulate") {
            // do one tick simulation
            std::cout << "> ";
            continue;
        }
        if (buffer == "loop") {
            std::signal(SIGINT, signalHandler);
            while (loop){
                // simulate command
            }
            // display command
            std::cout << "> ";
            continue;
        }
        // test : '=' in buffer && 2 word && input exist && value == 0/1/U
        std::cout << "> ";
    }
}
