#ifndef GAME_H
#define GAME_H

#include <SDL/SDL.h>
#include "SDL/SDL_image.h"
#include "SDL/SDL_ttf.h"

#define SCREEN_WIDTH 1024;
#define SCREEN_HEIGHT 768;
#define SCREEN_BPP 32;

#define FPS 60;

class Game
{
    private:
        SDL_Surface *screen;

    public:
        Game();
        ~Game();
        Game(int width, int heigth, int BPP);

        SDL_Surface* getScreen();

};

#endif // GAME_H
