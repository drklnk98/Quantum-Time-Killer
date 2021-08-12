#pragma once

#include <iostream>

class Player{
public:
    bool turn = false;
    bool hasWon = false;

    std::string playerName;
    char playerTeam;

    void NextTurn(Player nextPlayer){};
};