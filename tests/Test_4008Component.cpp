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

Test(C4008Component, False_output_1)
{
    TestUtils util("tests/FalseTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(1, "False", 1);
    shell.getComponent("comp")->setLink(2, "False", 1);
    shell.getComponent("comp")->setLink(3, "False", 1);
    shell.getComponent("comp")->setLink(4, "False", 1);
    shell.getComponent("comp")->setLink(5, "False", 1);
    shell.getComponent("comp")->setLink(6, "False", 1);
    shell.getComponent("comp")->setLink(7, "False", 1);
    shell.getComponent("comp")->setLink(9, "False", 1);
    std::cout << shell.getComponent("comp")->compute(10, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, False_output_2)
{
    TestUtils util("tests/FalseTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(1, "False", 1);
    shell.getComponent("comp")->setLink(2, "False", 1);
    shell.getComponent("comp")->setLink(3, "False", 1);
    shell.getComponent("comp")->setLink(4, "False", 1);
    shell.getComponent("comp")->setLink(5, "False", 1);
    shell.getComponent("comp")->setLink(6, "False", 1);
    shell.getComponent("comp")->setLink(7, "False", 1);
    shell.getComponent("comp")->setLink(9, "False", 1);
    std::cout << shell.getComponent("comp")->compute(11, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, False_output_3)
{
    TestUtils util("tests/FalseTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(1, "False", 1);
    shell.getComponent("comp")->setLink(2, "False", 1);
    shell.getComponent("comp")->setLink(3, "False", 1);
    shell.getComponent("comp")->setLink(4, "False", 1);
    shell.getComponent("comp")->setLink(5, "False", 1);
    shell.getComponent("comp")->setLink(6, "False", 1);
    shell.getComponent("comp")->setLink(7, "False", 1);
    shell.getComponent("comp")->setLink(9, "False", 1);
    std::cout << shell.getComponent("comp")->compute(12, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, False_output_4)
{
    TestUtils util("tests/FalseTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "False", 1);
    shell.getComponent("comp")->setLink(1, "False", 1);
    shell.getComponent("comp")->setLink(2, "False", 1);
    shell.getComponent("comp")->setLink(3, "False", 1);
    shell.getComponent("comp")->setLink(4, "False", 1);
    shell.getComponent("comp")->setLink(5, "False", 1);
    shell.getComponent("comp")->setLink(6, "False", 1);
    shell.getComponent("comp")->setLink(7, "False", 1);
    shell.getComponent("comp")->setLink(9, "False", 1);
    std::cout << shell.getComponent("comp")->compute(13, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, False_output_5)
{
    TestUtils util("tests/FalseTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "False", 1);
    shell.getComponent("comp")->setLink(1, "False", 1);
    shell.getComponent("comp")->setLink(2, "False", 1);
    shell.getComponent("comp")->setLink(3, "False", 1);
    shell.getComponent("comp")->setLink(4, "False", 1);
    shell.getComponent("comp")->setLink(5, "False", 1);
    shell.getComponent("comp")->setLink(6, "False", 1);
    shell.getComponent("comp")->setLink(7, "False", 1);
    shell.getComponent("comp")->setLink(9, "False", 1);
    std::cout << shell.getComponent("comp")->compute(14, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, True_output_1)
{
    TestUtils util("tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "True", 1);
    shell.getComponent("comp")->setLink(1, "True", 1);
    shell.getComponent("comp")->setLink(2, "True", 1);
    shell.getComponent("comp")->setLink(3, "True", 1);
    shell.getComponent("comp")->setLink(4, "True", 1);
    shell.getComponent("comp")->setLink(5, "True", 1);
    shell.getComponent("comp")->setLink(6, "True", 1);
    shell.getComponent("comp")->setLink(7, "True", 1);
    shell.getComponent("comp")->setLink(9, "True", 1);
    std::cout << shell.getComponent("comp")->compute(10, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, True_output_2)
{
    TestUtils util("tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "True", 1);
    shell.getComponent("comp")->setLink(1, "True", 1);
    shell.getComponent("comp")->setLink(2, "True", 1);
    shell.getComponent("comp")->setLink(3, "True", 1);
    shell.getComponent("comp")->setLink(4, "True", 1);
    shell.getComponent("comp")->setLink(5, "True", 1);
    shell.getComponent("comp")->setLink(6, "True", 1);
    shell.getComponent("comp")->setLink(7, "True", 1);
    shell.getComponent("comp")->setLink(9, "True", 1);
    std::cout << shell.getComponent("comp")->compute(11, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, True_output_3)
{
    TestUtils util("tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "True", 1);
    shell.getComponent("comp")->setLink(1, "True", 1);
    shell.getComponent("comp")->setLink(2, "True", 1);
    shell.getComponent("comp")->setLink(3, "True", 1);
    shell.getComponent("comp")->setLink(4, "True", 1);
    shell.getComponent("comp")->setLink(5, "True", 1);
    shell.getComponent("comp")->setLink(6, "True", 1);
    shell.getComponent("comp")->setLink(7, "True", 1);
    shell.getComponent("comp")->setLink(9, "True", 1);
    std::cout << shell.getComponent("comp")->compute(12, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, True_output_4)
{
    TestUtils util("tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "True", 1);
    shell.getComponent("comp")->setLink(1, "True", 1);
    shell.getComponent("comp")->setLink(2, "True", 1);
    shell.getComponent("comp")->setLink(3, "True", 1);
    shell.getComponent("comp")->setLink(4, "True", 1);
    shell.getComponent("comp")->setLink(5, "True", 1);
    shell.getComponent("comp")->setLink(6, "True", 1);
    shell.getComponent("comp")->setLink(7, "True", 1);
    shell.getComponent("comp")->setLink(9, "True", 1);
    std::cout << shell.getComponent("comp")->compute(13, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, True_output_5)
{
    TestUtils util("tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "True", 1);
    shell.getComponent("comp")->setLink(1, "True", 1);
    shell.getComponent("comp")->setLink(2, "True", 1);
    shell.getComponent("comp")->setLink(3, "True", 1);
    shell.getComponent("comp")->setLink(4, "True", 1);
    shell.getComponent("comp")->setLink(5, "True", 1);
    shell.getComponent("comp")->setLink(6, "True", 1);
    shell.getComponent("comp")->setLink(7, "True", 1);
    shell.getComponent("comp")->setLink(9, "True", 1);
    std::cout << shell.getComponent("comp")->compute(14, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, Undefined_output_1)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "Input", 1);
    shell.getComponent("comp")->setLink(1, "Input", 1);
    shell.getComponent("comp")->setLink(2, "Input", 1);
    shell.getComponent("comp")->setLink(3, "Input", 1);
    shell.getComponent("comp")->setLink(4, "Input", 1);
    shell.getComponent("comp")->setLink(5, "Input", 1);
    shell.getComponent("comp")->setLink(6, "Input", 1);
    shell.getComponent("comp")->setLink(7, "Input", 1);
    shell.getComponent("comp")->setLink(9, "Input", 1);
    std::cout << shell.getComponent("comp")->compute(10, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, Undefined_output_2)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "Input", 1);
    shell.getComponent("comp")->setLink(1, "Input", 1);
    shell.getComponent("comp")->setLink(2, "Input", 1);
    shell.getComponent("comp")->setLink(3, "Input", 1);
    shell.getComponent("comp")->setLink(4, "Input", 1);
    shell.getComponent("comp")->setLink(5, "Input", 1);
    shell.getComponent("comp")->setLink(6, "Input", 1);
    shell.getComponent("comp")->setLink(7, "Input", 1);
    shell.getComponent("comp")->setLink(9, "Input", 1);
    std::cout << shell.getComponent("comp")->compute(11, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, Undefined_output_3)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "Input", 1);
    shell.getComponent("comp")->setLink(1, "Input", 1);
    shell.getComponent("comp")->setLink(2, "Input", 1);
    shell.getComponent("comp")->setLink(3, "Input", 1);
    shell.getComponent("comp")->setLink(4, "Input", 1);
    shell.getComponent("comp")->setLink(5, "Input", 1);
    shell.getComponent("comp")->setLink(6, "Input", 1);
    shell.getComponent("comp")->setLink(7, "Input", 1);
    shell.getComponent("comp")->setLink(9, "Input", 1);
    std::cout << shell.getComponent("comp")->compute(12, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, Undefined_output_4)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "Input", 1);
    shell.getComponent("comp")->setLink(1, "Input", 1);
    shell.getComponent("comp")->setLink(2, "Input", 1);
    shell.getComponent("comp")->setLink(3, "Input", 1);
    shell.getComponent("comp")->setLink(4, "Input", 1);
    shell.getComponent("comp")->setLink(5, "Input", 1);
    shell.getComponent("comp")->setLink(6, "Input", 1);
    shell.getComponent("comp")->setLink(7, "Input", 1);
    shell.getComponent("comp")->setLink(9, "Input", 1);
    std::cout << shell.getComponent("comp")->compute(13, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, Undefined_output_5)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "Input", 1);
    shell.getComponent("comp")->setLink(1, "Input", 1);
    shell.getComponent("comp")->setLink(2, "Input", 1);
    shell.getComponent("comp")->setLink(3, "Input", 1);
    shell.getComponent("comp")->setLink(4, "Input", 1);
    shell.getComponent("comp")->setLink(5, "Input", 1);
    shell.getComponent("comp")->setLink(6, "Input", 1);
    shell.getComponent("comp")->setLink(7, "Input", 1);
    shell.getComponent("comp")->setLink(9, "Input", 1);
    std::cout << shell.getComponent("comp")->compute(14, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, Undefined_output_pin13_pin14_1)
{
    TestUtils util("tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "Input", 1);
    shell.getComponent("comp")->setLink(1, "Input", 1);
    shell.getComponent("comp")->setLink(2, "True", 1);
    shell.getComponent("comp")->setLink(3, "True", 1);
    shell.getComponent("comp")->setLink(4, "True", 1);
    shell.getComponent("comp")->setLink(5, "True", 1);
    shell.getComponent("comp")->setLink(6, "True", 1);
    shell.getComponent("comp")->setLink(7, "True", 1);
    shell.getComponent("comp")->setLink(9, "True", 1);
    std::cout << shell.getComponent("comp")->compute(10, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, Undefined_output_pin13_pin14_2)
{
    TestUtils util("tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "Input", 1);
    shell.getComponent("comp")->setLink(1, "Input", 1);
    shell.getComponent("comp")->setLink(2, "True", 1);
    shell.getComponent("comp")->setLink(3, "True", 1);
    shell.getComponent("comp")->setLink(4, "True", 1);
    shell.getComponent("comp")->setLink(5, "True", 1);
    shell.getComponent("comp")->setLink(6, "True", 1);
    shell.getComponent("comp")->setLink(7, "True", 1);
    shell.getComponent("comp")->setLink(9, "True", 1);
    std::cout << shell.getComponent("comp")->compute(11, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, Undefined_output_pin13_pin14_3)
{
    TestUtils util("tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "Input", 1);
    shell.getComponent("comp")->setLink(1, "Input", 1);
    shell.getComponent("comp")->setLink(2, "True", 1);
    shell.getComponent("comp")->setLink(3, "True", 1);
    shell.getComponent("comp")->setLink(4, "True", 1);
    shell.getComponent("comp")->setLink(5, "True", 1);
    shell.getComponent("comp")->setLink(6, "True", 1);
    shell.getComponent("comp")->setLink(7, "True", 1);
    shell.getComponent("comp")->setLink(9, "True", 1);
    std::cout << shell.getComponent("comp")->compute(12, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, Undefined_output_pin13_pin14_4)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "Input", 1);
    shell.getComponent("comp")->setLink(1, "Input", 1);
    shell.getComponent("comp")->setLink(2, "True", 1);
    shell.getComponent("comp")->setLink(3, "True", 1);
    shell.getComponent("comp")->setLink(4, "True", 1);
    shell.getComponent("comp")->setLink(5, "True", 1);
    shell.getComponent("comp")->setLink(6, "True", 1);
    shell.getComponent("comp")->setLink(7, "True", 1);
    shell.getComponent("comp")->setLink(9, "True", 1);
    std::cout << shell.getComponent("comp")->compute(13, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, Undefined_output_pin13_pin14_5)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "Input", 1);
    shell.getComponent("comp")->setLink(1, "Input", 1);
    shell.getComponent("comp")->setLink(2, "True", 1);
    shell.getComponent("comp")->setLink(3, "True", 1);
    shell.getComponent("comp")->setLink(4, "True", 1);
    shell.getComponent("comp")->setLink(5, "True", 1);
    shell.getComponent("comp")->setLink(6, "True", 1);
    shell.getComponent("comp")->setLink(7, "True", 1);
    shell.getComponent("comp")->setLink(9, "True", 1);
    std::cout << shell.getComponent("comp")->compute(14, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, Undefined_first_input_1)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "True", 1);
    shell.getComponent("comp")->setLink(1, "True", 1);
    shell.getComponent("comp")->setLink(2, "True", 1);
    shell.getComponent("comp")->setLink(3, "True", 1);
    shell.getComponent("comp")->setLink(4, "True", 1);
    shell.getComponent("comp")->setLink(5, "True", 1);
    shell.getComponent("comp")->setLink(6, "True", 1);
    shell.getComponent("comp")->setLink(7, "True", 1);
    shell.getComponent("comp")->setLink(9, "Input", 1);
    std::cout << shell.getComponent("comp")->compute(10, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, Undefined_first_input_2)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "True", 1);
    shell.getComponent("comp")->setLink(1, "True", 1);
    shell.getComponent("comp")->setLink(2, "True", 1);
    shell.getComponent("comp")->setLink(3, "True", 1);
    shell.getComponent("comp")->setLink(4, "True", 1);
    shell.getComponent("comp")->setLink(5, "True", 1);
    shell.getComponent("comp")->setLink(6, "True", 1);
    shell.getComponent("comp")->setLink(7, "True", 1);
    shell.getComponent("comp")->setLink(9, "Input", 1);
    std::cout << shell.getComponent("comp")->compute(11, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, Undefined_first_input_3)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "True", 1);
    shell.getComponent("comp")->setLink(1, "True", 1);
    shell.getComponent("comp")->setLink(2, "True", 1);
    shell.getComponent("comp")->setLink(3, "True", 1);
    shell.getComponent("comp")->setLink(4, "True", 1);
    shell.getComponent("comp")->setLink(5, "True", 1);
    shell.getComponent("comp")->setLink(6, "True", 1);
    shell.getComponent("comp")->setLink(7, "True", 1);
    shell.getComponent("comp")->setLink(9, "Input", 1);
    std::cout << shell.getComponent("comp")->compute(12, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, Undefined_first_input_4)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "True", 1);
    shell.getComponent("comp")->setLink(1, "True", 1);
    shell.getComponent("comp")->setLink(2, "True", 1);
    shell.getComponent("comp")->setLink(3, "True", 1);
    shell.getComponent("comp")->setLink(4, "True", 1);
    shell.getComponent("comp")->setLink(5, "True", 1);
    shell.getComponent("comp")->setLink(6, "True", 1);
    shell.getComponent("comp")->setLink(7, "True", 1);
    shell.getComponent("comp")->setLink(9, "Input", 1);
    std::cout << shell.getComponent("comp")->compute(13, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4008Component, Undefined_first_input_5)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("comp", "4008");
    shell.addComponent("True", "true");
    shell.addComponent("False", "false");
    shell.addComponent("Input", "input");

    shell.getComponent("comp")->setLink(15, "True", 1);
    shell.getComponent("comp")->setLink(1, "True", 1);
    shell.getComponent("comp")->setLink(2, "True", 1);
    shell.getComponent("comp")->setLink(3, "True", 1);
    shell.getComponent("comp")->setLink(4, "True", 1);
    shell.getComponent("comp")->setLink(5, "True", 1);
    shell.getComponent("comp")->setLink(6, "True", 1);
    shell.getComponent("comp")->setLink(7, "True", 1);
    shell.getComponent("comp")->setLink(9, "Input", 1);
    std::cout << shell.getComponent("comp")->compute(14, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}
