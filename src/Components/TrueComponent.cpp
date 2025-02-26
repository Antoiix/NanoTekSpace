/*
** EPITECH PROJECT, 2025
** TrueComponent.cpp
** File description:
** TrueComponent.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "TrueComponent.hpp"

#include <algorithm>

nts::TrueComponent::TrueComponent(std::string name) : AComponent(1, std::move(name))
{
    this->_pins[1]->setState(Tristate::True);
}

nts::Tristate nts::TrueComponent::compute(std::size_t pin, const Map &map)
{
    (void)map;
    (void)pin;
    return this->_pins[1]->getState();
}
