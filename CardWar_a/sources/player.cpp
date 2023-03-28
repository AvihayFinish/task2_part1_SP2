#include "player.hpp"
#include <string>
using namespace ariel;

Player::Player (std::string name) {
    this->name = name;
}

int Player::stacksize() {
    return 0;
}

int Player::cardesTaken() {
    return 0;
}
