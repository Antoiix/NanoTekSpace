/*
** EPITECH PROJECT, 2025
** Test_Picture_ex00.cpp
** File description:
** Test_Picture_ex00.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "HelloWorld.hpp"
#include "Shell.hpp"
#include "Utils/TestUtils.hpp"

Test(NotComponent, test_false)
{
    TestUtils util("../tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "not");

    shell.getComponent("comp1")->setLink(1, "false1", 1);
    std::cout << shell.getComponent("comp1")->compute(2, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(NotComponent, test_true)
{
    TestUtils util("../tests/FalseTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "not");

    shell.getComponent("comp1")->setLink(1, "true1", 1);
    std::cout << shell.getComponent("comp1")->compute(2, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(NotComponent, test_undefined)
{
    TestUtils util("../tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "not");

    shell.getComponent("comp1")->setLink(1, "input1", 1);
    std::cout << shell.getComponent("comp1")->compute(2, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(NotComponent, test_wrong_pin)
{
    TestUtils util("../tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "not");

    shell.getComponent("comp1")->setLink(1, "false1", 1);
    std::cout << shell.getComponent("comp1")->compute(1, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}