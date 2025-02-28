/*
** EPITECH PROJECT, 2025
** XorComponent.cpp
** File description:
** XorComponent.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "XorComponent.hpp"

nts::XorComponent::XorComponent(const std::string &name) : AComponent(3, name)
{}

nts::Tristate nts::XorComponent::compute(std::size_t pin, const Map& map)
{
    this->_pins[1]->setState(this->getLink(1, map));
    this->_pins[2]->setState(this->getLink(2, map));
    if (pin != 3)
        return Undefined;

    Tristate pin1 = this->_pins[1]->getState();
    Tristate pin2 = this->_pins[2]->getState();

    if (pin1 == True && pin2 == True)
        return False;
    if (pin1 == Undefined || pin2 == Undefined)
        return Undefined;
    if (pin1 == False && pin2 == False)
        return False;
    return True;
}
