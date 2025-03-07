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

bool nts::Shell::inputIsValid(const std::string& buffer) const
{
    std::list<std::string> word_array = Utils::myStrToWordArray(buffer, "=");

    if (buffer.find(' ') == std::string::npos &&
        buffer.find('\t') == std::string::npos &&
        word_array.size() == 2 &&
        buffer.find('=') == buffer.rfind('=') &&
        this->getComponent(word_array.front()) != nullptr &&
        (atoi(word_array.back().c_str()) == 0 || atoi(word_array.back().c_str()) == 1 || (word_array.back() == "U")))
    {
        if (word_array.back() == "U")
        {
            this->getComponent(word_array.front())->changePinState(1, nts::Undefined);
            return true;
        }
        if (atoi(word_array.back().c_str()) == 1)
            this->getComponent(word_array.front())->changePinState(1, nts::True);
        if (atoi(word_array.back().c_str()) == 0)
            this->getComponent(word_array.front())->changePinState(1, nts::False);
        return true;
    }
    return false;
}

void nts::Shell::getExecutionCommands()
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
        firstSs << "\t" << currentInput << ": " << tmpInput->getPinState(1) << std::endl;
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
        this->components_map.computed_pins.clear();
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
                ss << "\t" << currentInput << ": " << tmpInput->getPinState(1) << std::endl;
            }
            ss << "output(s):" << std::endl;
            for (const auto& currentOutput : this->listOutputs)
            {
                auto tmpOutput = this->components_map.getComponent(currentOutput);
                if (tmpOutput == nullptr)
                    continue;
                ss << "\t" << currentOutput << ": " << tmpOutput->compute(1, this->components_map) << std::endl;
            }
            for (const auto& currentLogger : this->listLogger)
            {
                auto tmpOutput = this->components_map.getComponent(currentLogger);
                if (tmpOutput == nullptr)
                    continue;
                tmpOutput->compute(1, this->components_map);
            }
            this->setOutputString(ss.str());
            std::cout << "> ";
            continue;
        }
        if (buffer == "loop") {
            std::signal(SIGINT, signalHandler);
            Utils::loopExitFlag = true;
            while (Utils::loopExitFlag){
                std::stringstream ss;
                this->components_map.incrementTick();
                ss << "tick: " << this->components_map.getTick() << std::endl;
                ss << "input(s):" << std::endl;
                for (const auto& currentInput : this->listInputs)
                {
                    auto tmpInput = this->components_map.getComponent(currentInput);
                    if (tmpInput == nullptr)
                        continue;
                    ss << "\t" << currentInput << ": " << tmpInput->getPinState(1) << std::endl;
                }
                ss << "output(s):" << std::endl;
                for (const auto& currentOutput : this->listOutputs)
                {
                    auto tmpOutput = this->components_map.getComponent(currentOutput);
                    if (tmpOutput == nullptr)
                        continue;
                    ss << "\t" << currentOutput << ": " << tmpOutput->compute(1, this->components_map) << std::endl;
                }
                for (const auto& currentLogger : this->listLogger)
                {
                    auto tmpOutput = this->components_map.getComponent(currentLogger);
                    if (tmpOutput == nullptr)
                        continue;
                    tmpOutput->compute(1, this->components_map);
                }
                this->setOutputString(ss.str());
            }
            std::signal(SIGINT, SIG_DFL);
            std::cout << this->getOutputString();
            std::cout << "> ";
            continue;
        }
        if (this->inputIsValid(buffer)) {
            std::cout << "> ";
            continue;
        }
        std::cout << "Invalid Command" << std::endl;
        std::cout << "> ";
    }
}

void nts::Shell::addComponent(const std::string& name, const std::string& component)
{
    this->factory.CreateComponent(component, name, this->components_map);
}

std::shared_ptr<nts::IComponent> nts::Shell::getComponent(const std::string& name) const
{
    return this->components_map.getComponent(name);
}

void nts::Shell::addLink(const std::string& from, const std::string& to) const
{
    const std::list<std::string> fromWordArray = Utils::myStrToWordArray(from, ":");
    const std::list<std::string> toWordArray = Utils::myStrToWordArray(to, ":");

    std::cout << fromWordArray.front() << std::endl;
    std::cout << fromWordArray.back() << std::endl;
    std::cout << toWordArray.front() << std::endl;
    std::cout << toWordArray.back() << std::endl;
    if (this->components_map.isEmpty())
        throw NoChipsetFailure();
    if (getComponent(fromWordArray.front()) == nullptr || getComponent(toWordArray.front()) == nullptr)
        throw ComponentDontExist();
    if (fromWordArray.front().empty() || toWordArray.front().empty() ||
        fromWordArray.back().empty() || toWordArray.back().empty())
        throw NoChipsetFailure();
    this->getComponent(fromWordArray.front())->setLink(std::stoi(fromWordArray.back()),toWordArray.front(), std::stoi(toWordArray.back()));
    int i = 1;
    i = i;
}

void nts::Shell::addInput(const std::string& input)
{
    this->listInputs.push_back(input);
}

void nts::Shell::addOutput(const std::string& output)
{
    this->listOutputs.push_back(output);
}

void nts::Shell::addLogger(const std::string& logger)
{
    this->listLogger.push_back(logger);
}

std::string nts::Shell::getOutputString() const
{
    return this->outputString;
}

void nts::Shell::setOutputString(const std::string& output)
{
    this->outputString.clear();
    this->outputString = output;
}

bool nts::Shell::listEmpty() const
{
  return this->listInputs.empty() || this->listOutputs.empty();
}
