#include <list>
#include <iostream>
#include "Pawn.h"

using std::cout;
using std::endl;
using std::cin;

int main(){
	
	cout << "Welcome to really bad chess.";
	
	Pawn * mypawn = new Pawn();
	mypawn->SetRow(5);
	mypawn->SetColumn(4);

	int pawnrow = mypawn->GetRow();
	int pawncol = mypawn->GetColumn();
	cout << pawnrow;
	cout << pawncol;
	return 0;
};
