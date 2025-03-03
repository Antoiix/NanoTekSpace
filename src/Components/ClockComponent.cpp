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

nts::Tristate nts::ClockComponent::compute(std::size_t pin, const Map &map)
{
    (void)map;
    (void)pin;
    switch (this->_pins[1]->getState()) {
      case Undefined:
        return Undefined;
      case True:
        this->_pins[1]->setState(False);
        return this->_pins[1]->getState();
      case False:
        this->_pins[1]->setState(True);
        return this->_pins[1]->getState();
    }
    return Undefined;
}

void nts::ClockComponent::changePinState(std::size_t pin, Tristate newState) {
    if (const auto tmpPin = this->_pins.at(pin)) {
        switch (newState) {
            case Undefined:
                tmpPin->setState(Undefined);
            break;
            case True:
                tmpPin->setState(False);
            break;
            case False:
                tmpPin->setState(True);
            break;
        }
    }
}

