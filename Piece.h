#ifndef CHESS_PIECE_H
#define CHESS_PIECE_H

#include <iostream>

struct location {
    int row;
    int column;
};

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

#endif //CHESS_PIECE_H