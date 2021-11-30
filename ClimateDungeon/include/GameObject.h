#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <Module.h>

enum class Type
{
	OBJECT, ENEMY, NPC, DIALOGUE_OBJECT, OBTAINABLE
};

class GameObject
{
	Module* mod = nullptr;
	std::string ID = "Unnamed Object";
	Type permT;
public:
	GameObject(Type T, std::string t_identifier);
	GameObject(Type T);
	Module* GetModule();
	std::string GetName() { return ID; }
};

#endif