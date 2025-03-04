/*
** EPITECH PROJECT, 2025
** OutputComponent.cpp
** File description:
** OutputComponent.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "OutputComponent.hpp"

#include <algorithm>

nts::OutputComponent::OutputComponent(std::string name) : AComponent(1, std::move(name))
{}

nts::Tristate nts::OutputComponent::compute(std::size_t pin, Map &map)
{
    auto tmpPair = std::make_pair(this->_name, pin);
    for (const auto& [fst, snd] : map.computed_pins)
    {
        if (fst == tmpPair.first && snd == tmpPair.second)
        {
            auto tmpPin = this->_pins.at(pin);
            if (tmpPin != nullptr)
                return tmpPin->getState();
            return Undefined;
        }
    }
    (void)pin;
    map.computed_pins.emplace_back(this->_name, pin);
    this->_pins[1]->setState(this->getLink(1, map));
    return this->_pins[1]->getState();
}
