/*
** EPITECH PROJECT, 2025
** 4030Component.hpp
** File description:
** 4030Component.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef INC_4030COMPONENT_HPP
#define INC_4030COMPONENT_HPP
#include <AComponent.hpp>

namespace nts
{
    class C4030Component : public AComponent
    {
    public:
        explicit C4030Component(const std::string &name);

        nts::Tristate compute(std::size_t pin, Map& map) override;
    };
}

#endif //INC_4030COMPONENT_HPP
