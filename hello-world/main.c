#include <ncurses.h>

int main(void)
{
    initscr();
    addstr("Hello, world!");
    refresh();
    getch();
    endwin();
    return 0;
}
