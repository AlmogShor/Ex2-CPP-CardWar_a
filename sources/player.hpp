//
// Created by shora on 22/03/2023.
//

//#ifndef EX2_CPP_CARDWAR_A_PLAYER_H
//#define EX2_CPP_CARDWAR_A_PLAYER_H

#pragma once

#include <string>


using namespace std;

namespace ariel {
    class Player {
    private:
        string name;
        int stackSize;
        int cardsTaken;
        bool inGame;
    public:
        //empty Ctor
        Player() {
            name = "";
            stackSize = 0;
            cardsTaken = 0;
            inGame = false;
        };

        //Ctor
        Player(string name) {
            this->name = name;
            stackSize = 0;
            cardsTaken = 0;
            inGame = false;
        };

        //Copy Ctor
        Player(const Player &other) {
            name = other.name;
            stackSize = other.stackSize;
            cardsTaken = other.cardsTaken;
            inGame = other.inGame;
        };

        //getters
        //getName returns the name of the player
        string getName() const { return name; };

        //getStackSize returns the size of the stack
        int stacksize() const { return stackSize; };

        //getCardsTaken returns the number of cards taken by the player
        int cardesTaken() const { return cardsTaken; };

        //getInGame returns true if the player is still in the game
        bool getInGame() const { return inGame; };

        //setters
        //setStackSize sets the size of the stack
        void setStackSize(int stackSize) { this->stackSize = stackSize; };

        //setCardsTaken sets the number of cards taken by the player
        void setCardsTaken(int cardsTaken) { this->cardsTaken = cardsTaken; };

        //setInGame sets the player in the game
        void setInGame(bool inGame) { this->inGame = inGame; };

        //winRate returns the win rate of the player
        double getWinRate() const { return (double)cardsTaken / (double)stackSize; };

    };
};

//#endif //EX2_CPP_CARDWAR_A_PLAYER_H
