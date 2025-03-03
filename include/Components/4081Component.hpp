/*
** EPITECH PROJECT, 2025
** 4081Component.hpp
** File description:
** 4081Component.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef INC_4081COMPONENT_HPP
#define INC_4081COMPONENT_HPP

#include "AComponent.hpp"

namespace nts
{
    class C4081Component : public AComponent{
    public:
        C4081Component(const std::string &name);

        nts::Tristate compute(std::size_t pin, Map& map) override;
    };
}

#endif //INC_4081COMPONENT_HPP
