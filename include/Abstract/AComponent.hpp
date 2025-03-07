/*
** EPITECH PROJECT, 2025
** AComponent.hpp
** File description:
** AComponent.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef ACOMPONENT_HPP
    #define ACOMPONENT_HPP

#include <map>
#include <Map.hpp>
#include <Pin.hpp>
#include <utility>
#include <string>
#include "IComponent.hpp"

namespace nts
{
    class AComponent : public IComponent
    {
    public:
        AComponent(size_t nb_pins, std::string name);

        void simulate(std::size_t tick) override;
        void setLink(std::size_t pin, const std::string& nameOther, std::size_t otherPin) override;
        void changePinState(std::size_t pin, Tristate newState) override;
        Tristate getPinState(std::size_t pin) override;
        bool hasPin(std::size_t pin) override;

        Tristate getLink(std::size_t pin, Map &map) const;
    protected:
        std::string _name;
        std::map<size_t, std::shared_ptr<Pin>> _pins;
    };
}

std::ostream& operator<<(std::ostream& s, nts::Tristate v);

#endif //ACOMPONENT_HPP
