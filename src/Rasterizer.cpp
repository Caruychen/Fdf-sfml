#include "Rasterizer.h"

Rasterizer::Rasterizer()
{
	this->initVariables();
	this->initWindow();
}

Rasterizer::~Rasterizer()
{
	delete	this->window;
}

void	Rasterizer::initVariables()
{
	this->window = nullptr;
}

void	Rasterizer::initWindow()
{
	this->videoMode.height = 600;
	this->videoMode.width = 800;
	this->window = new sf::RenderWindow(this->videoMode, "SFML works!");
}

const bool	Rasterizer::isRunning() const
{
	return this->window->isOpen();
}

void	Rasterizer::pollEvents()
{
	while (this->window->pollEvent(this->event))
	{
		switch (this->event.type)
		{
			case sf::Event::Closed:
				this->window->close();
				break;
			case sf::Event::KeyPressed:
				if (this->event.key.code == sf::Keyboard::Escape)
					this->window->close();
				break;
			default:
				break;
		}
	}
}

void	Rasterizer::update()
{
	this->pollEvents();
}

void	Rasterizer::render()
{
	this->window->clear(sf::Color(255, 0, 0));
	this->window->display();
}
