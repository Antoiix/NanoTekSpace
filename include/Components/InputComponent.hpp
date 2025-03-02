/*
** EPITECH PROJECT, 2025
** InputComponent.hpp
** File description:
** InputComponent.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef INPUTCOMPONENT_HPP
#define INPUTCOMPONENT_HPP

#include <AComponent.hpp>

namespace nts
{
    class InputComponent : public AComponent
    {
    public:
        explicit InputComponent(std::string name);

        nts::Tristate compute(std::size_t pin, const Map& map) override;
        void changePinState(std::size_t pin, Tristate newState) override;
    };
}

#endif //INPUTCOMPONENT_HPP
