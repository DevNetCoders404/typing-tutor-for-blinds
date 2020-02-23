#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>

static const int width = 0;
static const int height = 0;

int main(int argc, char **argv)
{
    // Initialize SDL video and audio systems
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);

    // Initialize SDL mixer
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);



    Mix_Chunk *A = Mix_LoadWAV("audio/alphabets/A.wav");
    Mix_Chunk *B = Mix_LoadWAV("audio/alphabets/B.wav");
    SDL_Window *window = SDL_CreateWindow("Hello, SDL2", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, width, height, SDL_WINDOW_OPENGL);

    // Create a renderer (accelerated and in sync with the display refresh rate)
    SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_PRESENTVSYNC);
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);


    Mix_PlayChannel(-1, A, 0);
    delay(1000);

    char a;
    printf("Enter a: ");
    scanf("%d",&a);
    printf("%c %d...",a,a);
    Mix_PlayChannel(-1, A, 0);
    delay(1000);

    Mix_PlayChannel(-1, B, 0);
    delay(1000);





        // Clear screen
        SDL_RenderClear(renderer);

        // Draw

        // Show what was drawn
        SDL_RenderPresent(renderer);
    //}

    // Release resources

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    //Mix_FreeMusic(backgroundSound);

    Mix_CloseAudio();
    SDL_Quit();

    return 0;
}
