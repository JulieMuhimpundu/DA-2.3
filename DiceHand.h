#pragma once
#ifndef DICEHAND_H
#define DICEHAND_H

#include "Die.h"

class DiceHand {
private:
    Die** dice;
    int size;

public:
    DiceHand(int size = 5);
    DiceHand(Die* prototype, int size);
    ~DiceHand();

    void rollAll();
    Die* getDie(int index);
    int getSize() const;
};

#endif
