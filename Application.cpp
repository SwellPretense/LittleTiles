#include "Source.hpp"

Ent ply(50, 50);

Application::Application()
{
	if (SDL_Init(SDL_INIT_EVERYTHING) < 0) 
	{
		Debug::Log::Alert("Failed To Initialize SDL");
	}
	aWindow = SDL_CreateWindow(
		"SDL2 Engine", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
		aWidth, aHeight, SDL_WINDOW_ALLOW_HIGHDPI
	);
	if (aWindow == nullptr) {
		Debug::Log::Alert("Failed To Create Window");
	}
	aRenderer = SDL_CreateRenderer(aWindow, -1, SDL_RENDERER_PRESENTVSYNC);

	Application::Engage();
}

Application::~Application()
{
	Application::Disengage();
	if (aWindow != nullptr)
	{
		SDL_DestroyWindow(aWindow);
		aWindow = nullptr;
	}
	if (aRenderer != nullptr)
	{
		SDL_DestroyRenderer(aRenderer);
		aRenderer = nullptr;
	}
	SDL_Quit();
	Debug::Log::Notify("Application Closed");
}

void Application::Engage()
{

}

void Application::Render()
{
	Digital::ClearScreen(aRenderer);
	ply.Draw(aRenderer);
	SDL_RenderPresent(aRenderer);
}

void Application::HandleEvents()
{
	if (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			Debug::Log::Warn("W");
			engaged = false;
			break;
		case SDL_SCANCODE_W:
			ply.Move(1);
			break;
		case SDL_SCANCODE_A:
			ply.Move(2);
			break;
		case SDL_SCANCODE_S:
			ply.Move(3);
			break;
		case SDL_SCANCODE_D:
			ply.Move(4);
			break;
		}	
	}
}

void Application::Disengage()
{

}