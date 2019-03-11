#ifndef _set
#define _set 
#include <iomanip>

using namespace std;

//VARIABLES AND TYPES//
const int DIM = 9;
typedef int tElements[DIM];
typedef struct {
	tElements elements;
	int counter;		
}tSet;


//PROTOTYPES//
void emptySet(tSet &set); //initializes the set to empty
void fullSet(tSet &set); //initializes the set with elements from 1-9
bool isIn(const tSet &set, int n);  // true if n is [1...9]
void add(tSet &set, int n);	// "includes" (pone la posiciona true, n-1) n which is in [1...9] in set
void erase(tSet &set, int n); // "deletes" (pone la posicion a false, n-1) n which is in [1...9] from set
int size(const tSet &set);	// returns the number of elements in set
bool one(const tSet &set, int &n); //returns true if the set has only one element, (seria hacerlo con counter) if its true n is set to that element
void display(const tSet &set); //displays the members (un for si la posicion es true imprime(n+1)) of set


//FUNCTIONS//
void emptySet(tSet &set) {


}

void fullSet(tSet &set) {

}

bool isIn(const tSet &set, int n) {
	bool in = false;


	return in;
}

void add(tSet &set, int n) {

}

void erase(tSet &set, int n) {

}

int size(const tSet &set) {
	int numberElements;


	return numberElements
}

bool one(const tSet &set, int &n) {
	bool oneElement;


	return oneElement;
}

void display(const tSet &set) {

}


#endif

