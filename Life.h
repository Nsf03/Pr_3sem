#include "Grid.h"

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