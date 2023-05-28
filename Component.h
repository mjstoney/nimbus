#ifndef COMPONENT_H
#define COMPONENT_H

#include <string>

class Component
{

public:
	enum ComponentType 
	{
		POSITION,
		VELOCITY,
		GRAPHICS,
		PHYSICS

	};
	int id;
	std::string key;

	Component() : id(-1), key("none") {}
	virtual ~Component() {}

};


#endif // !COMPONENT_H

