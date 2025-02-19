/*
** EPITECH PROJECT, 2025
** AComponent.cpp
** File description:
** AComponent.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "AComponent.hpp"

nts::AComponent::AComponent(size_t nb_pins)
{
    for (size_t i = 1; i <= nb_pins; i++)
        _pins.insert(std::make_pair(i, std::make_pair(nullptr, 0)));
}

void nts::AComponent::simulate(std::size_t tick)
{
    (void)tick;
}

void nts::AComponent::setLink(std::size_t pin, nts::IComponent& other, std::size_t otherPin)
{
    this->_pins.at(pin) = std::make_pair(&other, otherPin);
}

void nts::AComponent::getLink(std::size_t pin) const
{
    if (this->_pins.at(pin).first != nullptr)
        this->_pins.at(pin).first->compute(pin);
}
