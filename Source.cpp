#include "Source.hpp"

Application* app = nullptr;

int main( int argc, char* argv[] )
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
