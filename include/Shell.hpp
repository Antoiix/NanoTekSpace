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
#include <Factory.hpp>
#include <list>
#include <Map.hpp>

class Shell
{
public:
    Shell() = default;
    void getExecutionCommands();

    void addLink(const std::string& from, const std::string& to) const;
    void addComponent(const std::string &name, const std::string &component);
    std::shared_ptr<nts::IComponent> getComponent(const std::string &name) const;
    nts::Map components_map;
    void addInput(const std::string &input);
    void addOutput(const std::string &output);
    void setOutputString(const std::string &output);
    std::string getOutputString() const;
    bool inputIsValid(const std::string& buffer) const;

private:
    std::string outputString;
    std::list<std::string> listInputs;
    std::list<std::string> listOutputs;
    nts::Factory factory;
};

#endif //NANOTEKSPICE_SHELL_HPP
