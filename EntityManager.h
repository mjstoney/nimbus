#ifndef ENTITYMANAGER_H
#define ENTITYMANAGER_H

#include <string>
#include <memory>
#include <iostream>

#include "Definitions.h"
#include "Entity.h"
#include "PlayerEntity.h"
#include "Component.h"
#include "PositionComponent.h"
#include "VelocityComponent.h"

class EntityManager
{
public:
	int nextEntityId;
	std::map<int, std::map<Component::ComponentType, std::shared_ptr<Component>>> entityAtlas;
	EntityManager() : nextEntityId(1), entityAtlas() {}

	int createEntity(Entity::EntityType entityType);
	void addComponent(int entityId, Component::ComponentType componentType);
	//void removeComponent(int entityId, Component::ComponentType componentType);
	//Component& getComponent(int entityId, Component::ComponentType componentType);
};


#endif // !ENTITYMANAGER_H

