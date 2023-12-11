#ifndef DIGITAL_HPP
#define DIGITAL_HPP

#include "Source.hpp"

class Digital {
public:
	static void ClearScreen(SDL_Renderer* aRenderer)
	{
		SDL_SetRenderDrawColor(aRenderer, Colors::BLACK.r, Colors::BLACK.g, Colors::BLACK.b, Colors::BLACK.a);
		SDL_RenderClear(aRenderer);
	}
};

#endif // DIGITAL_HPP