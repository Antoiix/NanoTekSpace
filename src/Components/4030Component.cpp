/*
** EPITECH PROJECT, 2025
** 4030Component.cpp
** File description:
** 4030Component.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "4030Component.hpp"

nts::C4030Component::C4030Component(const std::string& name) : AComponent(14, name)
{
}

static nts::Tristate xorGate(nts::Tristate pin1, nts::Tristate pin2)
{
    if (pin1 == nts::True && pin2 == nts::True)
        return nts::False;
    if (pin1 == nts::Undefined || pin2 == nts::Undefined)
        return nts::Undefined;
    if (pin1 == nts::False && pin2 == nts::False)
        return nts::False;
    return nts::True;
}

nts::Tristate nts::C4030Component::compute(std::size_t pin, const Map& map)
{
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
        return xorGate(this->_pins[1]->getState(), this->_pins[2]->getState());
    case 4:
        return xorGate(this->_pins[5]->getState(), this->_pins[6]->getState());
    case 10:
        return xorGate(this->_pins[8]->getState(), this->_pins[9]->getState());
    case 11:
        return xorGate(this->_pins[12]->getState(), this->_pins[13]->getState());
    default:
        return Undefined;
    }
}
