/*
** EPITECH PROJECT, 2025
** Factory.cpp
** File description:
** Factory.cpp
** created and edited by antoiix.
** All rights reserved
*/

#include "Factory.hpp"
#include "AndComponent.hpp"
#include "FalseComponent.hpp"
#include "InputComponent.hpp"
#include "NotComponent.hpp"
#include "OrComponent.hpp"
#include "OutputComponent.hpp"
#include "TrueComponent.hpp"
#include "XorComponent.hpp"

nts::Factory::Factory()
{
    componentBuilders["or"] = [](const std::string& name) {return std::make_shared<OrComponent>(name);};
    componentBuilders["xor"] = [](const std::string& name) {return std::make_shared<XorComponent>(name);};
    componentBuilders["and"] = [](const std::string& name) {return std::make_shared<AndComponent>(name);};
    componentBuilders["not"] = [](const std::string& name) {return std::make_shared<NotComponent>(name);};
    componentBuilders["input"] = [](const std::string& name) {return std::make_shared<InputComponent>(name);};
    componentBuilders["output"] = [](const std::string& name) {return std::make_shared<OutputComponent>(name);};
    componentBuilders["true"] = [](const std::string& name) {return std::make_shared<TrueComponent>(name);};
    componentBuilders["false"] = [](const std::string& name) {return std::make_shared<FalseComponent>(name);};
}

void nts::Factory::CreateComponent(const std::string& componentName, const std::string& name, Map &map)
{
    auto builder = componentBuilders.find(componentName);
    if (builder == componentBuilders.end())
        return;
    map.addComponent(name, builder->second(name));
}
