#ifndef _board
#define _board

#include "cell.h"
#include <string>
#include <fstream>
#include <iostream>

using namespace std;


//TYPES AND VARIABLES//
typedef tCell tBoard[DIM][DIM];


//PROTOTYPES//
void init(tBoard board);
bool load(const string &filename, tBoard board);
void draw(const tBoard board);
bool place(tBoard board, int row, int col, int c);
bool erase(tBoard board, int row, int col);
bool full(const tBoard board);
void possible(const tBoard board, int row, int col);
void fillSimple(tBoard board);

//FUNCTIONS//

#endif
