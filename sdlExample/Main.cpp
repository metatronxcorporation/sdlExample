#include <SDL.h>
#include <iostream>

int main(int argc, char* args[]) {
	const int WIDTH = 800;
	const int HEIGHT = 600;

	SDL_Window* window = NULL;
	SDL_Surface* surface = NULL;

	int failed = 0;

	if (SDL_Init(SDL_INIT_VIDEO) < 0)
	{
		std::cout << "SDL failed to initialize video: " << SDL_GetError();
		failed = -1;
	}
	else
	{
		window = SDL_CreateWindow("Template",
			SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,
			WIDTH, HEIGHT,
			SDL_WINDOW_SHOWN);

		if (window == NULL)
		{
			std::cout << "SDL failed to create window: " << SDL_GetError();
			failed = -1;
		}
		else
		{
			surface = SDL_GetWindowSurface(window);

			SDL_FillRect(surface, NULL, SDL_MapRGB(surface->format, 0x00, 0x00, 0x00));

			SDL_UpdateWindowSurface(window);

			SDL_Delay(2000);
		}
	}

	SDL_DestroyWindow(window);
	SDL_Quit();

	return failed;
}
