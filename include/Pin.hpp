/*
** EPITECH PROJECT, 2025
** Pin.hpp
** File description:
** Pin.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef PIN_HPP
#define PIN_HPP

#include <IComponent.hpp>

namespace nts
{
    class Pin
    {
    public:
        explicit Pin(Tristate state);

        void setState(Tristate state);
        void setLinkedComponent(std::string component);
        void setOtherPin(size_t other_pin);

        Tristate getState() const;
        std::string getLinkedComponent() const;
        size_t getOtherPin() const;

    private:
        Tristate _state;
        std::string _linked_component;
        size_t _other_pin;
    };
}

#endif //PIN_HPP
