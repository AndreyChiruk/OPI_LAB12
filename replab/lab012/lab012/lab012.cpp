#include <iostream>
#include <conio.h>
#pragma warning(disable : 4996)

using namespace std;

int main() {
    char ch;
    bool gameover = false;
    int bpos = 1000;
    int ppos = 3000;
    int score = 0;
    while (!gameover) {
        system("cls");
        for (int i = 0; i < bpos; i++) {
            cout << " ";
        }
        cout << "o";
        for (int i = 0; i < 20; i++) {
            if (i < ppos || i > ppos + 1) {
                cout << "";
            }
            else {
                cout << "|";
            }
        }
        cout << "\nScore: " << score << endl;

        // коллизия
        if (bpos == ppos || bpos == ppos + 1) {
            gameover = true;
            cout << "Game Over\n";
            break;
        }

        // движение(вверх/вниз)
        if (kbhit()) {
            ch = getch();
            if (ch == 'w') {
                bpos -= 1;
            }
            else if (ch == 's') {
                bpos += 1;
            }
        }
        else {
            bpos += 1;
        }

        // mpip
        ppos -= 1;

        if (ppos == 0) {
            ppos = 5;
            score += 1;
        }

        // delay
        for (int i = 0; i < 10000000; i++) {

        }

    }


    return 0;

	}

