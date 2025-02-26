/*
** EPITECH PROJECT, 2025
** main.cpp
** File description:
** main.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include <Shell.hpp>

#include "HelloWorld.hpp"

int main(void)
{
    Shell shell;

    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("and1", "and");

    shell.getComponent("and1")->setLink(1, "true1", 1);
    shell.getComponent("and1")->setLink(2, "true2", 1);
    std::cout << shell.getComponent("and1")->compute(3, shell.components_map) << std::endl;

    print_hello_world();
}
