#ifndef POSITIONCOMPONENT_H
#define POSITIONCOMPONENT_H

#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

#include "Definitions.h"
#include "Component.h"

class PositionComponent :
    public Component
{
public:
    float x, y;
    PositionComponent() : x(0), y(0) 
    {   
        std::srand(static_cast<unsigned>(std::time(nullptr)));

        
        this->x = std::rand() % SCREEN_WIDTH;
        this->y = std::rand() % SCREEN_HEIGHT;
        this->key = "Position"; 
    }

    PositionComponent(Component* component) : x(0), y(0)
    {
        PositionComponent* positionComponent = dynamic_cast<PositionComponent*>(component);
    }
    
};


#endif // !POSITIONCOMPONENT_H
