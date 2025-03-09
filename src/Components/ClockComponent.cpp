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
    auto tmpPin = _pins.at(pin);
    if (tmpPin != nullptr)
        return tmpPin->getState();
    return Tristate::Undefined;
}

nts::Tristate nts::ClockComponent::getPinState(std::size_t pin)
{
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

void nts::ClockComponent::changePinState(std::size_t pin, Tristate newState)
{
    auto tmpPin = this->_pins.at(pin);
    if (tmpPin != nullptr)
        switch (newState) {
            case True:
                tmpPin->setState(False);
                break;
            case False:
                tmpPin->setState(True);
                break;
            default:
                tmpPin->setState(Undefined);
                break;
        }
}

