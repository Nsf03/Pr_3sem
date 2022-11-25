#include <iostream>
#include <string>
#include "Grid.h"

//#include "export.h"


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
