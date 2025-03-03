/*
** EPITECH PROJECT, 2025
** 4069Component.hpp
** File description:
** 4069Component.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef INC_4069COMPONENT_HPP
#define INC_4069COMPONENT_HPP
#include <AComponent.hpp>

namespace nts
{
    class C4069Component : public AComponent
    {
    public:
        explicit C4069Component(const std::string &name);

        nts::Tristate compute(std::size_t pin, Map& map) override;
    };
}

#endif //INC_4069COMPONENT_HPP
