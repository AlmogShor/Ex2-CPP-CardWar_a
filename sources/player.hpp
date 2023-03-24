//
// Created by shora on 22/03/2023.
//

#ifndef EX2_CPP_CARDWAR_A_PLAYER_H
#define EX2_CPP_CARDWAR_A_PLAYER_H
#include <string>
#include <vector>
#include "card.hpp"

using namespace std;

namespace ariel{
    class Player {
    private:
        string name;
        vector<Card> deck;
        vector<Card> wonCards;
    public:
        Player(string name);
        void addCard(Card card);
        Card drawCard();
        void addWonCards(std::vector<Card> cards);
        int stacksize() const;
        int cardesTaken() const;
        double getWinRate() const;
        // other stats functions can be added here

    };
}

#endif //EX2_CPP_CARDWAR_A_PLAYER_H
