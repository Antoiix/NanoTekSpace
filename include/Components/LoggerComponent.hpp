/*
** EPITECH PROJECT, 2025
** LoggerComponent.hpp
** File description:
** LoggerComponent.hpp
*/

#ifndef LOGGERCOMPONENT_H
#define LOGGERCOMPONENT_H
#include <AComponent.hpp>
#include "Utils.hpp"

namespace nts
{
    class LoggerComponent : public AComponent
    {
      public:
        explicit LoggerComponent(std::string name);

        nts::Tristate compute(std::size_t pin, Map& map) override;
    };
}

#endif //LOGGERCOMPONENT_H
