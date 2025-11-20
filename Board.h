#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H
#include <iostream>
#include <vector>
#include "Location.h"
using std::vector;

class Square {
private:
    location squareLocation;
    bool isWhite;
public:
    Square(location giveLocation, bool giveWhite);
    ~Square();
};

class Board {
private:
    vector<vector<Square>> squares;
public:
    Board();
};

#endif //CHESS_BOARD_H