#include <ncurses.h>

int main(void) {
	WINDOW* first;
	WINDOW* second;
	WINDOW* active;

	initscr();
	start_color();

	/* configure colors */
	init_pair(1, COLOR_WHITE, COLOR_BLUE);
	init_pair(2, COLOR_WHITE, COLOR_RED);
	
	first = newwin(0, 0, 0, 0);
	if (first == NULL) {
		endwin();
		puts("Unable to create a window");
		return 1;
	}
	second = newwin(0, 0, 0, 0);
	if (second == NULL) {
		endwin();
		puts("Unable to create a window");
		return 1;
	}	

	wbkgd(first, COLOR_PAIR(1));
	waddstr(first, "This is the standard screen\n");
	waddstr(first, "Press Enter");

	wbkgd(second, COLOR_PAIR(2));
	waddstr(second, "This is the second window\n");
	waddstr(second, "Press Enter");

	active = first;
	wrefresh(active);
	touchwin(active);
	refresh();

	do {
		wrefresh(active);
		touchwin(active);
		if (active == first) {
			active = second;
		} else {
			active = first;
		}
		refresh();
	} while (getch() != 'q');

	endwin();

	return 0;
}
