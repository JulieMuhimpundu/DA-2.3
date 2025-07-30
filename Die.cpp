#include "Die.h"
#include <cstdlib>
#include <ctime>

Die::Die(int sides) : numberOfSides(sides), faceValue(1) {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
}

int Die::roll() {
    faceValue = (std::rand() % numberOfSides) + 1;
    return faceValue;
}

int Die::getFaceValue() const {
    return faceValue;
}

int Die::getSides() const {
    return numberOfSides;
}
