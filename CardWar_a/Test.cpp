#include "doctest.h"
#include "sources/player.hpp"
#include "sources/game.hpp"
#include "sources/card.hpp"
#include <stdexcept>
using namespace ariel;

TEST_CASE ("check that the player get a real name") {
    CHECK_THROWS(Player(""));
}

TEST_CASE("check that any player start the game with 26 cards and zero cardesTaken") {
    Player p1("Alice");
    Player p2("Bob");

    Game game(p1,p2);

    CHECK(p1.stacksize() == 26);
    CHECK(p2.stacksize() == 26);
    CHECK(p1.cardesTaken() == 0);
    CHECK(p2.cardesTaken() == 0);
}

TEST_CASE ("check that the printLastTurn function throw an exception if we dont play any turn") {
    Player p1("Alice");
    Player p2("Bob");

    Game game(p1,p2);
    
    CHECK_THROWS(game.printLastTurn());
}

TEST_CASE ("check that the playTurn function dont throw an exception") {
    Player p1("Alice");
    Player p2("Bob");

    Game game(p1,p2);

    CHECK_NOTHROW(game.playTurn());
}

TEST_CASE("check that after one turn the cardsTaken of Alice or Bob is not zero and them have the same amount of carde in the stack that kess then 26") {
    Player p1("Alice");
    Player p2("Bob");

    Game game(p1,p2);

    game.playTurn();
    CHECK((p1.cardesTaken() != 0 || p2.cardesTaken() != 0));
    CHECK(p1.stacksize() < 26);
    CHECK(p2.stacksize() < 26);
    CHECK(p1.stacksize() == p2.stacksize());
}

TEST_CASE("check that the function printWinet throw exception if we dont finish the game yet") {
    Player p1("Alice");
    Player p2("Bob");

    Game game(p1,p2);

    CHECK_THROWS(game.printWiner());
}

TEST_CASE ("check that the playAll function dont throw an exception, them have a zero crads and both of cardesTaken is 52") {
    Player p1("Alice");
    Player p2("Bob");

    Game game(p1,p2);

    CHECK_NOTHROW(game.playAll());
    game.playAll();
    CHECK(p1.stacksize() == 0);
    CHECK(p2.stacksize() == 0);
    CHECK((p1.cardesTaken() + p2.cardesTaken()) == 52);
}

TEST_CASE ("check that the printLastTurn function dont throw an exception") {
    Player p1("Alice");
    Player p2("Bob");

    Game game(p1,p2);

    CHECK_NOTHROW(game.printLastTurn());
}

TEST_CASE ("check that the printWiner function dont throw an exception") {
    Player p1("Alice");
    Player p2("Bob");

    Game game(p1,p2);

    CHECK_NOTHROW(game.printWiner());
}

TEST_CASE ("check that the printLog function dont throw an exception") {
    Player p1("Alice");
    Player p2("Bob");

    Game game(p1,p2);

    CHECK_NOTHROW(game.printLog());
}

TEST_CASE ("check that the printStats function dont throw an exception") {
    Player p1("Alice");
    Player p2("Bob");

    Game game(p1,p2);

    CHECK_NOTHROW(game.printStats());
}