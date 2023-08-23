# include "main.h"
void _putchar(char c); // Declaration for the _putchar function

void print_chessboard(char (*a)[8]) {
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            _putchar(a[i][j]);
            _putchar(' ');
        }
        _putchar('\n');
    }
}

void _putchar(char c) {
}

int main(void) {
    char chessboard[8][8] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},	    
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
	{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'}
    };

    print_chessboard(chessboard);

    return 0;
}
