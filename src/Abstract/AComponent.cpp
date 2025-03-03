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
    auto tmpPair = std::make_pair(this->_name, pin);
    auto link = map.getComponent(this->_pins.at(pin)->getLinkedComponent());

    for (const auto& [fst, snd] : map.computed_pins)
    {
        if (fst == tmpPair.first && snd == tmpPair.second)
            return link->getPin(pin);
    }
    map.computed_pins.emplace_back(this->_name, pin);
    if (link != nullptr)
        return link->compute(this->_pins.at(pin)->getOtherPin(), map);
    return Tristate::Undefined;
}

void nts::AComponent::changePinState(std::size_t pin, Tristate newState)
{
    (void)pin;
    (void)newState;
}

nts::Tristate nts::AComponent::getPin(std::size_t pin)
{
    auto tmpPin = this->_pins.at(pin);
    if (tmpPin != nullptr)
        return tmpPin->getState();
    return Tristate::Undefined;
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
