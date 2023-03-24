//
// Created by shora on 22/03/2023.
//

#ifndef EX2_CPP_CARDWAR_A_CARD_H
#define EX2_CPP_CARDWAR_A_CARD_H

#include <string>

namespace ariel{
    enum class Rank {Two = 2, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Ace};
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
