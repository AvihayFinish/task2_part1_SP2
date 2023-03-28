#pragma once
#include "player.hpp"

namespace ariel {
    class Game {
        Player& pO;
        Player& pT;
    public:
        Game(Player& pl1, Player& pl2); // constructor
        void playTurn();
        void printLastTurn();
        void playAll();
        void printWiner();
        void printLog();
        void printStats();
    };
}