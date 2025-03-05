/*
** EPITECH PROJECT, 2025
** NanoTekSpice
** File description:
** loggerComponent.cpp
*/

#include "LoggerComponent.hpp"

#include <Utils.hpp>

nts::LoggerComponent::LoggerComponent(std::string name) : AComponent(10, name)
{}

nts::Tristate nts::LoggerComponent::compute(std::size_t pin, Map &map)
{
    int value = 0;
    std::string str;

    auto tmpPair = std::make_pair(this->_name, pin);
    for (const auto& [fst, snd] : map.computed_pins)
    {
        if (fst == tmpPair.first && snd == tmpPair.second)
        {
            auto tmpPin = this->_pins.at(pin);
            if (tmpPin != nullptr)
                return tmpPin->getState();
            return Undefined;
        }
    }
    map.computed_pins.emplace_back(this->_name, pin);
    this->_pins[1]->setState(this->getLink(1, map));
    this->_pins[2]->setState(this->getLink(2, map));
    this->_pins[3]->setState(this->getLink(3, map));
    this->_pins[4]->setState(this->getLink(4, map));
    this->_pins[5]->setState(this->getLink(5, map));
    this->_pins[6]->setState(this->getLink(6, map));
    this->_pins[7]->setState(this->getLink(7, map));
    this->_pins[8]->setState(this->getLink(8, map));
    this->_pins[9]->setState(this->getLink(9, map));
    this->_pins[10]->setState(this->getLink(10, map));

    if (this->_pins[10]->getState() == False && this->_pins[9]->getState() == True) {
        for (int i = 8; i > 0; i--) {
            if (this->_pins[i]->getState() == True) {
                value += 1;
                if (i != 1)
                    value = value << 1;
            }
            if (this->_pins[i]->getState() == False) {
                value += 0b00;
                if (i != 1)
                    value = value << 1;
            }
            return Undefined;
        }

    }
    str += char(value);
    Utils::writeInFile(str, "log.bin");
    return Undefined;
}

