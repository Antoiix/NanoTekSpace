/*
** EPITECH PROJECT, 2025
** XorComponent.hpp
** File description:
** XorComponent.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef XORCOMPONENT_HPP
#define XORCOMPONENT_HPP

#include <AComponent.hpp>

namespace nts
{
    class XorComponent : public AComponent
    {
    public:
        explicit XorComponent(const std::string &name);

        nts::Tristate compute(std::size_t pin, const Map& map) override;
    };
}

#endif //XORCOMPONENT_HPP
