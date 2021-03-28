#include <stdio.h>
#include <SDL2/SDL.h>

//Pointers
SDL_Surface *screenSurface;
SDL_Surface *loadedImage;
SDL_Surface *playerImage;

SDL_Window *window;

int main()
    {
        //Initialize SDL
        SDL_Init(SDL_INIT_EVERYTHING);

        //Create a window.
        window = SDL_CreateWindow("Test window", 0, 0, 640, 480, SDL_WINDOW_OPENGL);

        //Set screenSurface as default surface for window.
        screenSurface = SDL_GetWindowSurface(window);

        //Load image into loadedImage surface.
        loadedImage = SDL_LoadBMP("grass.bmp");
        playerImage = SDL_LoadBMP("player.bmp");

        //Blit the image onto the screen.
        SDL_BlitSurface(loadedImage,NULL,screenSurface,NULL);
        SDL_BlitSurface(playerImage,NULL,screenSurface,NULL);

        //Update the window surface.
        SDL_UpdateWindowSurface(window);

        //Delay for 5 seconds.
        SDL_Delay(5000);

        //Shut down SDL.
        SDL_Quit();
    }
