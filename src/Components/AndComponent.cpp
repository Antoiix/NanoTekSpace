/*
** EPITECH PROJECT, 2025
** AndComponent.cpp
** File description:
** AndComponent.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "AndComponent.hpp"

#include <algorithm>

#include "Map.hpp"

nts::AndComponent::AndComponent(std::string name) : AComponent(3, std::move(name))
{}

nts::Tristate nts::AndComponent::compute(std::size_t pin, Map &map)
{
    this->_pins[1]->setState(this->getLink(1, map));
    this->_pins[2]->setState(this->getLink(2, map));
    if (pin != 3)
        return Undefined;

    Tristate pin1 = this->_pins[1]->getState();
    Tristate pin2 = this->_pins[2]->getState();

    if (pin1 == Undefined || pin2 == Undefined)
        return Undefined;
    if (pin1 == True && pin2 == True)
        return True;
    return False;
}
