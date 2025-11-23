#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H
#include <iostream>
#include <vector>
#include "Location.h"
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
};

class Board {
private:
    vector<vector<Square>> squares;
public:
    Board();
};

#endif //CHESS_BOARD_H