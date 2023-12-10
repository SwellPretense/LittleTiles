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
	HANDLE hstdin = GetStdHandle(STD_INPUT_HANDLE);
};

#endif // APPLICATION_HPP