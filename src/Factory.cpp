/*
** EPITECH PROJECT, 2025
** Factory.cpp
** File description:
** Factory.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "Factory.hpp"

#include "4081Component.hpp"
#include "4071Component.hpp"
#include "4001Component.hpp"
#include "4011Component.hpp"
#include "4069Component.hpp"
#include "AndComponent.hpp"
#include "FalseComponent.hpp"
#include "InputComponent.hpp"
#include "NotComponent.hpp"
#include "4030Component.hpp"
#include "OrComponent.hpp"
#include "OutputComponent.hpp"
#include "TrueComponent.hpp"
#include "XorComponent.hpp"
#include "ClockComponent.hpp"

nts::Factory::Factory()
{
    componentBuilders["clock"] = [](const std::string& name) {return std::make_shared<ClockComponent>(name);};
    componentBuilders["or"] = [](const std::string& name) {return std::make_shared<OrComponent>(name);};
    componentBuilders["xor"] = [](const std::string& name) {return std::make_shared<XorComponent>(name);};
    componentBuilders["and"] = [](const std::string& name) {return std::make_shared<AndComponent>(name);};
    componentBuilders["not"] = [](const std::string& name) {return std::make_shared<NotComponent>(name);};
    componentBuilders["input"] = [](const std::string& name) {return std::make_shared<InputComponent>(name);};
    componentBuilders["output"] = [](const std::string& name) {return std::make_shared<OutputComponent>(name);};
    componentBuilders["true"] = [](const std::string& name) {return std::make_shared<TrueComponent>(name);};
    componentBuilders["false"] = [](const std::string& name) {return std::make_shared<FalseComponent>(name);};
    componentBuilders["4001"] = [](const std::string& name) {return std::make_shared<C4001Component>(name);};
    componentBuilders["4011"] = [](const std::string& name) {return std::make_shared<C4011Component>(name);};
    componentBuilders["4030"] = [](const std::string& name) {return std::make_shared<C4030Component>(name);};
    componentBuilders["4069"] = [](const std::string& name) {return std::make_shared<C4069Component>(name);};
    componentBuilders["4071"] = [](const std::string& name) {return std::make_shared<C4071Component>(name);};
    componentBuilders["4081"] = [](const std::string& name) {return std::make_shared<C4081Component>(name);};
}

void nts::Factory::CreateComponent(const std::string& componentName, const std::string& name, Map &map)
{
    auto builder = componentBuilders.find(componentName);
    if (builder == componentBuilders.end())
        return;
    map.addComponent(name, builder->second(name));
}
