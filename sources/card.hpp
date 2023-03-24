//
// Created by shora on 22/03/2023.
//

#ifndef EX2_CPP_CARDWAR_A_CARD_H
#define EX2_CPP_CARDWAR_A_CARD_H

#include <string>

namespace ariel{
    enum class Rank {Two = 2, Three = 3, Four = 4, Five = 5, Six = 6, Seven = 7, Eight = 8, Nine = 9, Ten = 10, Jack = 11, Queen = 13, King, Ace = 14};
    enum class Suit {Diamonds, Clubs, Hearts, Spades};

    class Card {
    private:
        Rank rank;
        Suit suit;
    public:
        Card(Rank rank, Suit suit);
        std::string getRank() const;
        std::string getSuit() const;
        int getValue() const;
        bool operator>(const Card& other) const;
        bool operator==(const Card& other) const;
    };
}

#endif //EX2_CPP_CARDWAR_A_CARD_H
