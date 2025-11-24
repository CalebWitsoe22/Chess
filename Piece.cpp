#include "Piece.h"
#include "Board.h"
#include <iostream>
using std::cout, std::endl;

Piece::Piece(location giveLocation, bool giveColor) : pieceLocation(giveLocation), pieceColor(giveColor) {};

Piece::~Piece() {
    cout<<"Piece taken"<<endl;
};

location Piece::getLocation() {
    return pieceLocation;
};

Pawn::Pawn(location giveLocation, bool giveColor) : Piece(giveLocation, giveColor) {};
Pawn::~Pawn() {
    cout<<"Pawn taken"<<endl;
};

Rook::Rook(location giveLocation, bool giveColor) : Piece(giveLocation, giveColor) {};
Rook::~Rook() {
    cout<<"Rook taken"<<endl;
};

Knight::Knight(location giveLocation, bool giveColor) : Piece(giveLocation, giveColor) {};
Knight::~Knight() {
    cout<<"Knight taken"<<endl;
};

Bishop::Bishop(location giveLocation, bool giveColor) : Piece(giveLocation, giveColor) {};
Bishop::~Bishop() {
    cout<<"Bishop taken"<<endl;
};

King::King(location giveLocation, bool giveColor) : Piece(giveLocation, giveColor) {};
King::~King() {
    cout<<"King taken"<<endl;
};

Queen::Queen(location giveLocation, bool giveColor) : Piece(giveLocation, giveColor) {};
Queen::~Queen() {
    cout<<"Queen taken"<<endl;
};

void Pawn::movePiece(int &row, int &column) {
    int rowStorage = row;
    int columnsStorage = column;
};

void Rook::movePiece(int &row, int &column) {
    int rowStorage = row;
    int columnsStorage = column;
};

void Bishop::movePiece(int &row, int &column) {
    int rowStorage = row;
    int columnsStorage = column;
};

void Knight::movePiece(int &row, int &column) {
    int rowStorage = row;
    int columnsStorage = column;
};

void King::movePiece(int &row, int &column) {
    int rowStorage = row;
    int columnsStorage = column;
};

void Queen::movePiece(int &row, int &column) {
    int rowStorage = row;
    int columnsStorage = column;
};

void placePieceStart(vector<Piece *> &pieces, std::ifstream &fIn) {
    std::string token;
    char pieceType, columnToken;
    bool pieceColor = false;
    int rowHolder, columnHolder;
    int ii = 0;
    while (fIn >> token) {
        if (token.size() != 4) {
            cout<<"Invalid Input from fileRead: "<<token<<'\n';
            continue;
        }

        pieceColor = (token[0] == 'w');
        pieceType = token[1];
        columnToken = token[2];
        rowHolder = token[3] - '0';


        switch (columnToken) {
            case 'a':
                columnHolder = 0;
                break;
            case 'b':
                columnHolder = 1;
                break;
            case 'c':
                columnHolder = 2;
                break;
            case 'd':
                columnHolder = 3;
                break;
            case 'e':
                columnHolder = 4;
                break;
            case 'f':
                columnHolder = 5;
                break;
            case 'g':
                columnHolder = 6;
                break;
            case 'h':
                columnHolder = 7;
                break;
            default:
                columnHolder = 0;
                break;
        }

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



