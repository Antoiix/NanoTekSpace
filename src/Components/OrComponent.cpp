/*
** EPITECH PROJECT, 2025
** OrComponent.cpp
** File description:
** OrComponent.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "OrComponent.hpp"

#include <algorithm>

nts::OrComponent::OrComponent(std::string name) : AComponent(3, std::move(name))
{}

nts::Tristate nts::OrComponent::compute(std::size_t pin, const Map &map)
{
    this->_pins[1]->setState(this->getLink(1, map));
    this->_pins[2]->setState(this->getLink(2, map));
    if (pin != 3)
        return Undefined;

    Tristate pin1 = this->_pins[1]->getState();
    Tristate pin2 = this->_pins[2]->getState();

    if (pin1 == True || pin2 == True)
        return True;
    if (pin1 == False && pin2 == False)
        return False;
    return Undefined;
}
