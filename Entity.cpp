#include "Entity.h"
#include <iostream>

void Entity::addComponent(Component::ComponentType componentType, std::unique_ptr<Component> component)
{
	try
	{
		entityComponentMap.emplace(componentType, std::move(component));
	}
	catch (std::exception e)
	{
		std::cout << "Failed to insert component into entity-component map\n";
	}
}
