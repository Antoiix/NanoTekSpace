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
    static void getExecutionCommands();

    void addComponent(const std::string &name, const std::string &component);
    std::shared_ptr<nts::IComponent> getComponent(const std::string &name) const;
    nts::Map components_map;

private:
    nts::Factory factory;
};

#endif //NANOTEKSPICE_SHELL_HPP
