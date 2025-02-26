/*
** EPITECH PROJECT, 2025
** Factory.hpp
** File description:
** Factory.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef FACTORY_HPP
#define FACTORY_HPP

#include <functional>
#include <memory>
#include <string>
#include <unordered_map>

#include "IComponent.hpp"

namespace nts
{
    class Factory
    {
    public:
        Factory();

        void CreateComponent(const std::string& componentName, const std::string& name, Map &map);

    private:
        std::unordered_map<std::string, std::function<std::shared_ptr<IComponent>(std::string)>> componentBuilders;
    };
}

#endif //FACTORY_HPP
