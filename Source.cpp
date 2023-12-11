#include "Source.hpp"

Application* app = nullptr;

int main()
{
    app = new Application();
    while (app->engaged)
    {
        app->HandleEvents();
        app->Render();
    }

    app->Disengage();
    delete app;
    return 1;
}