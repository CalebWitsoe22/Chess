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

void placePieceStart(vector<Piece *> pieces, std::ifstream fIn) {
    std::string token;
    char pieceType, pieceColor;
    int rowHolder, columnHolder;
    int ii = 0;
    while (fIn >> token) {
        if (token.size() != 4) {
            cout<<"Invalid Input from fileRead: "<<token<<'\n';
            continue;
        }

        if (token[0] == 'w') {
            pieceColor = true;
        } else if (token[0] == 'b') {
            pieceColor = false;
        }

        pieceType = token[1];
        rowHolder = token[2] - '0';
        columnHolder = token[3] - '0';

        switch (pieceType) {
            case 'p':
                pieces[ii] = new Pawn(location(rowHolder, columnHolder), pieceColor);
                break;
            case 'r':
                pieces[ii] = new Rook(location(rowHolder, columnHolder), pieceColor);
                break;
            case 'b':
                pieces[ii] = new Bishop(location(rowHolder, columnHolder), pieceColor);
                break;
            case 'k':
                pieces[ii] = new King(location(rowHolder, columnHolder), pieceColor);
                break;
            case 'q':
                pieces[ii] = new Queen(location(rowHolder, columnHolder), pieceColor);
                break;
            case 'n':
                pieces[ii] = new Knight(location(rowHolder, columnHolder), pieceColor);
            default:
                cout<<"Failure to create Piece: "<<token<<'\n';
                break;
        }
        ++ii;
    }
};

