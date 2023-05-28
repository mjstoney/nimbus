#include "EntityManager.h"
#ifndef MOVEMENTSYSTEM_H
#define MOVEMENTSYSTEM_H



class MovementSystem
{
public:
	std::shared_ptr<EntityManager> eManager;

	MovementSystem(std::shared_ptr<EntityManager> eManager) : eManager(eManager) {}
	void update();
};



#endif // !MOVEMENTSYSTEM_H

