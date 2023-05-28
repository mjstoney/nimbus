#ifndef ENTITY_H
#define ENTITY_H

#include <map>
#include <memory>

#include "Component.h"

class Entity
{


public:
	enum EntityType
	{
		PLAYER,
		ENEMY
	};
	int id;

	Entity() : id(-1) {}
	void addComponent(Component::ComponentType componentType, std::unique_ptr<Component> component);

private:
	std::map<Component::ComponentType, std::unique_ptr<Component>> entityComponentMap;

};



#endif // !ENTITY_H
