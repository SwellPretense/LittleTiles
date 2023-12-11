#include "Source.hpp"

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

	SDL_RenderPresent(aRenderer);
}

void Application::HandleEvents()
{
	if (SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		default:
			break;
		case SDL_QUIT:
			engaged = false;
			break;
		}
	}
}

void Application::Disengage()
{

}