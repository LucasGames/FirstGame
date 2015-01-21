#ifdef __cplusplus
    #include <cstdlib>
#else
    #include <stdlib.h>
#endif

#include <stdio.h>
#include <string>

#include "Game.h"

int main ( int argc, char** argv )
{
    Game *game;
    game = new Game();

    //Wait 2 seconds
    SDL_Delay( 2000 );


    return 0;
}
