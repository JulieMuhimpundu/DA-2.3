#include "DiceHand.h"

DiceHand::DiceHand(int size) : DiceHand(new Die(), size) {}

DiceHand::DiceHand(Die* prototype, int size) {
    this->size = size;
    dice = new Die * [size];
    for (int i = 0; i < size; i++) {
        dice[i] = new Die(prototype->getSides());
    }
    delete prototype;
}

DiceHand::~DiceHand() {
    for (int i = 0; i < size; i++) {
        delete dice[i];
    }
    delete[] dice;
}

void DiceHand::rollAll() {
    for (int i = 0; i < size; i++) {
        dice[i]->roll();
    }
}

Die* DiceHand::getDie(int index) {
    return dice[index];
}

int DiceHand::getSize() const {
    return size;
}
