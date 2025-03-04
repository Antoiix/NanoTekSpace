/*
** EPITECH PROJECT, 2025
** 4071Component.hpp
** File description:
** 4071Component.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef INC_4071COMPONENT_HPP
#define INC_4071COMPONENT_HPP

#include <AComponent.hpp>

namespace nts
{
    class C4071Component : public AComponent
    {
    public:
        explicit C4071Component(const std::string &name);

        nts::Tristate compute(std::size_t pin, Map& map) override;
    };
}

#endif //INC_4071COMPONENT_HPP
