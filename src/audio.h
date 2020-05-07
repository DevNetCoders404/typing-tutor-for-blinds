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
    Mix_Chunk *A = Mix_LoadWAV("audio/sentences/All questions asked by five watched experts amaze the judge.wav");
    Mix_Chunk *B = Mix_LoadWAV("audio/sentences/The five boxing wizards jump quickly.wav");
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
void play_subsentence(int i, int j)
{

	Mix_Chunk *A1 = Mix_LoadWAV("audio/sentences/1st Sentence/All.wav");
    	Mix_Chunk *B1 = Mix_LoadWAV("audio/sentences/1st Sentence/Questions.wav");
	Mix_Chunk *C1 = Mix_LoadWAV("audio/sentences/1st Sentence/Asked.wav");
    	Mix_Chunk *D1 = Mix_LoadWAV("audio/sentences/1st Sentence/By.wav");
    	Mix_Chunk *E1 = Mix_LoadWAV("audio/sentences/1st Sentence/Five.wav");
    	Mix_Chunk *F1 = Mix_LoadWAV("audio/sentences/1st Sentence/Watched.wav");
    	Mix_Chunk *G1 = Mix_LoadWAV("audio/sentences/1st Sentence/Experts.wav");
    	Mix_Chunk *H1 = Mix_LoadWAV("audio/sentences/1st Sentence/Amaze.wav");
    	Mix_Chunk *I1 = Mix_LoadWAV("audio/sentences/1st Sentence/The.wav");
	Mix_Chunk *J1 = Mix_LoadWAV("audio/sentences/1st Sentence/Judge.wav");

	Mix_Chunk *A2 = Mix_LoadWAV("audio/sentences/2nd Sentence/The.wav");
    	Mix_Chunk *B2 = Mix_LoadWAV("audio/sentences/2nd Sentence/Five.wav");
    	Mix_Chunk *C2 = Mix_LoadWAV("audio/sentences/2nd Sentence/Boxing.wav");
    	Mix_Chunk *D2 = Mix_LoadWAV("audio/sentences/2nd Sentence/Wizards.wav");
    	Mix_Chunk *E2 = Mix_LoadWAV("audio/sentences/2nd Sentence/Jump.wav");
    	Mix_Chunk *F2 = Mix_LoadWAV("audio/sentences/2nd Sentence/Quickly.wav");

	Mix_Chunk *A3 = Mix_LoadWAV("audio/sentences/3rd Sentence/The.wav");
   	Mix_Chunk *B3 = Mix_LoadWAV("audio/sentences/3rd Sentence/Job.wav");
    	Mix_Chunk *C3 = Mix_LoadWAV("audio/sentences/3rd Sentence/Requires.wav");
    	Mix_Chunk *D3 = Mix_LoadWAV("audio/sentences/3rd Sentence/Extra.wav");
	Mix_Chunk *E3 = Mix_LoadWAV("audio/sentences/3rd Sentence/Pluck.wav");
     	Mix_Chunk *F3 = Mix_LoadWAV("audio/sentences/3rd Sentence/And.wav");
    	Mix_Chunk *G3 = Mix_LoadWAV("audio/sentences/3rd Sentence/Zeal.wav");
    	Mix_Chunk *H3 = Mix_LoadWAV("audio/sentences/3rd Sentence/From.wav");
    	Mix_Chunk *I3 = Mix_LoadWAV("audio/sentences/3rd Sentence/Every.wav");
    	Mix_Chunk *J3 = Mix_LoadWAV("audio/sentences/3rd Sentence/Young.wav");
    	Mix_Chunk *K3 = Mix_LoadWAV("audio/sentences/3rd Sentence/Wage.wav");
    	Mix_Chunk *L3 = Mix_LoadWAV("audio/sentences/3rd Sentence/Earnerl.wav");

	Mix_Chunk *A4 = Mix_LoadWAV("audio/sentences/4th Sentence/The.wav");
	Mix_Chunk *B4 = Mix_LoadWAV("audio/sentences/4th Sentence/Quick.wav");
	Mix_Chunk *C4 = Mix_LoadWAV("audio/sentences/4th Sentence/Brown.wav");
	Mix_Chunk *D4 = Mix_LoadWAV("audio/sentences/4th Sentence/Fox.wav");
	Mix_Chunk *E4 = Mix_LoadWAV("audio/sentences/4th Sentence/Jumps.wav");
	Mix_Chunk *F4 = Mix_LoadWAV("audio/sentences/4th Sentence/Over.wav");
	Mix_Chunk *G4 = Mix_LoadWAV("audio/sentences/4th Sentence/The.wav");
	Mix_Chunk *H4 = Mix_LoadWAV("audio/sentences/4th Sentence/Lazy .wav");
	Mix_Chunk *I4 = Mix_LoadWAV("audio/sentences/4th Sentence/Dog.wav");

	Mix_Chunk *A5 = Mix_LoadWAV("audio/sentences/5th Sentence/Woven.wav");
	Mix_Chunk *B5 = Mix_LoadWAV("audio/sentences/5th Sentence/Silk.wav");
	Mix_Chunk *C5 = Mix_LoadWAV("audio/sentences/5th Sentence/Pyjamas.wav");
	Mix_Chunk *D5 = Mix_LoadWAV("audio/sentences/5th Sentence/Exchanged.wav");
	Mix_Chunk *E5 = Mix_LoadWAV("audio/sentences/5th Sentence/For.wav");
	Mix_Chunk *F5 = Mix_LoadWAV("audio/sentences/5th Sentence/Blue.wav");
	Mix_Chunk *G5 = Mix_LoadWAV("audio/sentences/5th Sentence/Quartz.wav");


    switch(i)
    {
          case 1:

		switch(j)
		    {
		    case 1:
			    Mix_PlayChannel(-1, A1, 0);
			    SDL_Delay(500);
			    break;
		    case 2:
			    Mix_PlayChannel(-1, B1, 0);
			    SDL_Delay(500);
			    break;
		    case 3:
			    Mix_PlayChannel(-1, C1, 0);
			    SDL_Delay(500);
			    break;
		    case 4:
			    Mix_PlayChannel(-1, D1, 0);
			    SDL_Delay(500);
			    break;
		    case 5:
			    Mix_PlayChannel(-1, E1, 0);
			    SDL_Delay(500);
 			    break;
   		    case 6:
			    Mix_PlayChannel(-1, F1, 0);
			    SDL_Delay(500);
			    break;
   		    case 7:
			    Mix_PlayChannel(-1, G1, 0);
			    SDL_Delay(500);
			    break;
   		    case 8:
			    Mix_PlayChannel(-1, H1, 0);
			    SDL_Delay(500);
			    break;
   		    case 9:
			    Mix_PlayChannel(-1, I1, 0);
			    SDL_Delay(500);
			    break;
   		    case 10:
			    Mix_PlayChannel(-1, J1, 0);
			    SDL_Delay(500);
			    break;
		    default:
			    break;
		    }
		break;

	case 2:

		switch(j)
		    {
		    case 1:
			    Mix_PlayChannel(-1, A2, 0);
			    SDL_Delay(500);
			    break;
		    case 2:
			    Mix_PlayChannel(-1, B2, 0);
			    SDL_Delay(500);
			    break;
		    case 3:
			    Mix_PlayChannel(-1, C2, 0);
			    SDL_Delay(500);
			    break;
		    case 4:
			    Mix_PlayChannel(-1, D2, 0);
			    SDL_Delay(500);
			    break;
		    case 5:
			    Mix_PlayChannel(-1, E2, 0);
			    SDL_Delay(500);
			    break;
		    case 6:
			    Mix_PlayChannel(-1, F2, 0);
			    SDL_Delay(500);
			    break;

		    default:
			    break;
		    }
		break;

	case 3:


		switch(j)
		    {
		    case 1:
			    Mix_PlayChannel(-1, A3, 0);
			    SDL_Delay(500);
			    break;
		    case 2:
			    Mix_PlayChannel(-1, B3, 0);
			    SDL_Delay(500);
			    break;
		    case 3:
			    Mix_PlayChannel(-1, C3, 0);
			    SDL_Delay(500);
			    break;
		    case 4:
			    Mix_PlayChannel(-1, D3, 0);
			    SDL_Delay(500);
			    break;
		    case 5:
			    Mix_PlayChannel(-1, E3, 0);
			    SDL_Delay(500);
			    break;
		    case 6:
			    Mix_PlayChannel(-1, F3, 0);
			    SDL_Delay(500);
			    break;
		    case 7:
			    Mix_PlayChannel(-1, G3, 0);
			    SDL_Delay(500);
			    break;
		    case 8:
			    Mix_PlayChannel(-1, H3, 0);
			    SDL_Delay(500);
			    break;
		    case 9:
			    Mix_PlayChannel(-1, I3, 0);
			    SDL_Delay(500);
			    break;
		    case 10:
			    Mix_PlayChannel(-1, J3, 0);
			    SDL_Delay(500);
			    break;
		    case 11:
			    Mix_PlayChannel(-1, K3, 0);
			    SDL_Delay(500);
			    break;
		    case 12:
			    Mix_PlayChannel(-1, L3, 0);
			    SDL_Delay(500);
			    break;

		    default:
			    break;
		    }
		break;

	case 4:
		switch(j)
		    {
		    case 1:
			    Mix_PlayChannel(-1, A4, 0);
			    SDL_Delay(4500);
			    break;
		    case 2:
			    Mix_PlayChannel(-1, B4, 0);
			    SDL_Delay(3500);
			    break;
		    case 3:
			    Mix_PlayChannel(-1, C4, 0);
			    SDL_Delay(4500);
			    break;
		    case 4:
			    Mix_PlayChannel(-1, D4, 0);
			    SDL_Delay(3500);
			    break;
		    case 5:
			    Mix_PlayChannel(-1, E4, 0);
			    SDL_Delay(3500);
			    break;
		    case 6:
			    Mix_PlayChannel(-1, F4, 0);
			    SDL_Delay(3500);
			    break;
		    case 7:
			    Mix_PlayChannel(-1, G4, 0);
			    SDL_Delay(3500);
			    break;
		    case 8:
			    Mix_PlayChannel(-1, H4, 0);
			    SDL_Delay(3500);
			    break;
		    case 9:
			    Mix_PlayChannel(-1, I4, 0);
			    SDL_Delay(3500);
			    break;
		    default:
			    break;
		    }
		break;
	case 5:

		switch(i)
		    {
		    case 1:
			    Mix_PlayChannel(-1, A5, 0);
			    SDL_Delay(4500);
			    break;
		    case 2:
			    Mix_PlayChannel(-1, B5, 0);
			    SDL_Delay(3500);
			    break;
		    case 3:
			    Mix_PlayChannel(-1, C5, 0);
			    SDL_Delay(4500);
			    break;
		    case 4:
			    Mix_PlayChannel(-1, D5, 0);
			    SDL_Delay(3500);
			    break;
		    case 5:
			    Mix_PlayChannel(-1, E5, 0);
			    SDL_Delay(3500);
			    break;
		    case 6:
			    Mix_PlayChannel(-1, F5, 0);
			    SDL_Delay(3500);
			    break;
		    case 7:
			    Mix_PlayChannel(-1, G5, 0);
			    SDL_Delay(3500);
			    break;
		    default:
			    break;
		    }
		break;
	}

}
void cal_app(int i)
{
    Mix_Chunk *A = Mix_LoadWAV("audio/Excellent.wav");
    Mix_Chunk *B = Mix_LoadWAV("audio/Very Good.wav");
    Mix_Chunk *C = Mix_LoadWAV("audio/Good.wav");
    Mix_Chunk *D = Mix_LoadWAV("audio/Poor...Need Practice.wav");
    switch(i)
    {
        case 0:
                Mix_PlayChannel(-1, A, 0);
                SDL_Delay(1000);
                break;
        case 1 ... 2:
                Mix_PlayChannel(-1, B, 0);
                SDL_Delay(1000);
                break;
        case 3 ... 4:
                Mix_PlayChannel(-1, C, 0);
                SDL_Delay(1000);
                break;
        case 5 ... 50:
                Mix_PlayChannel(-1, D, 0);
                SDL_Delay(2000);
                break;
    }
}
