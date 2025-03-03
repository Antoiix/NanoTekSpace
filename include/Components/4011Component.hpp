/*
** EPITECH PROJECT, 2025
** 4011Component.hpp
** File description:
** 4011Component.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef INC_4011COMPONENT_HPP
#define INC_4011COMPONENT_HPP
#include <AComponent.hpp>

namespace nts
{
    class C4011Component : public AComponent
    {
    public:
        explicit C4011Component(const std::string &name);

        nts::Tristate compute(std::size_t pin, Map& map) override;
    };
}

#endif //INC_4011COMPONENT_HPP
