/*
** EPITECH PROJECT, 2025
** TrueComponent.hpp
** File description:
** TrueComponent.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef TRUECOMPONENT_HPP
#define TRUECOMPONENT_HPP

#include "AComponent.hpp"

namespace nts
{
    class TrueComponent : public AComponent
    {
    public:
        explicit TrueComponent(std::string name);

        nts::Tristate compute(std::size_t pin, const Map &map) override;
    };
} // nts

#endif //TRUECOMPONENT_HPP
