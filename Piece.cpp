#include "Piece.h"
#include "Board.h"
#include <iostream>
using std::cout, std::endl;

Piece::Piece(location giveLocation, bool giveColor) : pieceLocation(giveLocation), pieceColor(giveColor) {};

Piece::~Piece() {
    cout<<"Piece taken"<<endl;
};

Pawn::Pawn(location giveLocation, bool giveColor) : Piece(giveLocation, giveColor) {};
Pawn::~Pawn() {
    cout<<"Pawn taken"<<endl;
};
void Pawn::movePiece(int &row, int &column) {
    int rowStorage = row;
    int columnsStorage = column;
};