#include <iostream>
#include <string>
#include "./conn4.cpp"

using std::string;
using std::cout, std::cin;

int main(){
    std::string pickGame;

	std::cout << "1: Conncet 4" << std::endl << "2: Chess" << std::endl << "3: Hangman" << std::endl << std::endl;
    std::cout << "What would you like to play?: ";
	std::cin >> pickGame;

/*
	if (pickGame == 1){PlayConn4();}
	else if (){PlayChess();}
	else if (){PlayHangman();}

	std::cout << "Would you like to play another game? (Y/N): ";
	std::cin >> playAgain?;


}