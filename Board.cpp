#include "Board.h"
#include <iostream>
using std::cout, std::endl;

Square::Square(location giveLocation, bool giveWhite) : squareLocation(giveLocation) , isWhite(giveWhite){};
Square::~Square() {};

Board::Board() : squares(8, vector<Square>(8)){
    bool holdWhite = true;
    location currentSpace;
    for (int ii = 0; ii < 8; ++ii) {
        for (int jj = 0; jj < 8; ++jj) {
            currentSpace.row = ii; currentSpace.column = jj;
            squares[ii][jj] = Square(currentSpace, holdWhite);
            cout<<"Square placed at "<<currentSpace.row<<" "<<currentSpace.column<<endl;
            holdWhite = !holdWhite;
        }
    }
}