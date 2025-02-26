/*
** EPITECH PROJECT, 2025
** OutputComponent.cpp
** File description:
** OutputComponent.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "OutputComponent.hpp"

#include <algorithm>

nts::OutputComponent::OutputComponent(std::string name) : AComponent(1, std::move(name))
{}

nts::Tristate nts::OutputComponent::compute(std::size_t pin, const Map &map)
{
    (void)pin;
    this->_pins[1]->setState(this->getLink(1, map));
    return this->_pins[1]->getState();
}
