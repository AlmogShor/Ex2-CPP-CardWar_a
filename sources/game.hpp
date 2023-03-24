//
// Created by shora on 22/03/2023.
//

#ifndef EX2_CPP_CARDWAR_A_GAME_H
#define EX2_CPP_CARDWAR_A_GAME_H
#include <vector>
#include <string>
#include <random>
#include <chrono>
#include <sstream>
#include <iomanip>
#include <iostream>
#include "player.hpp"

namespace ariel{
    class Game {
    private:
        std::vector<Card> deck;
        Player player1;
        Player player2;
        std::vector<std::string> gameLog;
        std::mt19937 rng;
        int drawCount;
    public:
        Game(Player player1, Player player2);
        void playTurn();
        void playAll();
        void printLastTurn() const;
        void printWiner() const;
        void printLog() const;
        void printStats() const;
    private:
        void createDeck();
        void shuffleDeck();
        void dealCards();
        std::vector<Card> drawCards();
        void addCardsToPlayer(Player& player, std::vector<Card> cards);
        void addCardsToLog(std::string log);
    };
}

#endif //EX2_CPP_CARDWAR_A_GAME_H
