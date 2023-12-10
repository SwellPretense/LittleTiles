#include "Source.hpp"

Application::Application()
{
	Debug::Log::Notify("Application Started");
	Application::Engage();
}

Application::~Application()
{
	Debug::Log::Notify("Application Closed");
}

void Application::Engage()
{

}

void Application::Render()
{

}

void Application::HandleEvents()
{
	// Check If Input Is Received
	INPUT_RECORD event;
	DWORD count;
	ReadConsoleInput(Application::hstdin, &event, 1, &count);

	if ((event.EventType == KEY_EVENT) && !event.Event.KeyEvent.bKeyDown)
	{
		switch (event.Event.KeyEvent.wVirtualKeyCode)
		{
			case VK_ESCAPE:
				Application::engaged = false;
				break;
			case Keys::W:
				Debug::Log::Warn("W");
				break;
			case Keys::A:
				Debug::Log::Warn("A");
				break;
			case Keys::S:
				Debug::Log::Warn("S");
				break;
			case Keys::D:
				Debug::Log::Warn("D");
				break;
		}

		event.Event.KeyEvent.wVirtualKeyCode = -1;
	}

}

void Application::Disengage()
{

}