/*
** EPITECH PROJECT, 2025
** 4069Component.cpp
** File description:
** 4069Component.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "4069Component.hpp"

nts::C4069Component::C4069Component(const std::string& name) : AComponent(14, name)
{}

static nts::Tristate notGate(nts::Tristate pin1)
{
    if (pin1 == nts::True )
        return nts::False;
    if (pin1 == nts::False)
        return nts::True;
    return nts::Undefined;
}

nts::Tristate nts::C4069Component::compute(std::size_t pin, Map& map)
{
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
    this->_pins[3]->setState(this->getLink(3, map));
    this->_pins[5]->setState(this->getLink(5, map));
    this->_pins[13]->setState(this->getLink(13, map));
    this->_pins[11]->setState(this->getLink(11, map));
    this->_pins[9]->setState(this->getLink(9, map));
    switch (pin)
    {
    case 2:
        return notGate(this->_pins[1]->getState());
    case 4:
        return notGate(this->_pins[3]->getState());
    case 6:
        return notGate(this->_pins[5]->getState());
    case 8:
        return notGate(this->_pins[9]->getState());
    case 10:
        return notGate(this->_pins[11]->getState());
    case 12:
        return notGate(this->_pins[13]->getState());
    default:
        return Undefined;
    }
}
