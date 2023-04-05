#pragma once
#include <string>
#include "card.hpp"

namespace ariel {
    class Player {
        std::string name;
    public:
        Player(std::string name); // constructor
        int stacksize();
        int cardesTaken();
    };
}
