#define _XOPEN_SOURCE_EXTENDED 1	

#include <ncurses.h>
#include <locale.h>

int main() {
	setlocale(LC_CTYPE, "en_US.UTF-8");

	wchar_t message[] = {
		'h', 'e', 'l', 'l', 'o',
		0x1f496,
	};

	initscr();
	addwstr(message);
	refresh();
	getch();

	endwin();
	
	return 0;
}
