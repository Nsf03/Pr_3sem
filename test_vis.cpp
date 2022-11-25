#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;

int main() {
/*
    float A = 0, B = 0;
    float i, j;
    int k;
    float z[1760];
    char b[1760];
    printf("\x1b[2J");
    for (int l = 0; l < 100; ++l) {
        memset(b,32,1760);
        memset(z,0,7040);
        for(j=0; j < 6.28; j += 0.07) {
            for(i=0; i < 6.28; i += 0.02) {
                float c = sin(i);
                float d = cos(j);
                float e = sin(A);
                float f = sin(j);
                float g = cos(A);
                float h = d + 2;
                float D = 1 / (c * h * e + f * g + 5);
                float l = cos(i);
                float m = cos(B);
                float n = sin(B);
                float t = c * h * g - f * e;
                int x = 40 + 30 * D * (l * h * m - t * n);
                int y= 12 + 15 * D * (l * h * n + t * m);
                int o = x + 80 * y;
                int N = 8 * ((f * e - c * d * g) * m - c * d * e - f * g - l * d * n);
                if(22 > y && y > 0 && x > 0 && 80 > x && D > z[o]) {
                    z[o] = D;
                    b[o] = ".,-~:;=!*#$@"[N > 0 ? N : 0]; //works much better with ".,-~:;=!*#$@" or "JackEatDonut"
                }
            }
        }
        //printf("\x1b[H");
        for(k = 0; k < 1761; k++) {
            putchar(k % 80 ? b[k] : 10);
            A += 0.00004;
            B += 0.00002;
        }
        usleep(0);
    }*/

    /*HANDLE  hConsole;
    int k;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    for(k = 1; k < 255; k++)
    {
        // pick the colorattribute k you want
        SetConsoleTextAttribute(hConsole, k);
        k = 48;
        cout << k << " I want to be nice today!" << endl;
    }
    cin.get();*/
    /*int width = 120;
    int heigh = 30;
    // инициализация массива символов выводимых на экран
    char* screen = new char[width * heigh + 1]; // +1 - это дополнительный нулевой символ,
    screen[width * heigh] = '\0';               // который существует для остановки вывода
    // символов массива
    float aspect = (float) width / heigh;
    float pixelAspect = 11.0f / 24.0f;

    int moving = 20000; // переменная отвечающая за продолжительность перемещения нашего шара
    for (int t = 0; t < moving; t++)
    {
        for (int i = 0; i < width; i++)
        {
            for (int j = 0; j < heigh; j++)
            {
                float x = (float)i / width * 2.0f - 1.0f;
                float y = (float)j / heigh * 2.0f - 1.0f;
                x *= aspect * pixelAspect; // домножим так же на соотношение сторон символа

                x += sin(t * 0.001);

                char pixel = ' ';
                if ((x * x + y * y) < 0.5)
                    pixel = '@';
                screen[i + j * width] = pixel;
            }
        }
        cout << screen;
    }
    return 0;*/

    return 0;
};