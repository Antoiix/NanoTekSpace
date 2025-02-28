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

nts::Tristate nts::AComponent::getLink(std::size_t pin, const Map& map) const
{
    auto link = map.getComponent(this->_pins.at(pin)->getLinkedComponent());
    if (link != nullptr)
        return link->compute(this->_pins.at(pin)->getOtherPin(), map);
    return Tristate::Undefined;
}

std::ostream& operator<<(std::ostream& os, nts::Tristate v)
{
    if (v == nts::Tristate::True)
        os << std::to_string(1);
    if (v == nts::Tristate::False)
        os << std::to_string(0);
    if (v == nts::Tristate::Undefined)
        os << std::to_string(-1);
    return os;
}
