/*
** EPITECH PROJECT, 2025
** Pin.cpp
** File description:
** Pin.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "Pin.hpp"

#include <utility>

nts::Pin::Pin(Tristate state)
{
    this->_state = state;
    this->_other_pin = 0;
}

nts::Tristate nts::Pin::getState() const
{
    return this->_state;
}

std::string nts::Pin::getLinkedComponent() const
{
    return this->_linked_component;
}

size_t nts::Pin::getOtherPin() const
{
    return this->_other_pin;
}

void nts::Pin::setOtherPin(size_t other_pin)
{
    this->_other_pin = other_pin;
}

void nts::Pin::setState(Tristate state)
{
    this->_state = state;
}

void nts::Pin::setLinkedComponent(std::string component)
{
    this->_linked_component = std::move(component);
}
