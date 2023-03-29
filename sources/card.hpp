//
// Created by shora on 22/03/2023.
//

//#ifndef EX2_CPP_CARDWAR_A_CARD_H
//#define EX2_CPP_CARDWAR_A_CARD_H

#pragma once

#include <string>


namespace ariel {
//    enum class Rank {Two = 2, Three = 3, Four = 4, Five = 5, Six = 6, Seven = 7, Eight = 8, Nine = 9, Ten = 10, Jack = 11, Queen = 13, King, Ace = 1};
    //enum class Suit {Diamonds, Clubs, Hearts, Spades};

    class Card {
    private:
        //rank = value of the card
        int rank;
        //suit = the suit of the card
        string suit;
    public:
        //Empty Ctor
        Card();

        //Ctor
        Card(int rank, string suit) {
            this->rank = rank;
            this->suit = suit;
        };

        //Copy Ctor
        Card(const Card &other) {
            this->rank = other.rank;
            this->suit = other.getSuit();
        };

        //getters
        //getRank returns the rank of the card
        int getRank() const { return rank; };

        //getSuit returns the suit of the card
        string getSuit() const { return suit; };

        //overloading operators
        bool operator<(const Card &other) const { return (rank < other.rank); }

        bool operator>(const Card &other) const { return (rank > other.rank); }

        bool operator==(const Card &other) const { return rank == other.rank; }

        bool operator!=(const Card &other) const { return (rank != other.rank); }

    };
};

//#endif //EX2_CPP_CARDWAR_A_CARD_H
