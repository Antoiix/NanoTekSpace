/*
** EPITECH PROJECT, 2025
** 4081Component.cpp
** File description:
** 4081Component.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "4081Component.hpp"

nts::C4081Component::C4081Component(const std::string& name) : AComponent(14, name)
{}

static nts::Tristate andGate(nts::Tristate pin1, nts::Tristate pin2)
{
    if (pin1 == nts::True && pin2 == nts::True)
        return nts::True;
    if (pin1 == nts::False || pin2 == nts::False)
        return nts::False;
    return nts::Undefined;
}

nts::Tristate nts::C4081Component::compute(std::size_t pin, Map& map)
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
    this->_pins[2]->setState(this->getLink(2, map));
    this->_pins[5]->setState(this->getLink(5, map));
    this->_pins[6]->setState(this->getLink(6, map));
    this->_pins[8]->setState(this->getLink(8, map));
    this->_pins[9]->setState(this->getLink(9, map));
    this->_pins[12]->setState(this->getLink(12, map));
    this->_pins[13]->setState(this->getLink(13, map));
    switch (pin)
    {
    case 3:
        return andGate(this->_pins[1]->getState(), this->_pins[2]->getState());
    case 4:
        return andGate(this->_pins[5]->getState(), this->_pins[6]->getState());
    case 10:
        return andGate(this->_pins[8]->getState(), this->_pins[9]->getState());
    case 11:
        return andGate(this->_pins[12]->getState(), this->_pins[13]->getState());
    default:
        return Undefined;
    }
}
