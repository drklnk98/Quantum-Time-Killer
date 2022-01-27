#include <iostream>
#include <string>
#include "./conn4.hpp"

using std::string;
using std::cout;
using std::cin;

int main(){
    std::string pickGame, playAgain;

	std::cout << "1: Connect 4" << std::endl << "2: Chess" 
		<< std::endl << "3: Hangman" << std::endl << std::endl;
    std::cout << "What would you like to play?: ";
	std::cin >> pickGame;

	if (pickGame == "1"){Conn4();}
/*	else if () { PlayChess(); }
	else if (){PlayHangman();}*/

	std::cout << "Would you like to play another game? (Y/N): ";
	std::cin >> playAgain;

	if (playAgain == "Y" || playAgain == "y") { main(); }
	else if (playAgain == "N" || playAgain == "n") { exit(0); }
	else { cout << "Think you're funny, huh?" << std::endl; exit(0); }

}