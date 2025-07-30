
/*Dice: [ 5 ] [ 2 ]
1. Re-roll
2. Stay
Choice: 1
Dice: [ 5 ] [ 6 ]
1. Re-roll
2. Stay
Choice: 4
Dice: [ 4 ] [ 6 ]
1. Re-roll
2. Stay
Choice: 2
Final Dice:
Dice: [ 4 ] [ 6 ]
*/

#include <iostream>
#include "Die.h"
#include "DiceHand.h"
#include "DiceConsole.h"

void testDiceHandGame() {
    DiceHand hand(2);
    DiceConsole console;

    bool stay = false;
    while (!stay) {
        hand.rollAll();
        Die** diceArray = new Die * [hand.getSize()];
        for (int i = 0; i < hand.getSize(); i++) {
            diceArray[i] = hand.getDie(i);
        }

        console.displayDice(diceArray, hand.getSize());
        delete[] diceArray;

        int choice = console.getUserChoice("1. Re-roll\n2. Stay\nChoice: ");
        if (choice == 2) {
            std::cout << "Final Dice:\n";
            Die** finalArray = new Die * [hand.getSize()];
            for (int i = 0; i < hand.getSize(); i++) {
                finalArray[i] = hand.getDie(i);
            }
            console.displayDice(finalArray, hand.getSize());
            delete[] finalArray;
            stay = true;
        }
    }
}

int main() {
    testDiceHandGame();
    return 0;
}

