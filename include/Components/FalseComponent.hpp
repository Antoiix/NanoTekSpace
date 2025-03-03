/*
** EPITECH PROJECT, 2025
** FalseComponent.hpp
** File description:
** FalseComponent.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef FALSECOMPONENT_HPP
#define FALSECOMPONENT_HPP

#include <../Abstract/AComponent.hpp>

namespace nts
{
    class FalseComponent : public AComponent
    {
    public:
        explicit FalseComponent(std::string name);

        nts::Tristate compute(std::size_t pin, Map &map) override;
    };
} // nts

#endif //FALSECOMPONENT_HPP
