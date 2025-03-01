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
    // function to change input
    return true;
}

void Shell::getExecutionCommands()
{
    std::string buffer;
    std::stringstream firstSs;

    firstSs << "tick: " << this->components_map.getTick() << std::endl;
    firstSs << "input(s):" << std::endl;
    for (const auto& currentInput : this->listInputs)
    {
        auto tmpInput = this->components_map.getComponent(currentInput);
        if (tmpInput == nullptr)
            continue;
        firstSs << "\t" << currentInput << ": " << tmpInput->compute(1, this->components_map) << std::endl;
    }
    firstSs << "output(s):" << std::endl;
    for (const auto& currentOutput : this->listOutputs)
    {
        auto tmpOutput = this->components_map.getComponent(currentOutput);
        if (tmpOutput == nullptr)
            continue;
        firstSs << "\t" << currentOutput << ": " << tmpOutput->compute(1, this->components_map) << std::endl;
    }
    this->setOutputString(firstSs.str());

    std::cout << "> ";
    while (std::getline(std::cin, buffer) && buffer != "exit") {
        if (buffer == "display") {
            std::cout << this->getOutputString();
            std::cout << "> ";
            continue;
        }
        if (buffer == "simulate") {
            std::stringstream ss;
            this->components_map.incrementTick();
            ss << "tick: " << this->components_map.getTick() << std::endl;
            ss << "input(s):" << std::endl;
            for (const auto& currentInput : this->listInputs)
            {
                auto tmpInput = this->components_map.getComponent(currentInput);
                if (tmpInput == nullptr)
                    continue;
                ss << "\t" << currentInput << ": " << tmpInput->compute(1, this->components_map) << std::endl;
            }
            ss << "output(s):" << std::endl;
            for (const auto& currentOutput : this->listOutputs)
            {
                auto tmpOutput = this->components_map.getComponent(currentOutput);
                if (tmpOutput == nullptr)
                    continue;
                ss << "\t" << currentOutput << ": " << tmpOutput->compute(1, this->components_map) << std::endl;
            }
            this->setOutputString(ss.str());
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
            std::cout << "change input" << std::endl;
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
    int i = 1;
    i = i;
}

void Shell::addInput(const std::string& input)
{
    this->listInputs.push_back(input);
}

void Shell::addOutput(const std::string& output)
{
    this->listOutputs.push_back(output);
}

std::string Shell::getOutputString() const
{
    return this->outputString;
}

void Shell::setOutputString(const std::string& output)
{
    this->outputString.clear();
    this->outputString = output;
}
