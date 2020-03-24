#include<stdio.h>
#include<stdbool.h>
#include<SDL2/SDL.h>
#include<SDL2/SDL_mixer.h>
void play_alphabet(char c)
{
    Mix_Chunk *A = Mix_LoadWAV("audio/alphabets/A.wav");
    Mix_Chunk *B = Mix_LoadWAV("audio/alphabets/B.wav");
    Mix_Chunk *C = Mix_LoadWAV("audio/alphabets/C.wav");
    Mix_Chunk *D = Mix_LoadWAV("audio/alphabets/D.wav");
    Mix_Chunk *E = Mix_LoadWAV("audio/alphabets/E.wav");
    Mix_Chunk *F = Mix_LoadWAV("audio/alphabets/F.wav");
    Mix_Chunk *G = Mix_LoadWAV("audio/alphabets/G.wav");
    Mix_Chunk *H = Mix_LoadWAV("audio/alphabets/H.wav");
    Mix_Chunk *I = Mix_LoadWAV("audio/alphabets/I.wav");
    Mix_Chunk *J = Mix_LoadWAV("audio/alphabets/J.wav");
    Mix_Chunk *K = Mix_LoadWAV("audio/alphabets/K.wav");
    Mix_Chunk *L = Mix_LoadWAV("audio/alphabets/L.wav");
    Mix_Chunk *M = Mix_LoadWAV("audio/alphabets/M.wav");
    Mix_Chunk *N = Mix_LoadWAV("audio/alphabets/N.wav");
    Mix_Chunk *O = Mix_LoadWAV("audio/alphabets/O.wav");
    Mix_Chunk *P = Mix_LoadWAV("audio/alphabets/P.wav");
    Mix_Chunk *Q = Mix_LoadWAV("audio/alphabets/Q.wav");
    Mix_Chunk *R = Mix_LoadWAV("audio/alphabets/R.wav");
    Mix_Chunk *S = Mix_LoadWAV("audio/alphabets/S.wav");
    Mix_Chunk *T = Mix_LoadWAV("audio/alphabets/T.wav");
    Mix_Chunk *U = Mix_LoadWAV("audio/alphabets/U.wav");
    Mix_Chunk *V = Mix_LoadWAV("audio/alphabets/V.wav");
    Mix_Chunk *W = Mix_LoadWAV("audio/alphabets/W.wav");
    Mix_Chunk *X = Mix_LoadWAV("audio/alphabets/X.wav");
    Mix_Chunk *Y = Mix_LoadWAV("audio/alphabets/Y.wav");
    Mix_Chunk *Z = Mix_LoadWAV("audio/alphabets/Zedd.wav");
     switch(c)
        {
        case 'a':
                Mix_PlayChannel(-1, A, 0);
                SDL_Delay(1000);
                break;
        case 'b':
                Mix_PlayChannel(-1, B, 0);
                SDL_Delay(1000);
                break;
        case 'c':
                Mix_PlayChannel(-1, C, 0);
                SDL_Delay(1000);
                break;
        case 'd':
                Mix_PlayChannel(-1, D, 0);
                SDL_Delay(1000);
                break;
        case 'e':
                Mix_PlayChannel(-1, E, 0);
                SDL_Delay(1000);
                break;
        case 'f':
                Mix_PlayChannel(-1, F, 0);
                SDL_Delay(1000);
                break;

        case 'g':
                Mix_PlayChannel(-1, G, 0);
                SDL_Delay(1000);
                break;
        case 'h':
                Mix_PlayChannel(-1, H, 0);
                SDL_Delay(1000);
                break;
        case 'i':
                Mix_PlayChannel(-1, I, 0);
                SDL_Delay(1000);
                break;
        case 'j':
                Mix_PlayChannel(-1, J, 0);
                SDL_Delay(1000);
                break;
        case 'k':
                Mix_PlayChannel(-1, K, 0);
                SDL_Delay(1000);
                break;
        case 'l':
                Mix_PlayChannel(-1, L, 0);
                SDL_Delay(1000);
                break;
        case 'm':
                Mix_PlayChannel(-1, M, 0);
                SDL_Delay(1000);
                break;
        case 'n':
                Mix_PlayChannel(-1, N, 0);
                SDL_Delay(1000);
                break;
        case 'o':
                Mix_PlayChannel(-1, O, 0);
                SDL_Delay(1000);
                break;
        case 'p':
                Mix_PlayChannel(-1, P, 0);
                SDL_Delay(1000);
                break;
        case 'q':
                Mix_PlayChannel(-1, Q, 0);
                SDL_Delay(1000);
                break;
        case 'r':
                Mix_PlayChannel(-1, R, 0);
                SDL_Delay(1000);
                break;
        case 's':
                Mix_PlayChannel(-1, S, 0);
                SDL_Delay(1000);
                break;
        case 't':
                Mix_PlayChannel(-1, T, 0);
                SDL_Delay(1000);
                break;
        case 'u':
                Mix_PlayChannel(-1, U, 0);
                SDL_Delay(1000);
                break;
        case 'v':
                Mix_PlayChannel(-1, V, 0);
                SDL_Delay(1000);
                break;
        case 'w':
                Mix_PlayChannel(-1, W, 0);
                SDL_Delay(1000);
                break;
        case 'x':
                Mix_PlayChannel(-1, X, 0);
                SDL_Delay(1000);
                break;
        case 'y':
                Mix_PlayChannel(-1, Y, 0);
                SDL_Delay(1000);
                break;
        case 'z':
                Mix_PlayChannel(-1, Z, 0);
                SDL_Delay(1000);
                break;
        default:
                break;
        }
}
void play_words(int i)
{
    Mix_Chunk *A = Mix_LoadWAV("audio/words/After...'A' 'F' 'T' 'E' 'R'.wav");
    Mix_Chunk *B = Mix_LoadWAV("audio/words/Alomst. 'A' 'L' 'M' 'O' 'S' 'T'.wav");
    Mix_Chunk *C = Mix_LoadWAV("audio/words/Because. 'B' 'E' 'C' 'A' 'U' 'S' 'E'.wav");
    Mix_Chunk *D = Mix_LoadWAV("audio/words/Between. 'B' 'E' 'T' 'W' 'E' 'E' 'N'.wav");
    Mix_Chunk *E = Mix_LoadWAV("audio/words/Later. 'L' 'A' 'T' 'E' 'R'.wav");
    Mix_Chunk *F = Mix_LoadWAV("audio/words/Might. 'M' 'I' 'G' 'H' 'T' .wav");
    Mix_Chunk *G = Mix_LoadWAV("audio/words/Mother. 'M' 'O' 'T' 'H' 'E' 'R'.wav");
    Mix_Chunk *H = Mix_LoadWAV("audio/words/Never. 'N' 'E' 'V' 'E' 'R'.wav");
    Mix_Chunk *I = Mix_LoadWAV("audio/words/Paper. 'P' 'A' 'P' 'E' 'R'.wav");
    Mix_Chunk *J = Mix_LoadWAV("audio/words/Really 'R' 'E' 'A' 'L' 'L' 'Y'.wav");
    Mix_Chunk *K = Mix_LoadWAV("audio/words/River. 'R' 'I' 'V' 'E' 'R'.wav");
    Mix_Chunk *L = Mix_LoadWAV("audio/words/Sometimes. 'S' 'O' 'M' 'E' 'T' 'I' 'M' 'E' 'S'.wav");
    Mix_Chunk *M = Mix_LoadWAV("audio/words/Together. 'T' 'O' 'G' 'E' 'T' 'H' 'E' 'R'.wav");
    Mix_Chunk *N = Mix_LoadWAV("audio/words/Watch. 'W' 'A' 'T' 'C' 'H'.wav");
    Mix_Chunk *O = Mix_LoadWAV("audio/words/World. 'W' 'O' 'R' 'L' 'D'.wav");
    switch(i)
    {
    case 1:
            Mix_PlayChannel(-1, A, 0);
            SDL_Delay(5000);
            break;
    case 2:
            Mix_PlayChannel(-1, B, 0);
            SDL_Delay(5000);
            break;
    case 3:
            Mix_PlayChannel(-1, C, 0);
            SDL_Delay(5000);
            break;
    case 4:
            Mix_PlayChannel(-1, D, 0);
            SDL_Delay(5000);
            break;
    case 5:
            Mix_PlayChannel(-1, E, 0);
            SDL_Delay(5000);
            break;
    case 6:
            Mix_PlayChannel(-1, F, 0);
            SDL_Delay(5000);
            break;
    case 7:
            Mix_PlayChannel(-1, G, 0);
            SDL_Delay(5000);
            break;
    case 8:
            Mix_PlayChannel(-1, H, 0);
            SDL_Delay(5000);
            break;
    case 9:
            Mix_PlayChannel(-1, I, 0);
            SDL_Delay(5000);
            break;
    case 10:
            Mix_PlayChannel(-1, J, 0);
            SDL_Delay(5000);
            break;
    case 11:
            Mix_PlayChannel(-1, K, 0);
            SDL_Delay(5000);
            break;
    case 12:
            Mix_PlayChannel(-1, L, 0);
            SDL_Delay(5000);
            break;
    case 13:
            Mix_PlayChannel(-1, M, 0);
            SDL_Delay(5000);
            break;
    case 14:
            Mix_PlayChannel(-1, N, 0);
            SDL_Delay(5000);
            break;
    case 15:
            Mix_PlayChannel(-1, O, 0);
            SDL_Delay(5000);
            break;
    default:
            break;
    }
}
void play_sentences(int i)
{
    Mix_Chunk *A = Mix_LoadWAV("audio/sentences/All questions asked by five watched experts amaze the judge..wav");
    Mix_Chunk *B = Mix_LoadWAV("audio/sentences/The five boxing wizards jump quickly..wav");
    Mix_Chunk *C = Mix_LoadWAV("audio/sentences/The job requires extra pluck and zeal from every young wage earner.wav");
    Mix_Chunk *D = Mix_LoadWAV("audio/sentences/The quick brown fox jumps over the lazy dog.wav");
    Mix_Chunk *E = Mix_LoadWAV("audio/sentences/Woven silk pyjamas exchanged for blue quartz.wav");
    switch(i)
    {
    case 1:
            Mix_PlayChannel(-1, A, 0);
            SDL_Delay(4500);
            break;
    case 2:
            Mix_PlayChannel(-1, B, 0);
            SDL_Delay(3500);
            break;
    case 3:
            Mix_PlayChannel(-1, C, 0);
            SDL_Delay(4500);
            break;
    case 4:
            Mix_PlayChannel(-1, D, 0);
            SDL_Delay(3500);
            break;
    case 5:
            Mix_PlayChannel(-1, E, 0);
            SDL_Delay(3500);
            break;
    default:
            break;
    }
}
void play_menus(int i)
{
    Mix_Chunk *A = Mix_LoadWAV("audio/menus/alphabet exercise.wav");
    Mix_Chunk *B = Mix_LoadWAV("audio/menus/word exercise.wav");
    Mix_Chunk *C = Mix_LoadWAV("audio/menus/sentence-exercise.wav");
    Mix_Chunk *D = Mix_LoadWAV("audio/menus/Exit.wav");
    Mix_Chunk *E = Mix_LoadWAV("audio/menus/Pause menu.wav");
    Mix_Chunk *F = Mix_LoadWAV("audio/menus/Wrong-answer-sound-effect.WAV");
    switch(i)
    {
    case 1:
            Mix_PlayChannel(-1, A, 0);
            SDL_Delay(1000);
            break;
    case 2:
            Mix_PlayChannel(-1, B, 0);
            SDL_Delay(1000);
            break;
    case 3:
            Mix_PlayChannel(-1, C, 0);
            SDL_Delay(1000);
            break;
    case 4:
            Mix_PlayChannel(-1, D, 0);
            SDL_Delay(1000);
            break;
    case 5:
            Mix_PlayChannel(-1, E, 0);
            SDL_Delay(1000);
            break;

    case 6:
	    Mix_PlayChannel(-1, F, 0);
            SDL_Delay(1000);
            break; 
    default:
            break;
    }
}

