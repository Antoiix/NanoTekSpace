/*
** EPITECH PROJECT, 2025
** 4001Component.hpp
** File description:
** 4001Component.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef INC_4001COMPONENT_HPP
#define INC_4001COMPONENT_HPP
#include <AComponent.hpp>

namespace nts
{
    class C4001Component : public AComponent
    {
    public:
        explicit C4001Component(const std::string &name);

        nts::Tristate compute(std::size_t pin, const Map& map) override;
    };
}

#endif //INC_4001COMPONENT_HPP
