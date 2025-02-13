/*
** EPITECH PROJECT, 2025
** NanoTekSpice
** File description:
** Test_Utils.cpp
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "Utils/TestUtils.hpp"
#include "Utils.hpp"

Test(myStrToWordArray, commonSpaceCase)
{
    TestUtils util("../tests/txt_for_Tests_Utils/strToWordArray.txt");

    std::list<std::string> word_array = Utils::myStrToWordArray("toto tourte test tata", " ");

    for (auto word: word_array)
        std::cout << word << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(myStrToWordArray, SpaceTabCase)
{
    TestUtils util("../tests/txt_for_Tests_Utils/strToWordArray.txt");

    std::list<std::string> word_array = Utils::myStrToWordArray("toto\ttourte\ttest tata", "\t ");

    for (auto word: word_array)
        std::cout << word << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(myStrToWordArray, multipleSpaceTabCase)
{
    TestUtils util("../tests/txt_for_Tests_Utils/strToWordArray.txt");

    std::list<std::string> word_array = Utils::myStrToWordArray("toto \t tourte \t\t\t test     tata", "\t ");

    for (auto word: word_array)
        std::cout << word << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(myStrToWordArray, multipleBeginEndSpaceTabCase)
{
    TestUtils util("../tests/txt_for_Tests_Utils/strToWordArray.txt");

    std::list<std::string> word_array = Utils::myStrToWordArray("  \t toto\t tourte\t test tata  \t ", "\t ");

    for (auto word: word_array)
        std::cout << word << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(remove_comment, justComment)
{
    TestUtils util("../tests/txt_for_Tests_Utils/remove_comment_justComment.txt");

    std::string string = Utils::remove_comment("# ceci est un commentaire qui doit disparaitre");

    std::cout << string << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(remove_comment, commonCase)
{
    TestUtils util("../tests/txt_for_Tests_Utils/remove_comment_commonCase.txt");

    std::string string = Utils::remove_comment("ce texte doit etre gardé# ceci est un commentaire qui doit disparaitre");

    std::cout << string << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}

Test(remove_comment, emptyString)
{
    TestUtils util("../tests/txt_for_Tests_Utils/remove_comment_justComment.txt");

    std::string string = Utils::remove_comment("");

    std::cout << string << std::endl;

    cr_assert_str_eq(util.End(), util.GetFileContent());
}


