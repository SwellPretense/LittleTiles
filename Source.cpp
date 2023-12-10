#include "Source.hpp"

Application* app = nullptr;

int main()
{
    app = new Application();
    while (app->engaged)
    {
        app->HandleEvents();
    }

    return 1;
}

////////////
// Notes //
// - Game Class