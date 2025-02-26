/*
** EPITECH PROJECT, 2025
** AndComponent.hpp
** File description:
** AndComponent.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef ANDCOMPONENT_HPP
#define ANDCOMPONENT_HPP

#include <AComponent.hpp>

namespace nts
{
    class AndComponent : public AComponent
    {
    public:
        explicit AndComponent(std::string name);

        nts::Tristate compute(std::size_t pin, const Map &map) override;
    };
} // nts

#endif //ANDCOMPONENT_HPP
