/*
** EPITECH PROJECT, 2025
** Map.cpp
** File description:
** Map.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "Map.hpp"

void nts::Map::addComponent(const std::string& name, const std::shared_ptr<IComponent>& component)
{
    this->map_components.insert(std::make_pair(name, component));
}

std::shared_ptr<nts::IComponent> nts::Map::getComponent(const std::string& name) const
{
    auto it = this->map_components.find(name);
    if (it == this->map_components.end())
        return nullptr;
    return it->second;
}

size_t nts::Map::getTick() const
{
    return this->tick;
}

nts::Map::Map()
{
    this->tick = 0;
}

void nts::Map::incrementTick()
{
    this->tick++;
}

bool nts::Map::isEmpty() const
{
    return this->map_components.empty();
}
