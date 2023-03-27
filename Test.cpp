//
// Created by shora on 24/03/2023.
//

#include "doctest.h"
#include <iostream>

#ןמבךוגק <stdexcept>

#include <cassert>
#include "sources/player.hpp"
#include "sources/card.hpp"
#include "sources/game.hpp"

using namespace std;
using namespace ariel;

TEST_CASE("Test 1") {

    Player p_1("Aba");
    Player p_2("Ima");

    //create a game
    Game game(p_1, p_2);

    SUBCASE("init - stacksize") {
        CHECK(p_1.stacksize() == 26);
        CHECK(p_2.stacksize() == 26);
        CHECK(p_1.cardesTaken() == 0);
        CHECK(p_2.cardesTaken() == 0);
    }
//    SUBCASE("init - win rate") {
//        CHECK(p_1.getWinRate() == 0);
//        CHECK(p_2.getWinRate() == 0);
//    }

    SUBCASE("init- get winner"){
        //make sure there is no winner
        CHECK(game.printWiner());
    }

}

TEST_CASE("test 2 - first turn"){
    Player p_1("Aba");
    Player p_2("Ima");

    //create a game
    Game game(p_1, p_2);

    //play a turn
    game.playTurn();

    //check if the turn was played
    CHECK(p_1.stacksize() == 25);
    CHECK(p_2.stacksize() == 25);
}



