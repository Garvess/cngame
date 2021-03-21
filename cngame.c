#include <stdio.h>
#include <SDL2/SDL.h>

int main(int argc, char* argv[])

{
	if(SDL_Init(SDL_INIT_VIDEO|SDL_INIT_AUDIO) !=0){
		SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
		return 1;
		}

		printf("Inititalization successful!\n");

		SDL_Quit();

		return 0;

}
