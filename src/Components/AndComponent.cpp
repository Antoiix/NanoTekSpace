/*
** EPITECH PROJECT, 2025
** AndComponent.cpp
** File description:
** AndComponent.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "AndComponent.hpp"

#include <algorithm>

#include "Map.hpp"

nts::AndComponent::AndComponent(std::string name) : AComponent(3, std::move(name))
{}

nts::Tristate nts::AndComponent::compute(std::size_t pin, Map &map)
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
    map.computed_pins.emplace_back(this->_name, pin);
    this->_pins[1]->setState(this->getLink(1, map));
    this->_pins[2]->setState(this->getLink(2, map));
    if (pin != 3)
        return Undefined;

    Tristate pin1 = this->_pins[1]->getState();
    Tristate pin2 = this->_pins[2]->getState();

    if (pin1 == True && pin2 == True)
        return True;
    if (pin1 == False || pin2 == False)
        return False;
    return Undefined;
}
