/*
** EPITECH PROJECT, 2025
** FalseComponent.cpp
** File description:
** FalseComponent.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "FalseComponent.hpp"

#include <algorithm>

nts::FalseComponent::FalseComponent(std::string name) : AComponent(1, std::move(name))
{
    this->_pins[1]->setState(Tristate::False);
}

nts::Tristate nts::FalseComponent::compute(std::size_t pin, const Map& map)
{
    (void)map;
    (void)pin;
    return this->_pins[1]->getState();
}
