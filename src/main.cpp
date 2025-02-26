/*
** EPITECH PROJECT, 2025
** main.cpp
** File description:
** main.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include <Parsing.hpp>
#include <Shell.hpp>

#include "HelloWorld.hpp"

int main(void)
{
    Shell shell;

    shell = manage_parsing(shell, "../test");

    std::cout << shell.getComponent("and1")->compute(3, shell.components_map) << std::endl;

    print_hello_world();
}
