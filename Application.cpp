#include "Source.hpp"

Application::Application()
{
	Debug::Log::Notify("Application Started");
	Application::Engage();
}

Application::~Application()
{

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
			// Move All Of The Key Codes To Another Class To Make It Easier To Get A Key, Ex: Keys::W
			case VK_ESCAPE:
				Application::engaged = false;
				break;
			case 0x57:
					
				break;
			case 0x41:

				break;
			case 0x53:
				

				break;
			case 0x44:

				break;
		}

		event.Event.KeyEvent.wVirtualKeyCode = -1;
	}

}

void Application::Disengage()
{

}