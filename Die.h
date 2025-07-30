#pragma once
#ifndef DIE_H
#define DIE_H

#include <random>

class Die {
private:
    const int numberOfSides;
    int faceValue;

public:
    Die(int sides = 6);  // default = 6
    int roll();
    int getFaceValue() const;
    int getSides() const;
};

#endif
