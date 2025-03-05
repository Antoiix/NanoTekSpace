/*
** EPITECH PROJECT, 2025
** NanoTekSpice
** File description:
** parsing.cpp
*/

#include "Parsing.hpp"

nts::Shell chooseFunction(nts::Shell shell, TYPE actual, const std::list<std::string>& word_array)
{
    if (word_array.size() == 2 && actual != NOTHING) {
        if (actual == LINKS)
            shell.addLink(word_array.front(), word_array.back());
        if (actual == CHIPSET)
        {
            if (shell.getComponent(word_array.back()) != nullptr)
                throw NameAlreadyUsed();
            shell.addComponent(word_array.back(), word_array.front());
            if (word_array.front() == "input" || word_array.front() == "clock")
                shell.addInput(word_array.back());
            if (word_array.front() == "output")
                shell.addOutput(word_array.back());
            if (word_array.front() == "logger")
                shell.addLogger(word_array.back());
        }
    } else {
        throw InvalidFileInstruction();
    }
    return shell;
}

nts::Shell manage_parsing(nts::Shell shell ,const std::string& file_name)
{
    std::string buffer = Utils::getFileContent(file_name);
    std::list<std::string> line_array = Utils::myStrToWordArray(buffer, "\n");
    std::list<std::string> temp_word_array;
    TYPE actual = NOTHING;

    for (auto line: line_array) {
        line = Utils::removeComment(line);
        if (line.empty())
          continue;
        temp_word_array = Utils::myStrToWordArray(line, " \t");

        if (temp_word_array.front().front() == '#')
            continue;
        if (std::strcmp(temp_word_array.front().c_str(), ".chipsets:") == 0) {
            actual = CHIPSET;
            continue;
        }
        if (std::strcmp(temp_word_array.front().c_str(), ".links:") == 0) {
            actual = LINKS;
            continue;
        }
        shell = chooseFunction(shell, actual, temp_word_array);
    }
    return shell;
}
