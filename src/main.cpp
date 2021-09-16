#include "../header/Particule.hpp"

int main(int argc, char const *argv[])
{

    Particule p = Particule(10, PVector(0,0,0));
    for (int i = 0; i < 10; i++) {
        // Update de la particule
        p.updateFrame();
        p.showPosition();
    }

    return 0;
}
