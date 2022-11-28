#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>
#include "Life.h"
#include <unistd.h>

//#include "export.h"


//е больше 1800*850
/*float cell_size_counter(unsigned int x, unsigned int y, int x_size, int y_size){
    auto x_f = float(x);
    auto y_f = float(y);
    auto x_size_f = float(x_size);
    auto y_size_f = float(y_size);
    return (x_f*y_f/(x_size_f*y_size_f));
};

bool is_cell_size_ok(unsigned int x, unsigned int y, int x_size, int y_size, float cell_max, unsigned int x_max, unsigned int y_max){
    if (x >= x_max-x_size){return false;};
    if (y >= y_max-y_size){return false;};
    auto x_f = float(x);
    auto y_f = float(y);
    auto x_size_f = float(x_size);
    auto y_size_f = float(y_size);
    if(((x_f+x_size_f)*(y_f+y_size_f))/(x_size_f*y_size_f) >= cell_max){return false;}
    return (true);
};*/

int main() {
    Grid_2c g(50, 1000);
    unsigned int steps = 100000;
    unsigned int x = g.x_size;
    unsigned int y = g.y_size;
    float cell_size_max = 20;
    unsigned int x_max = 1800;
    unsigned int y_max = 850;
    float cell_size = 1;



    while (( x+g.x_size <= x_max) && (y+g.y_size<=y_max) && ((cell_size+1) <= cell_size_max))  {
           x += g.x_size;
        y += g.y_size;
        cell_size ++;

    };


    if (x > x_max || y > y_max){
        if (float(x_max)/float(g.x_size) > float(y_max)/float(g.y_size)){
            cell_size = float(y_max)/float(g.y_size);
            x = int(cell_size*g.x_size)+1;
            y = y_max;
        }
        else{
            cell_size = float(x_max)/float(g.x_size);
            x = int(cell_size*g.y_size)+1;
            x = x_max;
        }
    };



    sf::RenderWindow window(sf::VideoMode(x, y), "SFML Application");

    for (int i = 0; i < g.x_size*g.y_size; ++i) {

    }

    sf::RectangleShape cell(sf::Vector2f(cell_size, cell_size));

    bool flag;

    while (window.isOpen())
    {
        sf::Event event;

        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        cell.setPosition(20, 20);
        cell.setSize(sf::Vector2f(cell_size, cell_size));
        usleep(10000);
        window.clear();
        window.draw(cell);
        window.display();
    }


    return 0;
}
