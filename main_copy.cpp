#include <iostream>
#include "Grid.h"
#include <windows.h>

//ЭТО КОПИЯ MAIN НА ВСЯКИЙ СЛУЧАЙ


class Life {
private:
public:
    static void create(Grid& g, int steps) {
        for (int step = 0; step < steps; step++) {
            std::cout << g;
            g.step();
        }
    }
};

int main() {
    Grid g("example.txt");
    Life::create(g, 100);
    return 0;
}
