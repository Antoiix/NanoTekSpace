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
#include "Utils/TestUtils.hpp"

Test(main, test_hello_world)
{
    TestUtils util("../tests/Test_main.txt");

    print_hello_world();

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(main_two, test_hello_world)
{
    TestUtils util("../tests/Test_main.txt");

    print_hello_world();

    cr_assert_str_eq(util.End(), "Hello World!\n");
}
