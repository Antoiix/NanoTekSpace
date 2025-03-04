//
// Created by ktimote on 3/3/25.
//

#ifndef CLOCKCOMPONENT_HPP
#define CLOCKCOMPONENT_HPP


#include "AComponent.hpp"

namespace nts
{
    class ClockComponent : public AComponent
    {
    public:
        explicit ClockComponent(std::string name);

        nts::Tristate compute(std::size_t pin, Map &map) override;
        void changePinState(std::size_t pin, Tristate newState) override;
    };
} // nts

#endif //CLOCKCOMPONENT_HPP
