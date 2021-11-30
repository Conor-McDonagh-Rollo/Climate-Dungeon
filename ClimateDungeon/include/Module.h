#ifndef MODULE_H
#define MODULE_H
#include <Debug.h>
#include <SFML/Graphics.hpp>

class Module
{
public:
	Module() { Debug_Log("Created Module"); }
	
	// later
};

class Object : public Module
{
public:
	Object() { Debug_Log("Created Object Module"); }
	sf::Sprite body;
};

#endif