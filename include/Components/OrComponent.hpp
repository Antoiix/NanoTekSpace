/*
** EPITECH PROJECT, 2025
** OrComponent.hpp
** File description:
** OrComponent.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef ORCOMPONENT_HPP
#define ORCOMPONENT_HPP

#include <AComponent.hpp>

namespace nts
{
    class OrComponent : public AComponent
    {
    public:
        explicit OrComponent(std::string name);
        nts::Tristate compute(std::size_t pin, const Map &map) override;
    };
} // nts

#endif //ORCOMPONENT_HPP
