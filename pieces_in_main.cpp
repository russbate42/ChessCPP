
#include <cstddef>
#include <iostream>

using namespace std;

class Coord {
	public:
		Coord(){
			int x;
			int y;
		}
		Coord(int _x, int _y){
			SetX(_x);
			SetY(_y);
		}
		int x;
		int y;
		int GetX(){return x;}
		int GetY(){return y;}
		void SetX(int _x){x = _x;}
		void SetY(int _y){y = _y;}
};

class Piece {
	public:
		int row;
		int col;
		Coord* position;

		Piece(){
			int row;
			int col;
			Coord* position;
		}
		Piece(int _x, int _y){
			Coord* position = new Coord(_x, _y);
			int row = position->GetY();
			int col = position->GetX();
		}
		Piece(Coord& _coord){
			Coord* position = new Coord(_coord);
			int row = position->GetY();
			int col = position->GetX();
		}
	~Piece(){
		delete position;
	}
};

class Pawn {
	public:
		Piece* piece;
		Pawn(){
			Piece* piece = new Piece();
		}
		Pawn(int _x, int _y){
			Piece* piece = new Piece(_x, _y);
		}
		Pawn(Coord& _coord){
			Piece* piece = new Piece(_coord);			
		}
};

int main(){
	
	Coord* myCoord = new Coord(0,0); // Lets just make it zero zero :-)
	Pawn* myPawn = new Pawn(*myCoord); // I think this is pass by ref?
	return 0;
}


