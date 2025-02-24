/*
** EPITECH PROJECT, 2025
** NanoTekSpice
** File description:
** ManageExecutionCommands.cpp
*/

#include "Shell.hpp"

static void signalHandler(int signum)
{
    (void)signum;
    Utils::loopExitFlag = false;
}

static bool inputIsValid(const std::string& buffer)
{
    std::list<std::string> word_array;

    if (buffer.find('=') == std::string::npos)
        return false;
    word_array = Utils::myStrToWordArray(buffer, " ");
    if (word_array.size() != 1)
        return false;
    return true;
}

void getExecutionCommands()
{
    std::string buffer;

    std::cout << "> ";
    while (std::getline(std::cin, buffer) && buffer != "exit") {
        if (buffer == "display") {
            // display function
            std::cout << "> ";
            continue;
        }
        if (buffer == "simulate") {
            // simulate function
            std::cout << "> ";
            continue;
        }
        if (buffer == "loop") {
            std::signal(SIGINT, signalHandler);
            Utils::loopExitFlag = true;
            while (Utils::loopExitFlag){
                // simulate function
            }
            // display function
            std::cout << "> ";
            continue;
        }
        if (inputIsValid(buffer)) {
            // change input value
            std::cout << "> ";
            continue;
        }
        std::cout << "Invalid Command" << std::endl;
        std::cout << "> ";
    }
}
