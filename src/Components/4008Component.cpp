/*
** EPITECH PROJECT, 2025
** 4008Component.cpp
** File description:
** 4008Component.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "4008Component.hpp"

nts::C4008Component::C4008Component(const std::string& name) : AComponent(15, name)
{}

static nts::Tristate getRest(const nts::Tristate& a, const nts::Tristate& b, const nts::Tristate& c)
{
    if (a == nts::Tristate::False && b == nts::Tristate::False && c == nts::Tristate::False)
        return nts::Tristate::False;
    if (a == nts::Tristate::True && b == nts::Tristate::False && c == nts::Tristate::False)
        return nts::Tristate::False;
    if (a == nts::Tristate::False && b == nts::Tristate::True && c == nts::Tristate::False)
        return nts::Tristate::False;
    if (a == nts::Tristate::True && b == nts::Tristate::True && c == nts::Tristate::False)
        return nts::Tristate::True;
    if (a == nts::Tristate::False && b == nts::Tristate::False && c == nts::Tristate::True)
        return nts::Tristate::False;
    if (a == nts::Tristate::True && b == nts::Tristate::False && c == nts::Tristate::True)
        return nts::Tristate::True;
    if (a == nts::Tristate::False && b == nts::Tristate::True && c == nts::Tristate::True)
        return nts::Tristate::True;
    if (a == nts::Tristate::True && b == nts::Tristate::True && c == nts::Tristate::True)
        return nts::Tristate::True;
    return nts::Tristate::Undefined;
}
static nts::Tristate getResult(const nts::Tristate& a, const nts::Tristate& b, const nts::Tristate& c)
{
    if (a == nts::Tristate::False && b == nts::Tristate::False && c == nts::Tristate::False)
        return nts::Tristate::False;
    if (a == nts::Tristate::True && b == nts::Tristate::False && c == nts::Tristate::False)
        return nts::Tristate::True;
    if (a == nts::Tristate::False && b == nts::Tristate::True && c == nts::Tristate::False)
        return nts::Tristate::True;
    if (a == nts::Tristate::True && b == nts::Tristate::True && c == nts::Tristate::False)
        return nts::Tristate::False;
    if (a == nts::Tristate::False && b == nts::Tristate::False && c == nts::Tristate::True)
        return nts::Tristate::True;
    if (a == nts::Tristate::True && b == nts::Tristate::False && c == nts::Tristate::True)
        return nts::Tristate::False;
    if (a == nts::Tristate::False && b == nts::Tristate::True && c == nts::Tristate::True)
        return nts::Tristate::False;
    if (a == nts::Tristate::True && b == nts::Tristate::True && c == nts::Tristate::True)
        return nts::Tristate::True;
    return nts::Tristate::Undefined;
}

nts::Tristate nts::C4008Component::compute(std::size_t pin, Map& map)
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
    this->_pins[15]->setState(this->getLink(15, map));
    this->_pins[1]->setState(this->getLink(1, map));
    this->_pins[2]->setState(this->getLink(2, map));
    this->_pins[3]->setState(this->getLink(3, map));
    this->_pins[4]->setState(this->getLink(4, map));
    this->_pins[5]->setState(this->getLink(5, map));
    this->_pins[6]->setState(this->getLink(6, map));
    this->_pins[7]->setState(this->getLink(7, map));
    this->_pins[9]->setState(this->getLink(9, map));
    switch (pin)
    {
        case 10:
            return getResult(this->_pins[6]->getState(), this->_pins[7]->getState(), this->_pins[9]->getState());
        case 11:
            return getResult(this->_pins[4]->getState(), this->_pins[5]->getState(), getRest(this->_pins[6]->getState(), this->_pins[7]->getState(), this->_pins[9]->getState()));
        case 12:
            return getResult(this->_pins[2]->getState(), this->_pins[3]->getState(), getRest(this->_pins[4]->getState(), this->_pins[5]->getState(), getRest(this->_pins[6]->getState(), this->_pins[7]->getState(), this->_pins[9]->getState())));
        case 13:
            return getResult(this->_pins[15]->getState(), this->_pins[1]->getState(), getRest(this->_pins[2]->getState(), this->_pins[3]->getState(), getRest(this->_pins[4]->getState(), this->_pins[5]->getState(), getRest(this->_pins[6]->getState(), this->_pins[7]->getState(), this->_pins[9]->getState()))));
        case 14:
            return getRest(this->_pins[15]->getState(), this->_pins[1]->getState(), getRest(this->_pins[2]->getState(), this->_pins[3]->getState(), getRest(this->_pins[4]->getState(), this->_pins[5]->getState(), getRest(this->_pins[6]->getState(), this->_pins[7]->getState(), this->_pins[9]->getState()))));
    }
    return nts::Tristate::Undefined;
}
