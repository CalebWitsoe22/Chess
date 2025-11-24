
#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H
#pragma once
#include <vector>
#include "Location.h"
#include "Piece.h"
using std::vector;

class Square {
protected:
    location squareLocation;
    bool isWhite;
    bool isOccupied;
public:
    Square();
    Square(location giveLocation, bool giveWhite, bool giveOccupied);
    ~Square();
    void setOccupied(bool occupiedStatus);
    bool getOccupied() const;
};

class Board {
private:
    vector<vector<Square>> squares;
public:
    Board();
    ~Board();
    void setBoardOccupancy(vector<Piece *> pieces);
};

#endif //CHESS_BOARD_H