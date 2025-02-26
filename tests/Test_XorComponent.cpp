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

Test(xorComponent, test_false_false)
{
    TestUtils util("../tests/FalseTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "xor");

    shell.getComponent("comp1")->setLink(1, "false1", 1);
    shell.getComponent("comp1")->setLink(2, "false2", 1);
    std::cout << shell.getComponent("comp1")->compute(3, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(xorComponent, test_true_true)
{
    TestUtils util("../tests/FalseTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "xor");

    shell.getComponent("comp1")->setLink(1, "true1", 1);
    shell.getComponent("comp1")->setLink(2, "true2", 1);
    std::cout << shell.getComponent("comp1")->compute(3, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(xorComponent, test_true_false)
{
    TestUtils util("../tests/TrueTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "xor");

    shell.getComponent("comp1")->setLink(1, "true1", 1);
    shell.getComponent("comp1")->setLink(2, "false2", 1);
    std::cout << shell.getComponent("comp1")->compute(3, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(xorComponent, test_false_undefined)
{
    TestUtils util("../tests/UndefinedTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "xor");

    shell.getComponent("comp1")->setLink(1, "input1", 1);
    shell.getComponent("comp1")->setLink(2, "false2", 1);
    std::cout << shell.getComponent("comp1")->compute(3, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(xorComponent, test_true_undefined)
{
    TestUtils util("../tests/UndefinedTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "xor");

    shell.getComponent("comp1")->setLink(1, "input1", 1);
    shell.getComponent("comp1")->setLink(2, "true2", 1);
    std::cout << shell.getComponent("comp1")->compute(3, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(xorComponent, test_undefined_undefined)
{
    TestUtils util("../tests/UndefinedTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("input2", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "or");

    shell.getComponent("comp1")->setLink(1, "input1", 1);
    shell.getComponent("comp1")->setLink(2, "input2", 1);
    std::cout << shell.getComponent("comp1")->compute(3, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(xorComponent, test_wrong_pin)
{
    TestUtils util("../tests/UndefinedTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "xor");

    shell.getComponent("comp1")->setLink(1, "false1", 1);
    shell.getComponent("comp1")->setLink(2, "true2", 1);
    std::cout << shell.getComponent("comp1")->compute(2, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}