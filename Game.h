#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>

#include "Definitions.h"
#include "EntityManager.h"
#include "MovementSystem.h"

class Game 
{
public:
	struct GameData 
	{
		sf::RenderWindow _window;
		EntityManager _eManager;
		GameData() : _window(), _eManager()
		{
			_window.create(sf::VideoMode(SCREEN_WIDTH, SCREEN_HEIGHT), SCREEN_TITLE, sf::Style::Titlebar);
		}

	};
	
	typedef std::shared_ptr<GameData> GameDataRef;

	sf::RectangleShape r;
	GameDataRef _data;



	Game();
	void run();
	void handleInput();
	void update(float dt);
	void draw(float dt);


};

#endif // !GAME_H

