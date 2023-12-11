#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "Source.hpp"

class Application {
public:
	Application();
	~Application();

	void Engage();
	void HandleEvents();
	void Render();
	void Disengage();

	bool engaged = true;
	int aHeight = 720, aWidth = 1280;
	SDL_Window* aWindow;
	SDL_Renderer* aRenderer;
	SDL_Event event;
	HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);
};

#endif // APPLICATION_HPP