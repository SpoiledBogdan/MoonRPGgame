#include "Game.h"
//#include "settings.h"


int main(void)
{
    InitWindow(settings::screenWidth, settings::screenHeight, "Moon");

    Game game(60);


    while (!game.GameShouldClose())
    {
        game.Tick();
    }

    return 0;
}
