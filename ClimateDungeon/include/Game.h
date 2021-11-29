#ifndef GAME_H
#define GAME_H
#include <SFML/Graphics.hpp>
#include <Debug.h>

class Game {
private:
	void Run();
	sf::RenderWindow m_window;
	sf::Vector2f GetMousePosition() { return m_window.mapPixelToCoords(sf::Mouse::getPosition(m_window)); }
public:
	Game(); // intiialize
	void LoadLevel(int t_level);
	static bool LEVEL_CURRENTLY_LOADED;

	void ProcessEvents();
	void Render();
	void Update(float t_deltaTime);
};

#endif