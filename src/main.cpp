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

int main(int ac, char **argv)
{
    if (ac != 2)
    {
        std::cerr << "Invalid number of arguments." << std::endl;
        return 84;
    }
    Shell shell;

    shell = manage_parsing(shell, argv[1]);

    shell.getExecutionCommands();
    print_hello_world();
}
