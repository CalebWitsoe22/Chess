#include "Board.h"
#include "Location.h"
#include <iostream>
#include <vector>
using std::cout, std::endl, std::vector;

Square::Square() : squareLocation() , isWhite(), isOccupied(){};
Square::Square(location giveLocation, bool giveWhite, bool giveOccupied) : squareLocation(giveLocation) , isWhite(giveWhite), isOccupied(giveOccupied){};
Square::~Square() = default;
void Square::setOccupied(bool occupiedStatus) {
    isOccupied = occupiedStatus;
};
bool Square::getOccupied() const {
    return isOccupied;
}

Board::Board() : squares(8, vector<Square>(8)){
    bool holdWhite = true;
    location currentSpace;
    for (int ii = 0; ii < 8; ++ii) {
        for (int jj = 0; jj < 8; ++jj) {
            currentSpace.row = ii; currentSpace.column = jj;
            squares[ii][jj] = Square(currentSpace, holdWhite, false);
            cout<<"Square placed at "<<currentSpace.row<<" "<<currentSpace.column<<endl;
            holdWhite = !holdWhite;
        }
    }
}

Board::~Board() {
    cout<<"Board deleted"<<endl;
}

void Board::setBoardOccupancy(const vector<Piece*> pieces) {
    for (auto ii : pieces) {
        int columnHolder = ii->getLocation().column;
        int rowHolder = ii->getLocation().row;
        squares[rowHolder][columnHolder].setOccupied(true);
    }
};