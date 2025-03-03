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
    this->_pins[1]->setState(Tristate::Undefined);
}

nts::Tristate nts::ClockComponent::compute(std::size_t pin, const Map &map)
{
    (void)map;
    (void)pin;
    switch (this->_pins[1]->getState()) {
      case Tristate::Undefined:
        return Tristate::Undefined;
      case Tristate::True:
          this->_pins[1]->setState(Tristate::False);
        return Tristate::False;
      case Tristate::False:
          this->_pins[1]->setState(Tristate::True);
        return Tristate::True;
    }
    return Tristate::Undefined;
}
