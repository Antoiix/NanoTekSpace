/*
** EPITECH PROJECT, 2025
** InputComponent.cpp
** File description:
** InputComponent.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "InputComponent.hpp"

#include <utility>

nts::InputComponent::InputComponent(std::string name) : AComponent(1, std::move(name))
{}

nts::Tristate nts::InputComponent::compute(std::size_t pin, Map &map)
{
    (void)map;
    (void)pin;
    return this->_pins[pin]->getState();
}

void nts::InputComponent::changePinState(std::size_t pin, Tristate newState)
{
    if (const auto tmpPin = this->_pins.at(pin))
        tmpPin->setState(newState);
}
