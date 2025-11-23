#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H

#include <vector>
#include <iostream>
#include <fstream>

#include "Board.h"
#include "Location.h"

class Piece {
protected:
    location pieceLocation;
    bool pieceColor;
public:
    Piece(location giveLocation, bool giveColor);
    virtual ~Piece() = 0;
    virtual void movePiece(int &row, int &column) = 0;
};

class Pawn : public Piece {
public:
    Pawn(location giveLocation, bool giveColor);
    ~Pawn() override;
    void movePiece(int &row, int &column) override;
};

class Knight : public Piece {
public:
    Knight(location giveLocation, bool giveColor);
    ~Knight() override;
    void movePiece(int &row, int &column) override;
};

class Bishop : public Piece {
public:
    Bishop(location giveLocation, bool giveColor);
    ~Bishop() override;
    void movePiece(int &row, int &column) override;
};

class Rook : public Piece {
public:
    Rook(location giveLocation, bool giveColor);
    ~Rook() override;
    void movePiece(int &row, int &column) override;
};

class Queen : public Piece {
public:
    Queen(location giveLocation, bool giveColor);
    ~Queen() override;
    void movePiece(int &row, int &column) override;
};

class King : public Piece {
public:
    King(location giveLocation, bool giveColor);;
    ~King() override;
    void movePiece(int &row, int &column) override;
};

void placePieceStart(vector<Piece *> pieces, std::ifstream fIn);
#endif