#ifndef _game
#define _game
#include <iostream>
#include <string>
#include <iomanip>
#include "board.h"

using namespace std;

//TYPES AND VARIABLES//
typedef struct {
	int score;  //score from sudoku
	string fileName; //name of the file of the sudoku
}tSudoku; //information from a sudoku 

typedef struct {
	tBoard board;
	bool full; //indicates whether the board is full
}tGame; //represents the info of the sudoku

		
//PROTOTYPES
void initGame(tGame &game, const tSudoku &sudoku);
void displayGame(const tGame &game);
bool loadGame(tGame &game, const tSudoku &sudoku);
int playSudoku(const tSudoku &sudoku);

//FUNCTIONS//
#endif
