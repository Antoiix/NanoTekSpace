/*
** EPITECH PROJECT, 2025
** AComponent.hpp
** File description:
** AComponent.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef ACOMPONENT_HPP
    #define ACOMPONENT_HPP

#include <map>
#include "IComponent.hpp"

namespace nts
{
    class AComponent : public IComponent
    {
    public:
        explicit AComponent(size_t nb_pins);

        void simulate(std::size_t tick) override;
        void setLink(std::size_t pin, IComponent& other, std::size_t otherPin) override;

        void getLink(std::size_t pin) const;
    private:
        std::map<size_t, std::pair<IComponent*, size_t>> _pins;
    };
}

#endif //ACOMPONENT_HPP
