#include <stdio.h>
#include <ncurses.h>

#define WIDTH 30
#define HEIGHT 10 

int startx = 0;
int starty = 0;

char *choices[] = { 
			"1. Alphabet Exercise",
			"2. Word Exercise",
			"3. Sentence Exercisess",
			"4. Exit",
		  };
int n_choices = sizeof(choices) / sizeof(char *);
void print_menu(WINDOW *menu_win, int highlight);

int main()
{	WINDOW *menu_win;
	int highlight = 1;
	int choice = 0;
	int c;

	initscr();
	clear();
	noecho();
	cbreak();	
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
	mvwprintw(ins_win,1,26,"** INSTRUCTION **");
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
	mvprintw(0, 0, "Use arrow keys to go up and down, Press enter to select a choice");
	refresh();
	print_menu(menu_win, highlight);
	while(1)
	{	c = wgetch(menu_win);
		switch(c)
		{	case KEY_UP:
				if(highlight == 1)
					highlight = n_choices;
				else
					--highlight;
				break;
			case KEY_DOWN:
				if(highlight == n_choices)
					highlight = 1;
				else 
					++highlight;
				break;
			case 10:
				choice = highlight;
				break;
			default:
				refresh();
				break;
		}
		print_menu(menu_win, highlight);
		if(choice != 0)	/* User did a choice come out of the infinite loop */
			break;
	}	
	//mvprintw(23, 0, "You chose choice %d with choice string %s\n", choice, choices[choice - 1]);
	clrtoeol();
	refresh();
	endwin();
	return 0;
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

