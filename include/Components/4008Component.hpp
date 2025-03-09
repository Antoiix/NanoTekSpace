/*
** EPITECH PROJECT, 2025
** 4008Component.hpp
** File description:
** 4008Component.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef INC_4008COMPONENT_HPP
#define INC_4008COMPONENT_HPP
#include <AComponent.hpp>

namespace nts
{
    class C4008Component : public AComponent
    {
    public:
        explicit C4008Component(const std::string &name);

        nts::Tristate compute(std::size_t pin, Map& map) override;
    };
}

#endif //INC_4008COMPONENT_HPP
