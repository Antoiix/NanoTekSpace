/*
** EPITECH PROJECT, 2025
** NotComponent.cpp
** File description:
** NotComponent.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "NotComponent.hpp"

#include <algorithm>
#include <iostream>

nts::NotComponent::NotComponent(std::string name) : AComponent(2, std::move(name))
{
}

nts::Tristate nts::NotComponent::compute(std::size_t pin, Map &map)
{
    (void)pin;
    if (pin != 2)
        return Undefined;
    this->_pins[1]->setState(this->getLink(1, map));
    switch (this->_pins[1]->getState())
    {
    case False:
        return True;
    case True:
        return False;
    default:
        return Undefined;
    }
}
