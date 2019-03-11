#ifndef _cell
#define _cell
#include "set.h"
#include <Windows.h>
#include <iomanip>

using namespace std;

//TYPES AND VARIABLES//
typedef enum { EMPTI, FIXED, FILLED }tCellState; //enum with the states that a cell can have
typedef struct {
	int state;			//state of the cell, with ints cos its easier,  we will traduce the enum tcellstate to int with a switch
	char number; //the number in the cell
	tSet set;   //we will need the tSet from set.h
}tCell;


//PROTOTYPES//
void initCell(tCell &cell); //initialize tcellstate to empti and initializes the function fullSet from set.h
void fillCell(tCell &cell, char c, bool fixed = false); // if c =whitespace, c= empti cell. if c [0...9] then c is the char for its numerical value (rellenar con el caracter c la casilla). then fixed = true, the cells vallue is fixed, fixed = false cells value is filled.
void drawCell(const tCell &cell); //draws the given cell on the screen. they will also be colored differently so it will call another function void bgColor
bool isSimple(const tCell &cell, char &number); //false for fixed or filled cells. true for cell has only one value and returns it.
void bgColor(int color);


//FUNCTIONS//
void bgColor(int color) {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(handle, 15 | (color << 4));
}





#endif 
