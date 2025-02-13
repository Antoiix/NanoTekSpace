/*
** EPITECH PROJECT, 2025
** NanoTekSpice
** File description:
** ManageExecutionCommands.cpp
*/

#include "MAnageExecutionCommands.hpp"

bool loopExitFlag = true;

static void signalHandler(int signum)
{
    (void)signum;
    loopExitFlag = false;
}

static bool inputIsValid(const std::string& buffer)
{
    std::list<std::string> word_array;

    if (buffer.find('=') == std::string::npos)
        return false;
    word_array = myStrToWordArray(buffer, " "); //include it later
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
            while (loopExitFlag){
                // simulate command
            }
            // display command
            std::cout << "> ";
            continue;
        }
        if (inputIsValid(buffer)) {
            // change input value
            continue;
        }
        std::cout << "> ";
    }
}
