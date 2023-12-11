#ifndef DIGITAL_HPP
#define DIGITAL_HPP

#include "Source.hpp"

class Digital {
public:
	static void ClearScreen(SDL_Renderer* aRenderer)
	{
		SDL_SetRenderDrawColor(aRenderer, Colors::sBLACK.r, Colors::sBLACK.g, Colors::sBLACK.b, Colors::sBLACK.a);
		SDL_RenderClear(aRenderer);
	}

	static void DrawSquare(SDL_Renderer* aRenderer)
	{
		
	}
};

#endif // DIGITAL_HPP