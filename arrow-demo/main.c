#include <ncurses.h>
#include <stdbool.h>

int main(void) {
    initscr();

    printw("Use the arrow keys to increment and decrement the counter. Type x to quit.");
    refresh();
    keypad(stdscr, TRUE);

    int counter = 0;
    bool flag = TRUE;
    while (flag) {
        int c = getch();
        move(1,0);
        deleteln();
        switch (c) {
            case 'x':
                flag = FALSE;
                break;
            case KEY_UP:
            case KEY_RIGHT:
                counter++;
                printw("%d", counter);
                refresh();
                break;
            case KEY_LEFT:
            case KEY_DOWN:
                counter--;
                printw("%d", counter);
                refresh();
                break;
            default:
                printw("This isn't an arrow key.");
                refresh();
                break;
        }
    }

    endwin();
    return 0;
}