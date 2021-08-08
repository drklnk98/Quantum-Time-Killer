#pragma once

#include <iostream>

class Player{
public:
    void SetName(std::string newName) {playerName = newName;}
    void SetTeam(char newTeam) {playerTeam = newTeam;}
    
    std::string GetName() {std::cout << playerName;}
    char GetTeam() {std::cout << playerTeam;}

private:
    std::string playerName;
    char playerTeam;
};