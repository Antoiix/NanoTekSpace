/*
** EPITECH PROJECT, 2025
** OutputComponent.hpp
** File description:
** OutputComponent.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef OUTPUTCOMPONENT_HPP
#define OUTPUTCOMPONENT_HPP

#include <../Abstract/AComponent.hpp>

namespace nts
{
    class OutputComponent : public AComponent
    {
    public:
        explicit OutputComponent(std::string name);

        nts::Tristate compute(std::size_t pin, const Map& map) override;
    };
}

#endif //OUTPUTCOMPONENT_HPP
