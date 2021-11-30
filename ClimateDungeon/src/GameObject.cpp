#include <GameObject.h>
#include <SFML/Graphics.hpp>

GameObject::GameObject(Type T, std::string t_identifier) : ID{ t_identifier }, permT{ T }
{
	Debug_Log(std::string("Created " + GetName()));
	switch (T)
	{
	case Type::OBJECT:
		mod = new Object();
		break;
	default:
		mod = nullptr;
		break;
	}
}

GameObject::GameObject(Type T) : permT{ T }
{
	Debug_Log(std::string("Created " + GetName()));
	switch (T)
	{
	case Type::OBJECT:
		mod = new Object();
		break;
	default:
		mod = nullptr;
		break;
	}
}

Module* GameObject::GetModule()
{
	switch (permT)
	{
	case Type::OBJECT:
		return (Object*)mod;
		break;
	default:
		break;
	}
}
