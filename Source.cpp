#include<iostream>
#include<random>
#include<ctime>
#include<Windows.h>

void drawBoard(char *gameBoard);

int main() {
	srand(time(NULL));
	char gameBoard[9] = {'1', '2', '3', 
						 '4', '5', '6', 
						 '7', '8', '9'};

	drawBoard(gameBoard);

	for (int i = 0; i < 9; i++) {
		gameBoard[i] = ' ';
	}

	bool whoGoesFirst = rand() % 2;

	std::cout << whoGoesFirst;

	if (whoGoesFirst == 0) {
		gameBoard[0] = 'X';
	}
	else {
		std::cout << "Make your move, type the number corrosponding to the grid slot that you'd like to draw your shape in: ";
	}

	drawBoard(gameBoard);

	for (int y = 0; 7 < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (x == 'X' && x - 1 == 'X' && x + 1 == 'X') {
				std::cout << "You Win!";
			}
		}
	}
}

void drawBoard(char *gameBoard) {
	std::cout << "\n\n  " << gameBoard[0] << "  |  " << gameBoard[1] << "  |  " << gameBoard[2]
		<< "\n-----|-----|-----\n" << "  " << gameBoard[3] << "  |  " << gameBoard[4] << "  |  " << gameBoard[5]
		<< "\n-----|-----|-----\n" << "  " << gameBoard[6] << "  |  " << gameBoard[7] << "  |  " << gameBoard[8] << "\n\n";
}