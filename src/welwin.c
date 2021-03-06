#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ncurses.h>
#include <SDL2/SDL.h>
#include <SDL2/SDL_mixer.h>
#include "audio.h"
#include <string.h>
#define WIDTH 30
#define HEIGHT 10 

int startx = 0;
int starty = 0;

char *choices[] = { 
			"1. Alphabet Exercise",
			"2. Word Exercise",
			"3. Sentence Exercise",
			"4. Exit",
		  };
struct format_time
{
       	int hour,min,sec;
};
int n_choices = sizeof(choices) / sizeof(char *);
void print_menu(WINDOW *menu_win, int highlight);
void alpha_exercise();
void word_exercise();
void sentence_exercise();
struct format_time time_converter(int,WINDOW *disp_win);

int main()
{	WINDOW *menu_win;
	int highlight = 1;
	int choice = 0;
	int c;

	initscr();
	clear();
	noecho();
	cbreak();	
	SDL_Init(SDL_INIT_AUDIO);
    	Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 2048);
	startx = (80 - WIDTH) / 2;
	starty = (24 - HEIGHT) / 2;
	mvprintw(1, 13, "  _      ________   _________  __  _______  __________ ");
	mvprintw(2, 13, " | | /| / / __/ /  / ___/ __ \\/  |/  / __/ /_  __/ __ \\");
	mvprintw(3, 13, " | |/ |/ / _// /__/ /__/ /_/ / /|_/ / _/    / / / /_/ /");
	mvprintw(4, 13, " |__/|__/___/____/\\___/\\____/_/  /_/___/   /_/  \\____/ ");
	mvprintw(5, 13, "	                _______________");
	mvprintw(6, 13, "                  /_  __/_  __/ _ )                      ");
	mvprintw(7, 13, "                   / /   / / / _  |                  ");
	mvprintw(8, 13, "                  /_/   /_/ /____/                       ");
	attron(A_REVERSE);
	mvprintw(10, 25, "** TYPING TUTOR FOR BLINDS **");
	attroff(A_REVERSE);
	mvprintw(12, 13, "                PRESS ANY KEY TO SKIP...");
	refresh();

	WINDOW *ins_win = newwin(11, 70, 13, (80 - 70) / 2);
	box(ins_win, 0, 0);
	wattron(ins_win,A_BOLD);
	mvwprintw(ins_win,1,26,"** INSTRUCTION **");
	wattroff(ins_win,A_BOLD);
 	mvwprintw(ins_win,3,3,"1. Select any Exercise from Alphabet, Word, Sentence.");
	mvwprintw(ins_win,5,3,"2. To hear Audible instructions on screen, Press 'TAB'.");
	mvwprintw(ins_win,7,3,"3. For each exercise, Timer is provided.");
	mvwprintw(ins_win,9,3,"4. Score will be calculated on speed and failure of user.");	
	wrefresh(ins_win);
	move(12,52);
	getch();
	clear();
		
	menu_win = newwin(HEIGHT, WIDTH, starty, startx);
	keypad(menu_win, TRUE);
	play_menus(highlight);
	while(1)
	{
		mvprintw(0, 0, "Use arrow keys to go up and down, Press enter to select a choice");
		refresh();
		print_menu(menu_win, highlight);
		c = wgetch(menu_win);
		choice=0;			
		switch(c)
		{	case KEY_UP:
				if(highlight == 1)
					highlight = n_choices;
				else
					--highlight;
				play_menus(highlight);
				break;
			case KEY_DOWN:
				if(highlight == n_choices)
					highlight = 1;
				else 
					++highlight;
				play_menus(highlight);
				break;
			case 10:
				choice = highlight;
				break;
			case 9:
				play_menus(highlight);
				break;

			default:
				refresh();
				break;
		}
		if(choice >0 && choice < 4)	/* User did a choice come out of the infinite loop */
		{
			switch(choice)
			{
				case 1:
					alpha_exercise();
					break;
				case 2:
					word_exercise();
					break;
				case 3:
					sentence_exercise();
					break;
				default:
					break;
			}	
		
		}
		clear();
		if(choice == 4)
			break;
		
	}	
	//mvprintw(23, 0, "You chose choice %d with choice string %s key pressed=%d\n", choice, choices[choice - 1],c);
	//getch();
	Mix_CloseAudio();
   	SDL_Quit();
	clrtoeol();
	refresh();
	endwin();
	return 0;
}

void alpha_exercise()
{
	clear();
	refresh();
	static int ptime;
	int i=0,j=1,err=0;
	char chr,ans;
	WINDOW *disp_win = newwin(10, 70, 1, (80 - 70) / 2);
	box(disp_win, 0, 0);
	mvwprintw(disp_win, 1, 26, "** INSTRUCTIONS **");
	mvwprintw(disp_win, 2, 1, "1. Enter each character displayed or sound produced.");
	mvwprintw(disp_win, 3, 1, "2. Timer for this exercise is 30 seconds.");
	mvwprintw(disp_win, 4, 1, "3. If input is wrong, enter character again.");
	mvwprintw(disp_win, 5, 1, "4. For correct input character, Next character will be generated -");
	mvwprintw(disp_win, 6, 1, "   until time expires.");
	wattron(disp_win, A_REVERSE);
	mvwprintw(disp_win, 7, 24, "PRESS ANY KEY TO START");
	mvwprintw(disp_win, 8, 22, "PRESS ESC TO PREVIOUS MENU");
	wattroff(disp_win, A_REVERSE);
	wrefresh(disp_win);

	attron(A_BOLD);
	mvprintw(13, 31, "[[[ INPUT BOX ]]]");
	attroff(A_BOLD);

	WINDOW *input_win = newwin(5, 30, 15, (80 - 30) / 2);
	box(input_win, 0, 0);
	wrefresh(input_win);
	move(8, 51);
	refresh();
	ans = getch();
	if(ans == 27)
	{
		return;
	}	

	time_t begin = time(NULL);

	while(i!=50)
	{
		time_t end = time(NULL);
		int sec = end - begin;
		sec -= ptime;
		struct format_time s = time_converter(sec,disp_win);
		if(s.sec >= 30)
			break;
		srand(time(NULL));
		chr = (rand() % (122 - 97 + 1)) + 97;
		resume:
		wclear(disp_win);
		box(disp_win, 0, 0);
		wattron(disp_win, A_BOLD);
		mvwprintw(disp_win, 1, 1, "CHARACTER GENERATED:           %c ",chr);
		play_alphabet(chr);
		wrefresh(disp_win);
		move(16, 26+(i));
		ans = getch();
		while(chr != ans)
		{
			int pause;
			if(ans == 27)
			{
				wattron(disp_win, A_REVERSE);
				time_t ps_time = time(NULL);
				mvwprintw(disp_win, 6, 28, "** PAUSE MENU **");
				mvwprintw(disp_win, 7, 24, "PRESS ANY KEY TO START");
				mvwprintw(disp_win, 8, 21, "PRESS ENTER/ESC TO END EXERCISE");
				wattroff(disp_win, A_REVERSE);
				play_menus(5);
				wrefresh(disp_win);
				pause = getch();
				if(pause == 10 || pause == 27)
					return;
				else
				{	
					time_t pe_time = time(NULL);
					ptime = pe_time - ps_time;				
					goto resume;
				}
			}
			else if(ans == 9)
			{
				play_alphabet(chr);
				ans = getch();
			}
			else
			{
				wclear(disp_win);
				play_menus(6);
				box(disp_win, 0, 0);
				mvwprintw(disp_win, 1, 1, "CHARACTER GENERATED:           %c           TRY AGAIN",chr);
				play_alphabet(chr);
				wrefresh(disp_win);
				move(16, 26+(i));
				ans = getch();
				err++;	
			}
			
		}
		mvwprintw(input_win, j, i+1,"%c",ans);
		wrefresh(input_win);
		i++;
	}

	
	time_t end = time(NULL);
	wclear(disp_win);
	box(disp_win, 0, 0);
	wattron(disp_win, A_REVERSE);
	mvwprintw(disp_win, 1, 1, "EXERCISE COMPLETED...",chr);
	wattron(disp_win, A_BOLD);
	mvwprintw(disp_win, 2, 1, "FINAL SCORE: CORRECT-%d WRONG-%d",(i-err),err);
	int sec = end - begin;
	sec -= ptime;
	struct format_time s = time_converter(sec,disp_win);
	mvwprintw(disp_win, 3, 1, "Time elpased is %dH:%dM:%dS",s.hour,s.min,s.sec);
	switch(err)
	{
		case 0:
			mvwprintw(disp_win, 4, 1, "Grade: Excellent...");
		        break;
		case 1 ... 2:
		        mvwprintw(disp_win, 4, 1, "Grade: Very Good...");
		        break;
		case 3 ... 4:
		        mvwprintw(disp_win, 4, 1, "Grade: Good...");
		        break;
		case 5 ... 50:
		        mvwprintw(disp_win, 4, 1, "Grade: Poor... Need Improvement...");
		        break;
	}
	switch(i)
	{
		case 12 ... 50:
			mvwprintw(disp_win, 5, 1, "Speed: Excellent...");
		        break;
		case 7 ... 11:
		        mvwprintw(disp_win, 5, 1, "Speed: Very Good...");
		        break;
		case 5 ... 6:
		        mvwprintw(disp_win, 5, 1, "Speed: Good...");
		        break;
		case 0 ... 4:
		        mvwprintw(disp_win, 5, 1, "Speed: Poor... Need Improvement...");
		        break;
	}
	cal_app(err);
	wrefresh(disp_win);
	getch();
	clear;
}

void word_exercise()
{
	char wrd[15][11] = {"AFTER ", "ALMOST ", "BECAUSE ", "BETWEEN ", "LATER ", "MIGHT ", "MOTHER ", "NEVER ", "PAPER ", "REALLY ", "RIVER ", "SOMETIMES ", "TOGETHER ", "WATCH ", "WORLD "};
	clear();
	refresh();
	static int ptime;
	int i=0,j=1,err=0,r=0,c=0;
	char chr='a',ans,chr2;
	WINDOW *disp_win = newwin(10, 70, 1, (80 - 70) / 2);
	box(disp_win, 0, 0);
	mvwprintw(disp_win, 1, 26, "** INSTRUCTIONS **");
	mvwprintw(disp_win, 2, 1, "1. Enter each string displayed or sound produced.");
	mvwprintw(disp_win, 3, 1, "2. Timer for this exercise is 2 minutes(120 seconds).");
	mvwprintw(disp_win, 4, 1, "3. If input is wrong, enter whole string again.");
	mvwprintw(disp_win, 5, 1, "4. For correct input string, Next string will be generated -");
	mvwprintw(disp_win, 6, 1, "   until time expires.");
	wattron(disp_win, A_REVERSE);
	mvwprintw(disp_win, 7, 24, "PRESS ANY KEY TO START");
	mvwprintw(disp_win, 8, 22, "PRESS ESC TO PREVIOUS MENU");
	wattroff(disp_win, A_REVERSE);
	wrefresh(disp_win);

	attron(A_BOLD);
	mvprintw(13, 31, "[[[ INPUT BOX ]]]");
	attroff(A_BOLD);

	WINDOW *input_win = newwin(5, 30, 15, (80 - 30) / 2);
	box(input_win, 0, 0);
	wrefresh(input_win);
	move(8, 51);
	refresh();
	ans = getch();
	if(ans == 27)
	{
		return;
	}	

	time_t begin = time(NULL);

	while(i!=50)
	{
		time_t end = time(NULL);
		int sec = end - begin;
		sec -= ptime;
		struct format_time s = time_converter(sec,disp_win);
		if(s.min >= 2)
			break;
		srand(time(NULL));
		r = (rand() % (14 - 0 + 1)) + 0;
		resume:
		wclear(disp_win);
		box(disp_win, 0, 0);
		wattron(disp_win, A_BOLD);
		mvwprintw(disp_win, 1, 1, "STRING GENERATED:           %s ",wrd[r]);
		wrefresh(disp_win);
		play_words(r+1);
		move(16, 26+(i));
		c=0;
		chr2 = wrd[r][c+1];
		while(chr2 != ' ')
		{
			check:
			chr = wrd[r][c];
			chr2 = wrd[r][c+1];
			ans = getch();
			while(ans != chr)
			{
				int pause;
				if(ans == 27)
				{
					wattron(disp_win, A_REVERSE);
					time_t ps_time = time(NULL);
					mvwprintw(disp_win, 6, 28, "** PAUSE MENU **");
					mvwprintw(disp_win, 7, 24, "PRESS ANY KEY TO START");
					mvwprintw(disp_win, 8, 21, "PRESS ENTER/ESC TO END EXERCISE");
					wattroff(disp_win, A_REVERSE);
					play_menus(5);
					wrefresh(disp_win);
					pause = getch();
					if(pause == 10 || pause == 27)
						return;
					else
					{
						time_t pe_time = time(NULL);
						ptime = pe_time - ps_time;
						goto resume;
					}
				}
				else if(ans == 9)
				{
					play_words(r+1);
					ans = getch();
				}
				else if(ans == chr+32)
					break;
				else
				{
					wclear(disp_win);
					box(disp_win, 0, 0);
					mvwprintw(disp_win, 1, 1, "STRING GENERATED:           %s       TRY AGAIN",wrd[r]);
					play_menus(6);
					wrefresh(disp_win);
					wclear(input_win);
					box(input_win, 0, 0);
					wrefresh(input_win);
					move(16, 26+(i));
					refresh();
					c=0;
					err++;	
					goto check;
				}
				
			}
			mvwprintw(input_win, j, c+1,"%c",ans);
			wrefresh(input_win);
			c++;
		}
		wclear(input_win);
		box(input_win, 0, 0);
		wrefresh(input_win);
		move(16, 26+(i));
		refresh();
		i++;
	}

	time_t end = time(NULL);
	wclear(disp_win);
	box(disp_win, 0, 0);
	wattron(disp_win, A_REVERSE);
	mvwprintw(disp_win, 1, 1, "EXERCISE COMPLETED...",chr);
	wattron(disp_win, A_BOLD);
	mvwprintw(disp_win, 2, 1, "FINAL SCORE: CORRECT-%d WRONG-%d",(i-err),err);
	int sec = end - begin;
	sec -= ptime;
	struct format_time s = time_converter(sec,disp_win);
	mvwprintw(disp_win, 3, 1, "Time elpased is %dH:%dM:%dS",s.hour,s.min,s.sec);
	switch(err)
	{
		case 0:
			mvwprintw(disp_win, 4, 1, "Grade: Excellent...");
		        break;
		case 1 ... 2:
		        mvwprintw(disp_win, 4, 1, "Grade: Very Good...");
		        break;
		case 3 ... 4:
		        mvwprintw(disp_win, 4, 1, "Grade: Good...");
		        break;
		case 5 ... 50:
		        mvwprintw(disp_win, 4, 1, "Grade: Poor... Need Improvement...");
		        break;
	}
	switch(i)
	{
		case 15 ... 50:
			mvwprintw(disp_win, 5, 1, "Speed: Excellent...");
		        break;
		case 11 ... 14:
		        mvwprintw(disp_win, 5, 1, "Speed: Very Good...");
		        break;
		case 8 ... 10:
		        mvwprintw(disp_win, 5, 1, "Speed: Good...");
		        break;
		case 0 ... 7:
		        mvwprintw(disp_win, 5, 1, "Speed: Poor... Need Improvement...");
		        break;
	}
	cal_app(err);	
	wrefresh(disp_win);
	getch();
	clear;
}
void sentence_exercise()
{
	clear();
	refresh();
	static int ptime;
	int i=0,j=1,err=0,r=0,c=0,sp=1;
	char chr='a',ans,chr2;
	char sen[5][68] = {"All questions asked by five watched experts amaze the judge$", "The five boxing wizards jump quickly$", "The job requires extra pluck and zeal from every young wage earner$", "The quick brown fox jumps over the lazy dog$", "Woven silk pyjamas exchanged for blue quartz$"}; 
	WINDOW *disp_win = newwin(10, 70, 1, (80 - 70) / 2);
	box(disp_win, 0, 0);
	mvwprintw(disp_win, 1, 26, "** INSTRUCTIONS **");
	mvwprintw(disp_win, 2, 1, "1. Enter each sentence displayed or sound produced.");
	mvwprintw(disp_win, 3, 1, "2. Timer for this exercise is 2 minutes(120 seconds).");
	mvwprintw(disp_win, 4, 1, "3. If input is wrong, enter whole string again.");
	mvwprintw(disp_win, 5, 1, "4. For correct input sentence, Next will be generated -");
	mvwprintw(disp_win, 6, 1, "   until time expires.");
	wattron(disp_win, A_REVERSE);
	mvwprintw(disp_win, 7, 24, "PRESS ANY KEY TO START");
	mvwprintw(disp_win, 8, 22, "PRESS ESC TO PREVIOUS MENU");
	wattroff(disp_win, A_REVERSE);
	wrefresh(disp_win);

	attron(A_BOLD);
	mvprintw(13, 31, "[[[ INPUT BOX ]]]");
	attroff(A_BOLD);

	WINDOW *input_win = newwin(5, 70, 15, (80 - 70) / 2);
	box(input_win, 0, 0);
	wrefresh(input_win);
	move(8, 51);
	refresh();
	ans = getch();
	if(ans == 27)
	{
		return;
	}	

	time_t begin = time(NULL);

	while(i!=20)
	{
		time_t end = time(NULL);
		int sec = end - begin;
		sec -= ptime;
		struct format_time s = time_converter(sec,disp_win);
		if(s.min >= 2)
			break;
		srand(time(NULL));
		r = (rand() % (4 - 0 + 1)) + 0;
		resume:
		wclear(disp_win);
		box(disp_win, 0, 0);
		wattron(disp_win, A_BOLD);
		mvwprintw(disp_win, 1, 1, "SENTENCE GENERATED:           ");
		mvwprintw(disp_win, 2, 1, "%s", sen[r]);
		move(16, 26+(i));
		wrefresh(disp_win);
		play_sentences(r+1);
		c=0;
		chr2 = sen[r][c+1];
		sp = 1;
		while(chr2 != '$')
		{
			check:
			chr = sen[r][c];
			chr2 = sen[r][c+1];
			if(chr == 32)
			sp++;
			ans = getch();
			while(ans != chr)
			{
				int pause;
				if(ans == 27)
				{
					wattron(disp_win, A_REVERSE);
					time_t ps_time = time(NULL);
					mvwprintw(disp_win, 6, 28, "** PAUSE MENU **");
					mvwprintw(disp_win, 7, 24, "PRESS ANY KEY TO START",c);
					mvwprintw(disp_win, 8, 21, "PRESS ENTER/ESC TO END EXERCISE");
					wattroff(disp_win, A_REVERSE);
					play_menus(5);
					wrefresh(disp_win);
					pause = getch();
					if(pause == 10 || pause == 27)
						return;
					else
					{
						time_t pe_time = time(NULL);
						ptime = pe_time - ps_time;
						goto resume;
					}
				}
				else if(ans == 10)
				{
					play_subsentence(r+1,sp);
					ans = getch();	
				} 
				else if(ans == 9)
				{
					play_sentences(r+1);
					ans = getch();
				}
				else if(ans == chr+32)
					break;
				else
				{
					wclear(disp_win);
					box(disp_win, 0, 0);
					mvwprintw(disp_win, 1, 1, "SENTENCE GENERATED:     TRY AGAIN");
					mvwprintw(disp_win, 2, 1, "%s", sen[r]);					
					play_menus(6);
					wrefresh(disp_win);
					wclear(input_win);
					box(input_win, 0, 0);
					wrefresh(input_win);
					move(16, 26+(1));
					refresh();
					c=0;	
					sp=1;
					err++;	
					goto check;
				}
				
			}
			mvwprintw(input_win, j, c+1,"%c",ans);
			wrefresh(input_win);
			c++;
		}
		wclear(input_win);
		box(input_win, 0, 0);
		wrefresh(input_win);
		move(16, 26+(i));
		refresh();
		i++;
	}

	time_t end = time(NULL);
	wclear(disp_win);
	box(disp_win, 0, 0);
	wattron(disp_win, A_REVERSE);
	mvwprintw(disp_win, 1, 1, "EXERCISE COMPLETED...",chr);
	wattron(disp_win, A_BOLD);
	mvwprintw(disp_win, 2, 1, "FINAL SCORE: CORRECT-%d WRONG-%d",(i-err),err);
	int sec = end - begin;
	sec -= ptime;
	struct format_time s = time_converter(sec,disp_win);
	mvwprintw(disp_win, 3, 1, "Time elpased is %dH:%dM:%dS",s.hour,s.min,s.sec);
	switch(err)
	{
		case 0:
			mvwprintw(disp_win, 4, 1, "Grade: Excellent...");
		        break;
		case 1 ... 2:
		        mvwprintw(disp_win, 4, 1, "Grade: Very Good...");
		        break;
		case 3 ... 4:
		        mvwprintw(disp_win, 4, 1, "Grade: Good...");
		        break;
		case 5 ... 50:
		        mvwprintw(disp_win, 4, 1, "Grade: Poor... Need Improvement...");
		        break;
	}
	switch(i)
	{
		case 5 ... 20:
			mvwprintw(disp_win, 5, 1, "Speed: Excellent...");
		        break;
		case 3 ... 4:
		        mvwprintw(disp_win, 5, 1, "Speed: Very Good...");
		        break;
		case 2:
		        mvwprintw(disp_win, 5, 1, "Speed: Good...");
		        break;
		case 0 ... 1:
		        mvwprintw(disp_win, 5, 1, "Speed: Poor... Need Improvement...");
		        break;
	}
	cal_app(err);
	wrefresh(disp_win);
	getch();
	clear;
}
	


void print_menu(WINDOW *menu_win, int highlight)
{
	int x, y, i;	

	x = 2;
	y = 3;
	box(menu_win, 0, 0);
	mvwprintw(menu_win,1,10,"** MENU **");
	for(i = 0; i < n_choices; ++i)
	{	if(highlight == i + 1) /* High light the present choice */
		{	wattron(menu_win, A_REVERSE); 
			mvwprintw(menu_win, y, x, "%s", choices[i]);
			wattroff(menu_win, A_REVERSE);
		}
		else
			mvwprintw(menu_win, y, x, "%s", choices[i]);
		++y;
	}
	wrefresh(menu_win);
}

struct format_time time_converter(int second,WINDOW *disp_win) 
{

//        box(disp_win, 0, 0);
	struct format_time s;
        s.hour = (second / 3600);
        s.min = (second - (3600 * s.hour)) / 60;
        s.sec = (second - (3600 * s.hour) - (s.min * 60));

	return s;

}

