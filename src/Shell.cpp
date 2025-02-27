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

void Shell::getExecutionCommands()
{
    std::string buffer;

    std::cout << "> ";
    while (std::getline(std::cin, buffer) && buffer != "exit") {
        if (buffer == "display") {
            std::cout << "display" << std::endl;
            std::cout << "> ";
            continue;
        }
        if (buffer == "simulate") {
            std::cout << "simulate" << std::endl;
            std::cout << "> ";
            continue;
        }
        if (buffer == "loop") {
            std::cout << "loop" << std::endl;
            std::signal(SIGINT, signalHandler);
            Utils::loopExitFlag = true;
            while (Utils::loopExitFlag){
                // simulate function
            }
            std::cout << "display" << std::endl;
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

void Shell::addComponent(const std::string& name, const std::string& component)
{
    this->factory.CreateComponent(component, name, this->components_map);
}

std::shared_ptr<nts::IComponent> Shell::getComponent(const std::string& name) const
{
    return this->components_map.getComponent(name);
}

void Shell::addLink(const std::string& from, const std::string& to) const
{
    const std::list<std::string> fromWordArray = Utils::myStrToWordArray(from, ":");
    const std::list<std::string> toWordArray = Utils::myStrToWordArray(to, ":");

    this->getComponent(fromWordArray.front())->setLink(std::stoi(fromWordArray.back()),toWordArray.front(), std::stoi(toWordArray.back()));
}
