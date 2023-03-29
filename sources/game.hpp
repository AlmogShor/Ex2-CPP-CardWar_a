//
// Created by shora on 22/03/2023.
//
//
//#ifndef EX2_CPP_CARDWAR_A_GAME_H
//#define EX2_CPP_CARDWAR_A_GAME_H

#pragma once

#include <vector>
#include <string>
#include <random>
#include <chrono>
#include <sstream>
#include <iomanip>
#include <iostream>
#include "player.hpp"

namespace ariel {
    class Game {
    private:
        Player player1;
        Player player2;

        int turnNumber;
    public:
        //Ctor
        Game(Player player1, Player player2) {
            this->player1 = player1;
            this->player2 = player2;
            turnNumber = 0;
        };

        //playTurn plays a turn of the game
        void playTurn(){
            cout << "playTurn" << endl << endl;
//            if (player1.){turnNumber++;}

        };

        //playAll plays all the turns of the game
        void playAll(){
            cout << "playAll" << endl << endl;

        };

        //printLastTurn prints the last turn of the game
        void printLastTurn(){
            cout << "printLastTurn" << endl << endl;

        };

        //printWiner prints the winner of the game
        void printWiner(){

        if (player1.cardesTaken()== 26 && player1.stacksize()== 52){
            cout << player1.getName() << " wins" << endl;
        }

        else if (player2.

        cardesTaken()

        == 26 && player2.

        stacksize()

        == 52){
            cout << player2.getName() << " wins" << endl;
        }

        else{
            //throw logic_error("Game is not finished yet!");
            cout << "Game is not finished yet!" << endl;
        }
    }

//prints the whole log of the game
    void printLog() {
        cout << "printLog" << endl << endl;
    }


    void printStats() {
        cout << "Player " << player1.getName() << " status:" << endl;
        cout << "Cards won: " << player1.cardesTaken() << endl;
        cout << "Cards left: " << player1.stacksize() << endl;
        cout << "Win rate: " << player1.cardesTaken() / 26 * 100 << "%" << endl << endl;

        cout << "Player " << player2.getName() << " status:" << endl;
        cout << "Cards won: " << player2.cardesTaken() << endl;
        cout << "Cards left: " << player2.stacksize() << endl;
    }

    private:

    void createDeck();

    void shuffleDeck();

    void dealCards();

//        std::vector <Card> drawCards();

//        void addCardsToPlayer(Player &player, std::vector <Card> cards);
//
//        void addCardsToLog(std::string log);
};
}

//#endif //EX2_CPP_CARDWAR_A_GAME_H
