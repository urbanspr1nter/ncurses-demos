#include <ncurses.h>
#include <string.h>

int main() {
	initscr();
	
	int x, y;
	getmaxyx(stdscr, y, x);

	printw("%d, %d. This is the same as the screen size %d, %d", y, x, LINES, COLS);
	refresh();

	char* message = "Catppuccin is an awesome theme.";
	mvprintw((LINES / 2) + 1, (COLS - strlen(message))/2, "%s", message);	
	refresh();

	getch();
	endwin();
	return 0;
}
