#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "audio.h"
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>
int main()
{
	SDL_Init(SDL_INIT_AUDIO);
    	Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
	int i, j, r;
	char sen[5][68] = {"All questions asked by five watched experts amaze the judge$", "The five boxing wizards jump quickly$", "The job requires extra pluck and zeal from every young wage earner$", "The quick brown fox jumps over the lazy dog$", "Woven silk pyjamas exchanged for blue quartz$"}; 
	while(1)
	{
		srand(time(NULL));
		r = (rand() % (4 - 0 + 1)) + 0;
		printf("\nEnter the value: r= %s",sen[r]);
		scanf("%d",&i);
	}
}	
