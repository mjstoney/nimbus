#include "EntityManager.h"

int EntityManager::createEntity(Entity::EntityType entityType)
{
	std::shared_ptr<Entity> newEntity;
	switch (entityType)
	{
	case Entity::PLAYER:
		try {
			newEntity = std::move(std::make_shared<PlayerEntity>());
		}
		catch (const std::bad_alloc& e)
		{
			std::cout << "Failed to allocate memory: " << e.what() << std::endl;
		}
		break;
	case Entity::ENEMY:
		break;
	default:
		break;
	}
	//	For reference:
	// 	std::map<int, std::map<Component::ComponentType, std::shared_ptr<Component>>> entityAtlas;

	std::map < Component::ComponentType, std::shared_ptr<Component>> innerMap;
	this->entityAtlas.insert(std::make_pair(++nextEntityId, innerMap));

	return nextEntityId;
}

void EntityManager::addComponent(int entityId, Component::ComponentType componentType)
{

	auto& entRef = entityAtlas.at(entityId);
	switch (componentType)
	{
	case Component::ComponentType::POSITION:
		entRef.emplace(componentType, std::make_unique<PositionComponent>());
		break;
	case Component::ComponentType::VELOCITY:
		entRef.emplace(componentType, std::make_unique<VelocityComponent>());
		break;
	case Component::ComponentType::GRAPHICS:
		break;
	case Component::ComponentType::PHYSICS:
		break;
	default:
		break;
	}
}
