#include "Game.h"


Game::Game()
{

	this->_data = std::make_shared<GameData>();

	int entity1 = this->_data->_eManager.createEntity(Entity::PLAYER);
	this->_data->_eManager.addComponent(entity1, Component::POSITION);
	this->_data->_eManager.addComponent(entity1, Component::VELOCITY);
	


	r.setPosition(100, 100);
	r.setSize({ 50.0, 50.0 });
	r.setFillColor(sf::Color::Blue);
}

void Game::run()
{


	const sf::Time frameTime = sf::seconds(1.0f / FPS);
	sf::Clock clock;
	sf::Time elapsedTime = sf::Time::Zero;
	while (this->_data->_window.isOpen())
	{
		sf::Event event;
		
		while (this->_data->_window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				this->_data->_window.close();
				break;
			case sf::Event::KeyPressed:
				if (event.key.code == sf::Keyboard::Escape)
					this->_data->_window.close();
				break;
			}
		}
		handleInput();
		update(elapsedTime.asSeconds());
		
		elapsedTime += clock.restart();
		while (elapsedTime >= frameTime)
		{
			elapsedTime -= frameTime;
		}

		this->_data->_window.clear();
		draw(elapsedTime.asSeconds());
		this->_data->_window.display();
	}
}

void Game::handleInput()
{

}

void Game::update(float dt)
{

}

void Game::draw(float dt)
{
	this->_data->_window.draw(this->r);
}


