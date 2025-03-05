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

Test(C4071Component, test_false_false_gate1)
{
    TestUtils util("tests/FalseTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(1, "false1", 1);
    shell.getComponent("comp1")->setLink(2, "false2", 1);
    std::cout << shell.getComponent("comp1")->compute(3, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_true_true_gate1)
{
    TestUtils util("tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(1, "true1", 1);
    shell.getComponent("comp1")->setLink(2, "true2", 1);
    std::cout << shell.getComponent("comp1")->compute(3, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_true_false_gate1)
{
    TestUtils util("tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(1, "true1", 1);
    shell.getComponent("comp1")->setLink(2, "false2", 1);
    std::cout << shell.getComponent("comp1")->compute(3, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_false_undefined_gate1)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(1, "input1", 1);
    shell.getComponent("comp1")->setLink(2, "false2", 1);
    std::cout << shell.getComponent("comp1")->compute(3, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_true_undefined_gate1)
{
    TestUtils util("tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(1, "input1", 1);
    shell.getComponent("comp1")->setLink(2, "true2", 1);
    std::cout << shell.getComponent("comp1")->compute(3, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_undefined_undefined_gate1)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("input2", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(1, "input1", 1);
    shell.getComponent("comp1")->setLink(2, "input2", 1);
    std::cout << shell.getComponent("comp1")->compute(3, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_wrong_pin_gate1)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(1, "false1", 1);
    shell.getComponent("comp1")->setLink(2, "true2", 1);
    std::cout << shell.getComponent("comp1")->compute(7, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_false_false_gate2)
{
    TestUtils util("tests/FalseTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(5, "false1", 1);
    shell.getComponent("comp1")->setLink(6, "false2", 1);
    std::cout << shell.getComponent("comp1")->compute(4, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_true_true_gate2)
{
    TestUtils util("tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(5, "true1", 1);
    shell.getComponent("comp1")->setLink(6, "true2", 1);
    std::cout << shell.getComponent("comp1")->compute(4, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_true_false_gate2)
{
    TestUtils util("tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(5, "true1", 1);
    shell.getComponent("comp1")->setLink(6, "false2", 1);
    std::cout << shell.getComponent("comp1")->compute(4, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_false_undefined_gate2)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(5, "input1", 1);
    shell.getComponent("comp1")->setLink(6, "false2", 1);
    std::cout << shell.getComponent("comp1")->compute(4, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_true_undefined_gate2)
{
    TestUtils util("tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(5, "input1", 1);
    shell.getComponent("comp1")->setLink(6, "true2", 1);
    std::cout << shell.getComponent("comp1")->compute(4, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_undefined_undefined_gate2)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("input2", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(5, "input1", 1);
    shell.getComponent("comp1")->setLink(6, "input2", 1);
    std::cout << shell.getComponent("comp1")->compute(4, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_wrong_pin_gate2)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(5, "false1", 1);
    shell.getComponent("comp1")->setLink(6, "true2", 1);
    std::cout << shell.getComponent("comp1")->compute(18, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_false_false_gate3)
{
    TestUtils util("tests/FalseTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(8, "false1", 1);
    shell.getComponent("comp1")->setLink(9, "false2", 1);
    std::cout << shell.getComponent("comp1")->compute(10, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_true_true_gate3)
{
    TestUtils util("tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(8, "true1", 1);
    shell.getComponent("comp1")->setLink(9, "true2", 1);
    std::cout << shell.getComponent("comp1")->compute(10, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_true_false_gate3)
{
    TestUtils util("tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(8, "true1", 1);
    shell.getComponent("comp1")->setLink(9, "false2", 1);
    std::cout << shell.getComponent("comp1")->compute(10, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_false_undefined_gate3)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(8, "input1", 1);
    shell.getComponent("comp1")->setLink(9, "false2", 1);
    std::cout << shell.getComponent("comp1")->compute(10, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_true_undefined_gate3)
{
    TestUtils util("tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(8, "input1", 1);
    shell.getComponent("comp1")->setLink(9, "true2", 1);
    std::cout << shell.getComponent("comp1")->compute(10, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_undefined_undefined_gate3)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("input2", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(8, "input1", 1);
    shell.getComponent("comp1")->setLink(9, "input2", 1);
    std::cout << shell.getComponent("comp1")->compute(10, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_wrong_pin_gate3)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(8, "false1", 1);
    shell.getComponent("comp1")->setLink(9, "true2", 1);
    std::cout << shell.getComponent("comp1")->compute(14, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_false_false_gate4)
{
    TestUtils util("tests/FalseTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(12, "false1", 1);
    shell.getComponent("comp1")->setLink(13, "false2", 1);
    std::cout << shell.getComponent("comp1")->compute(11, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_true_true_gate4)
{
    TestUtils util("tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(12, "true1", 1);
    shell.getComponent("comp1")->setLink(13, "true2", 1);
    std::cout << shell.getComponent("comp1")->compute(11, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_true_false_gate4)
{
    TestUtils util("tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(12, "true1", 1);
    shell.getComponent("comp1")->setLink(13, "false2", 1);
    std::cout << shell.getComponent("comp1")->compute(11, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_false_undefined_gate4)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(12, "input1", 1);
    shell.getComponent("comp1")->setLink(13, "false2", 1);
    std::cout << shell.getComponent("comp1")->compute(11, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_true_undefined_gate4)
{
    TestUtils util("tests/TrueTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(12, "input1", 1);
    shell.getComponent("comp1")->setLink(13, "true2", 1);
    std::cout << shell.getComponent("comp1")->compute(11, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_undefined_undefined_gate4)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("input2", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(12, "input1", 1);
    shell.getComponent("comp1")->setLink(13, "input2", 1);
    std::cout << shell.getComponent("comp1")->compute(11, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(C4071Component, test_wrong_pin_gate4)
{
    TestUtils util("tests/UndefinedTristate.txt");

    nts::Shell shell;

    shell.addComponent("input1", "input");
    shell.addComponent("true1", "true");
    shell.addComponent("true2", "true");
    shell.addComponent("false1", "false");
    shell.addComponent("false2", "false");
    shell.addComponent("comp1", "4071");

    shell.getComponent("comp1")->setLink(12, "false1", 1);
    shell.getComponent("comp1")->setLink(13, "true2", 1);
    std::cout << shell.getComponent("comp1")->compute(6, shell.components_map) << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}