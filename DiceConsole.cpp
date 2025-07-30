#include "DiceConsole.h"
#include <iostream>

void DiceConsole::displayDie(Die* die) {
    std::cout << "[ " << die->getFaceValue() << " ] ";
}

void DiceConsole::displayDice(Die** dice, int size) {
    std::cout << "Dice: ";
    for (int i = 0; i < size; ++i) {
        displayDie(dice[i]);
    }
    std::cout << "\n";
}

int DiceConsole::getUserChoice(const std::string& menu) {
    int choice;
    std::cout << menu;
    std::cin >> choice;
    return choice;
}
