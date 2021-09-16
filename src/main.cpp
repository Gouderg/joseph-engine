#include "../header/PVector.hpp"

#include <iostream>

int main(int argc, char const *argv[])
{
    PVector u = PVector(2, -3, -1);
    PVector v = PVector(1, 4, -2);
    PVector result = PVector::produitVectoriel(u,v);
    
    std::cout << "x:" << result.getX() << ", y: " << result.getY() << ", z: " << result.getZ() << std::endl;

    return 0;
}
