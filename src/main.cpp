#include <SFML/Graphics.hpp>
#include "Rasterizer.h"

int main()
{
	Rasterizer	rasterizer;

	while (rasterizer.isRunning())
	{
		rasterizer.update();
		rasterizer.render();
	}

    return 0;
}
