#include "Game.h"
#include <SDL/SDL.h>

Game::Game()
{
    screen = NULL;

    //Initialize all SDL subsystems
    SDL_Init( SDL_INIT_EVERYTHING );

    //Set up the screen
    screen = SDL_SetVideoMode( 1024, 768, 32, SDL_SWSURFACE );

     //Set the window caption
    SDL_WM_SetCaption( "Sick Fighters!", NULL );

    //Update the screen
    SDL_Flip( screen);

}

Game::~Game()
{
    SDL_FreeSurface(screen);

    SDL_Quit();
}
