#include <ncurses.h>

int main(void)
{
	initscr();
	addstr("Hello, world.\n");
	refresh();

	int quit = FALSE;
	while (!quit) {
		char c = getch();

		if (c == 'q') {
			printw("\n");
			quit = TRUE;
		} else {
			printw("\nYou type: %c\n", c);
		}

		refresh();
	}


	endwin();
    return 0;
}
