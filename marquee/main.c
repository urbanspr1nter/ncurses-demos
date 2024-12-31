#include <ncurses.h>

int main(void)
{
	initscr();
	start_color();
	init_pair(1, COLOR_GREEN, COLOR_BLACK);

	attrset(COLOR_PAIR(1) | A_BOLD);
	attron(COLOR_PAIR(1) | A_BOLD);

	char* message = "FREE MONEY!!! 💰";
	char* t = message;

	int iterations = 0;
	while (iterations < 30) {
		if (*t == '\0') {
			beep();
			refresh();

			move(0, 0);
			addstr(message);
			refresh();
			napms(1000);
		
			move(0,0);
			addstr("                          ");
			refresh();
			napms(500);
		
			move(0, 0);
			addstr(message);
			refresh();
			napms(1000);
		
			move(0,0);
			addstr("                          ");
			refresh();
			napms(500);

			move(0,0);
			iterations++;
			t = message;
		}
		if (iterations % 2 == 0) {
			addch(' ');	
			t++;
		} else {
			addch(*t);
			t++;
		}
		refresh();
		napms(66);
	}

	endwin();

    return 0;
}
