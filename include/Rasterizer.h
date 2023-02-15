#ifndef RASTERIZER_H
# define RASTERIZER_H

# include <SFML/Graphics.hpp>

class Rasterizer
{
	sf::RenderWindow	*window;
	sf::Event		event;
	sf::VideoMode		videoMode;

	private:
		void		initVariables();
		void		initWindow();
	
	public:
		// Constructors & Destructors
		Rasterizer();
		virtual		~Rasterizer();

		// Accessors
		const bool	isRunning() const;

		// Functions
		void		pollEvents();
		void		update();
		void		render();
};

#endif
