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
    SDL_Init(SDL_INIT_AUDIO);

    // Initialize SDL mixer
    Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);

    if(Mix_Init(MIX_INIT_MOD) != MIX_INIT_MOD)
    {
    	printf("Error");
    	return -1;
    }
	

    Mix_Chunk *A = Mix_LoadWAV("audio/alphabets/A.wav");
    Mix_Chunk *B = Mix_LoadWAV("audio/alphabets/B.wav");



    Mix_PlayChannel(-1, A, 0);
    SDL_Delay(1000);
    
    char a;
    printf("Enter a: ");
    scanf("%c",&a);
    printf("%c %d...",a,a);
    Mix_PlayChannel(-1, A, 0);
    SDL_Delay(1000);

    Mix_PlayChannel(-1, B, 0);
    SDL_Delay(1000);

    Mix_CloseAudio();
    SDL_Quit();

    return 0;
}
