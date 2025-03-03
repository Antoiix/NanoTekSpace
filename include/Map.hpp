/*
** EPITECH PROJECT, 2025
** Map.hpp
** File description:
** Map.hpp
** created and edited by antoiix.
** All rights reserved
*/

#ifndef MAP_HPP
#define MAP_HPP

#include <IComponent.hpp>
#include <list>
#include <string>
#include <map>
#include <memory>

namespace nts
{
    class Map
    {
    public:
        Map();

        void addComponent(const std::string& name, const std::shared_ptr<IComponent>& component);
        std::shared_ptr<IComponent> getComponent(const std::string& name) const;
        void incrementTick();
        size_t getTick() const;
        std::list<std::pair<std::string, size_t>> computed_pins;
    private:
        size_t tick;
        std::map<std::string, std::shared_ptr<IComponent>> map_components;
    };
}

#endif //MAP_HPP
