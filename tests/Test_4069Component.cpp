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

Test(C4069Component, test_false1)
{
    TestUtils util("../tests/TrueTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(1, "false1", 1);
    std::cout << shell.getComponent("comp1")->compute(2, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_true1)
{
    TestUtils util("../tests/FalseTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(1, "true1", 1);
    std::cout << shell.getComponent("comp1")->compute(2, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_undefined1)
{
    TestUtils util("../tests/UndefinedTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(1, "input1", 1);
    std::cout << shell.getComponent("comp1")->compute(2, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_wrong_pin1)
{
    TestUtils util("../tests/UndefinedTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(1, "false1", 1);
    std::cout << shell.getComponent("comp1")->compute(1, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_false2)
{
    TestUtils util("../tests/TrueTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(3, "false1", 1);
    std::cout << shell.getComponent("comp1")->compute(4, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_true2)
{
    TestUtils util("../tests/FalseTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(3, "true1", 1);
    std::cout << shell.getComponent("comp1")->compute(4, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_undefined2)
{
    TestUtils util("../tests/UndefinedTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(3, "input1", 1);
    std::cout << shell.getComponent("comp1")->compute(4, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_wrong_pin2)
{
    TestUtils util("../tests/UndefinedTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(3, "false1", 1);
    std::cout << shell.getComponent("comp1")->compute(7, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_false3)
{
    TestUtils util("../tests/TrueTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(5, "false1", 1);
    std::cout << shell.getComponent("comp1")->compute(6, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_true3)
{
    TestUtils util("../tests/FalseTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(5, "true1", 1);
    std::cout << shell.getComponent("comp1")->compute(6, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_undefined3)
{
    TestUtils util("../tests/UndefinedTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(5, "input1", 1);
    std::cout << shell.getComponent("comp1")->compute(6, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_wrong_pin3)
{
    TestUtils util("../tests/UndefinedTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(5, "false1", 1);
    std::cout << shell.getComponent("comp1")->compute(14, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_false4)
{
    TestUtils util("../tests/TrueTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(9, "false1", 1);
    std::cout << shell.getComponent("comp1")->compute(8, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_true4)
{
    TestUtils util("../tests/FalseTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(9, "true1", 1);
    std::cout << shell.getComponent("comp1")->compute(8, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_undefined4)
{
    TestUtils util("../tests/UndefinedTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(9, "input1", 1);
    std::cout << shell.getComponent("comp1")->compute(8, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_wrong_pin4)
{
    TestUtils util("../tests/UndefinedTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(9, "false1", 1);
    std::cout << shell.getComponent("comp1")->compute(9, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_false5)
{
    TestUtils util("../tests/TrueTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(11, "false1", 1);
    std::cout << shell.getComponent("comp1")->compute(10, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_true5)
{
    TestUtils util("../tests/FalseTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(11, "true1", 1);
    std::cout << shell.getComponent("comp1")->compute(10, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_undefined5)
{
    TestUtils util("../tests/UndefinedTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(11, "input1", 1);
    std::cout << shell.getComponent("comp1")->compute(10, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_wrong_pin5)
{
    TestUtils util("../tests/UndefinedTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(11, "false1", 1);
    std::cout << shell.getComponent("comp1")->compute(17, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_false6)
{
    TestUtils util("../tests/TrueTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(13, "false1", 1);
    std::cout << shell.getComponent("comp1")->compute(12, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_true6)
{
    TestUtils util("../tests/FalseTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(13, "true1", 1);
    std::cout << shell.getComponent("comp1")->compute(12, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_undefined6)
{
    TestUtils util("../tests/UndefinedTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(13, "input1", 1);
    std::cout << shell.getComponent("comp1")->compute(12, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4069Component, test_wrong_pin6)
{
    TestUtils util("../tests/UndefinedTristate.txt");

    Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4069");

    shell.getComponent("comp1")->setLink(13, "false1", 1);
    std::cout << shell.getComponent("comp1")->compute(25, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}