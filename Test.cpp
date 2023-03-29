//
// Created by shora on 24/03/2023.
//

#include "doctest.h"
#include <iostream>

#include <stdexcept>

#include <cassert>
#include "sources/player.hpp"
#include "sources/card.hpp"
#include "sources/game.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Test 0 - card and player ctor") {

    SUBCASE("card - ctor") {
        Card c(1, "S");
        CHECK(c.getRank() == 1);
        CHECK(c.getSuit() == "S");
    }
    SUBCASE("player - ctor") {
        Player p("Aba");
        CHECK(p.getName() == "Aba");
        CHECK(p.stacksize() == 0);
        CHECK(p.cardesTaken() == 0);
        CHECK(p.getInGame() == false);
    }
}

TEST_CASE("Test 1 - init") {

    Player p_1("Aba");
    Player p_2("Ima");

    //create a game
    Game game(p_1, p_2);

    SUBCASE("init- no winner") {
        //based on https://stackoverflow.com/questions/4191089/how-to-unit-test-function-writing-to-stdout-stdcout
        std::ostringstream oss;
        std::streambuf *p_cout_streambuf = std::cout.rdbuf();
        std::cout.rdbuf(oss.rdbuf());

        game.printWiner();
        std::cout.rdbuf(p_cout_streambuf); // restore
        CHECK(oss.str() == "No winner yet\n"); //TRUE Only by my iplementation for now. should be changed
    }
    SUBCASE("init - stacksize") {
        CHECK(p_1.stacksize() == 26); //TRUE
        CHECK(p_2.stacksize() == 26); //TRUE
        CHECK(p_1.cardesTaken() == 0); //TRUE
        CHECK(p_2.cardesTaken() == 0); //TRUE
    }
    SUBCASE("init - win rate") {
        CHECK(p_1.getWinRate() != 0); //TRUE
        CHECK(p_2.getWinRate() != 0); //TRUE
    }
    SUBCASE("init - get winner") {
        //make sure there is no winner
        CHECK_NOTHROW(game.printWiner()); //TRUE
    }

    SUBCASE("init - Exceptions") {
        //Check throwing exceptions for invalid inputs
        //Check card ctor
        // D for Diamonds,C for Clubs, H for Hearts, S for Spades
        CHECK_THROWS(Card(0, "D")); //TRUE
        CHECK_THROWS(Card(14, "D")); //TRUE
        CHECK_NOTHROW(Card(1, "D")); //TRUE
        CHECK_THROWS(Card(1, "B")); //TRUE //Cuz there is no B in Suits
        Card c_1(1, "D"); //TRUE
        Card c_2(c_1); //TRUE
        Card c_3(1, "D"); //TRUE
        Card c_4(2, "D"); //TRUE
        CHECK(c_1 == c_2); //TRUE
        CHECK(c_2 == c_3); //TRUE
        assert(c_1 != c_4); //TRUE

        //Check player ctor
        CHECK_THROWS(Player("")); //TRUE
        CHECK_THROWS(Player(" ")); //TRUE
        Player p("tst1");
//        CHECK_THROWS(Player p(p)); //TRUE
        CHECK_THROWS(Player("tst1")); //TRUE

        //Check game ctor
        CHECK_THROWS(Game(p_1, p_1)); //TRUE








    }
}

TEST_CASE("test 2 - first turn") {
    Player p_1("Aba");
    Player p_2("Ima");

    //create a game
    CHECK_NOTHROW(Game game(p_1, p_2));

    Game game(p_1, p_2);

    //play a turn
    game.playTurn();



    //check if the turn was played
    CHECK(game.getTurnNumber() == 1);
    CHECK_NOTHROW(game.printLastTurn());
    CHECK(p_1.stacksize() == 25);
    CHECK(p_2.stacksize() == 25);

}


