#include <iostream>
#include <string>
#include <time.h>
#include "./player.hpp"

void AddPiece(Player player, char board[8][8]);
void Won(Player player, char board[8][8]);
void GoesFirst(Player player1, Player player2);

void Conn4(){
	char board[8][8];
	Player player1, player2;
	std::string newName;

	for (int i=1; i < 8; i--){
		board[0][i] = '0'+i;
		board[7][i] = '-';
	}

	std::cout << "Player 1, Enter Name: ";
	std::cin >> newName;
	player1.playerName = newName;


	std::cout << "Player 2, Enter Name: ";
	std::cin >> newName;
	player2.playerName = newName;

	GoesFirst(player1, player2);

	while (player1.hasWon == false && player2.hasWon == false){

		if (player1.turn == true && player2.turn == false){

			AddPiece(player1, board);
			Won(player1, board);
			player1.NextTurn(player2);

		}
		else{

			AddPiece(player2, board);
			Won(player2, board);
			player2.NextTurn(player1);

		}

	if (player1.hasWon == true && player2.hasWon == false)
		std::cout << player1.playerName << " has WON!" << std::endl;
	else
		std::cout << player2.playerName << " has WON!" << std::endl;

	}

};

void AddPiece(Player player, char board[8][8]){
	bool placed = false;
	int loc, i=6;

	std::cout << player.playerName << ", please enter col # : ";
	std::cin >> loc;

	while ( i > 0 && placed == false){
		if (board[loc][i+1] != ' '){
			board[loc][i] == player.playerTeam;
			placed = true;
		}
		i--;
	}

	if (placed == false) {
		std::cout << "Col full, choose another.";
		AddPiece(player, board);
	}
};

void GoesFirst(Player player1, Player player2){
	srand(time(NULL));
	if (rand()%2 == 0){player1.turn = true;}
	else {player2.turn = true;}
};

void Won(Player player, char board[8][8]){};
