/*
** EPITECH PROJECT, 2025
** IComponent.hpp
** File description:
** IComponent.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef ICOMPONENT_HPP
    #define ICOMPONENT_HPP

#include <cstddef>

namespace nts
{
    enum Tristate
    {
        Undefined = (-true),
        True = true,
        False = false
    };
    class IComponent
    {
    public:
        virtual ~IComponent() = default;

        virtual void simulate(std::size_t tick) = 0;
        virtual nts::Tristate compute(std::size_t pin) = 0;
        virtual void setLink(std::size_t pin, nts::IComponent &other, std::size_t otherPin) = 0;
    };
}

#endif //ICOMPONENT_HPP
