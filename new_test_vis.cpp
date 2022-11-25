#include <iostream> // инициализация библиотеки
#include "Grid.h"
#include <unistd.h> //пауза
#include <windows.h> //красим

using namespace std;// инициализация пространства имён std

HANDLE  hConsole;
int color;


int main() // начало главной функции main()
{
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    Grid_1c g("pulsar.txt");
    int steps = 10000000;

    // инициализация переменных, которые являются неким разрешением консоли (количество символов, которое помещается в консоли)
    int width = 120;
    int heigh = 30;
    // инициализация массива символов выводимых на экран
    char* screen = new char[width * heigh + 1]; // +1 - это дополнительный нулевой символ,
    screen[width * heigh] = '\0';               // который существует для остановки вывода
    // символов массива
    for (int step = 0; step < steps; ++step) {
        for (int w = 0; w < width; w++) {
            for (int h = 0; h < heigh; h++) {
                char pixel = ' ';
                if (w < g.x_size && h< g.y_size){
                    if(g.field[h*g.x_size + w].state == 1){pixel='@';};
                    if(g.field[h*g.x_size + w].state == 2){pixel='%';};
                    if(g.field[h*g.x_size + w].state == 3){pixel='W';};
                    if(g.field[h*g.x_size + w].state == 4){pixel='O';};
                };
                screen[w + h*width] = pixel;
            };
            };
        g.step();
        /*for (int i = 0; i < width*heigh; ++i) {
            std::cout << screen[i];
        }*/
        cout << screen; // выводим на экран массив screen
        usleep(700000);
        //cin.get(); // wait
        //
        };

};

