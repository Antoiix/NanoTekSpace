/*
** EPITECH PROJECT, 2025
** NotComponent.hpp
** File description:
** NotComponent.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef NOTCOMPONENT_HPP
#define NOTCOMPONENT_HPP

#include <../Abstract/AComponent.hpp>

namespace nts
{
    class NotComponent : public AComponent
    {
    public:
        explicit NotComponent(std::string name);

        nts::Tristate compute(std::size_t pin, const Map &map) override;
    };
} // nts

#endif //NOTCOMPONENT_HPP
