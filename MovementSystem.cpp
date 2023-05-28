#include "MovementSystem.h"

void MovementSystem::update()
{
	//	std::map<int, std::map<Component::ComponentType, std::unique_ptr<Component>>> entityAtlas;

	for (auto it = eManager->entityAtlas.begin(); it != eManager->entityAtlas.end(); ++it)
	{
		std::map<Component::ComponentType, std::shared_ptr<Component>> cMap = it->second;
		if (cMap.find(Component::ComponentType::POSITION) != cMap.end() && 
			cMap.find(Component::ComponentType::VELOCITY) != cMap.end())
		{
			std::shared_ptr<PositionComponent> pos = std::make_shared<PositionComponent>(cMap.at(Component::ComponentType::POSITION).get());
			std::shared_ptr<VelocityComponent> vel = std::make_shared<VelocityComponent>(cMap.at(Component::ComponentType::VELOCITY).get());
			pos->x += vel->vx;
			pos->y += vel->vy;
		}
	}
}
