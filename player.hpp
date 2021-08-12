#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>

class Player{
public:
    bool turn = false;
    bool hasWon = false;

    std::string playerName;
    char playerTeam;

    void NextTurn(Player nextPlayer){};
};

#endif