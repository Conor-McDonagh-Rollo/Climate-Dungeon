#include <Game.h>
bool Game::LEVEL_CURRENTLY_LOADED = false;

void Game::Run()
{
	sf::Clock clock;
	sf::Time timeSinceLastUpdate = sf::Time::Zero;
	const float fps{ 60.0f };
	sf::Time timePerFrame = sf::seconds(1.0f / fps); //60 fps
	while (m_window.isOpen())
	{
		ProcessEvents(); //as many as possible
		timeSinceLastUpdate += clock.restart();
		while (timeSinceLastUpdate > timePerFrame)
		{
			timeSinceLastUpdate -= timePerFrame;
			ProcessEvents(); //at least 60 fps
			Update(timePerFrame.asSeconds()); //60 fps
		}
		Render(); //as many as possible
	}
}

Game::Game() : m_window(sf::VideoMode(1280, 720, 32), "Climate Dungeon", sf::Style::Resize)
{
	m_window.setVerticalSyncEnabled(true);
	m_window.setMouseCursorVisible(false);
	srand(static_cast<unsigned>(time(NULL)));
}

void Game::LoadLevel(int t_level)
{
	// Do Level Loading Stuff
	Run(); // then run
}

void Game::ProcessEvents()
{
	sf::Event newEvent;
	while (m_window.pollEvent(newEvent))
	{
		if (newEvent.type == sf::Event::Closed) m_window.close();
	}
}

void Game::Render()
{
	m_window.clear(sf::Color::Black); // clear screen

	sf::CircleShape shape(25);
	shape.setFillColor(sf::Color(100, 250, 50));
	shape.setPosition(GetMousePosition());
	m_window.draw(shape);

	m_window.display();
}

void Game::Update(float t_deltaTime) // display screen
{
}
