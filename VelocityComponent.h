#ifndef VELOCITYCOMPONENT_H
#define VELOCITYCOMPONENT_H

#include "Component.h"
class VelocityComponent :
    public Component
{
public:
    float vx, vy;
    VelocityComponent() : vx(0), vy(0) {}
    VelocityComponent(Component* component) : vx(0), vy(0)
    {
        VelocityComponent* velocityComponent = dynamic_cast<VelocityComponent*>(component);
    }
};


#endif // !VELOCITYCOMPONENT_H

