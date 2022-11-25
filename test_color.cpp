#include <iostream>
#include <Windows.h>
#include <unistd.h> //пауза
#include "Grid.h"
using namespace std;

void SetColor(int text, int bg){
    HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hStdOut, (WORD)((bg << 4) | text));
}
HANDLE  hConsole;
int color;

struct Screen {
    int width;
    int heigh;
    int *screen;

    Screen() {
        width = 120;
        heigh = 30;
        screen = new int[width * heigh + 1];
        screen[width * heigh] = 0;
    }

    void update(Grid g) const {

        for (int w = 0; w < width; w++) {
            for (int h = 0; h < heigh; h++) {
                std::cout << 'A';
                int pixel = 0;
                if (w < g.x_size && h < g.y_size) {
                    pixel = g.field[h * g.x_size + w].state;
                };
                screen[w + h * width] = pixel;
            };
        };
    };

    friend std::ostream &operator<<(std::ostream &out, const Screen &s) {
        int color = 0;
        for (int i = 0; i < s.width * s.heigh; i++) {
            if (s.screen[i] == 0) {
                out << ' ';
            }
            if (s.screen[i] == 1) {
                SetConsoleTextAttribute(hConsole, color);
                color = 15;
                out << color << ' ';

            }
        };
        return out;

    };
};

    int main() // начало главной функции main()
    {
        hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
        Grid g("pulsar.txt");
        Screen s;
        int steps = 10;
        for (int i = 0; i < steps; ++i) {
            s.update(g);

            std::cout << s;
            usleep(500000);
            g.step();
        };

        return 0;
    };