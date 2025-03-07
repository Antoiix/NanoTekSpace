/*
** EPITECH PROJECT, 2025
** NanoTekSpice
** File description:
** ClockComponent.cpp
*/

#include "ClockComponent.hpp"

#include <algorithm>

nts::ClockComponent::ClockComponent(std::string name) : AComponent(1, std::move(name))
{
    this->_pins[1]->setState(Undefined);
}

nts::Tristate nts::ClockComponent::compute(std::size_t pin, Map &map)
{
    (void)map;
    (void)pin;

    switch (this->_pins[1]->getState()) {
      case Undefined:
        return Undefined;
      case True:
        this->_pins[1]->setState(False);
        return True;
      case False:
        this->_pins[1]->setState(True);
        return False;
    }
    return Undefined;
}

void nts::ClockComponent::changePinState(std::size_t pin, Tristate newState)
{
    auto tmpPin = this->_pins.at(pin);
    if (tmpPin != nullptr)
        tmpPin->setState(newState);
}

