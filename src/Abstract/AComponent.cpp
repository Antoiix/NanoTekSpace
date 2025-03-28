/*
** EPITECH PROJECT, 2025
** AComponent.cpp
** File description:
** AComponent.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "AComponent.hpp"

nts::AComponent::AComponent(size_t nb_pins, std::string name)
{
    this->_name = std::move(name);
    for (size_t i = 1; i <= nb_pins; i++)
        _pins.insert(std::make_pair(i, std::make_shared<Pin>(Undefined)));
}

void nts::AComponent::simulate(std::size_t tick)
{
    (void)tick;
}

void nts::AComponent::setLink(std::size_t pin, const std::string& nameOther, std::size_t otherPin)
{
    this->_pins[pin]->setLinkedComponent(nameOther);
    this->_pins[pin]->setOtherPin(otherPin);
}

nts::Tristate nts::AComponent::getLink(std::size_t pin, Map& map) const
{
    auto link = map.getComponent(this->_pins.at(pin)->getLinkedComponent());

    if (link != nullptr)
        return link->compute(this->_pins.at(pin)->getOtherPin(), map);
    return Tristate::Undefined;
}

void nts::AComponent::changePinState(std::size_t pin, Tristate newState)
{
    (void)pin;
    (void)newState;
}

nts::Tristate nts::AComponent::getPinState(std::size_t pin)
{
    auto tmpPin = _pins.at(pin);
    if (tmpPin != nullptr)
        return tmpPin->getState();
    return Tristate::Undefined;
}

bool nts::AComponent::hasPin(std::size_t pin)
{
    auto size = _pins.size();
    return size >= pin && pin != 0;
}

std::ostream& operator<<(std::ostream& os, nts::Tristate v)
{
    if (v == nts::Tristate::True)
        os << std::to_string(1);
    if (v == nts::Tristate::False)
        os << std::to_string(0);
    if (v == nts::Tristate::Undefined)
        os << std::string("U");
    return os;
}
