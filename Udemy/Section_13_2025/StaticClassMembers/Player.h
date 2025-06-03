// Static Class members
// #ifndef PLAYER_H
// #define PLAYER_H
#pragma once

#include <string>

class Player
{
private:
    // attributes
    static int num_players;

    std::string name;
    int health;
    int xp;

public:
    // methods
    // Ovaloaded constructors
    Player(std::string name_val = "None", int health_val = 0, int xp_val = 0);
    // Copy Constructor
    Player(const Player &source);
    // Destructor
    ~Player();

    static int get_num_players(); // class function
};

//#endif // PLAYER_H_
