#pragma once
#ifndef DICECONSOLE_H
#define DICECONSOLE_H

#include "Die.h"

class DiceConsole {
public:
    void displayDie(Die* die);
    void displayDice(Die** dice, int size);
    int getUserChoice(const std::string& menu);
};

#endif
