/*
** EPITECH PROJECT, 2025
** NotComponent.cpp
** File description:
** NotComponent.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "NotComponent.hpp"

#include <algorithm>
#include <iostream>

nts::NotComponent::NotComponent(std::string name) : AComponent(2, std::move(name))
{
}

nts::Tristate nts::NotComponent::compute(std::size_t pin, Map &map)
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
    if (pin != 2)
        return Undefined;
    switch (this->_pins[1]->getState())
    {
    case False:
        return True;
    case True:
        return False;
    default:
        return Undefined;
    }
}
