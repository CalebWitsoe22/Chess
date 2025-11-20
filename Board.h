#ifndef CHESS_BOARD_H
#define CHESS_BOARD_H
#include <iostream>
#include <vector>
#include "Location.h"
using std::vector;

class Square {
private:
    location location;
public:
    //Square(location locate);
};

class Board {
private:
    vector<Square> squares;
};

#endif //CHESS_BOARD_H