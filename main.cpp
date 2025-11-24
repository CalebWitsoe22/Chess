#include <iostream>
#include <fstream>
#include <vector>
#include "Board.h"
#include "Location.h"
#include "Piece.h"
using std::cout, std::endl, std::vector;

int main() {
    std::ifstream fIn("defaultBoard.txt");
    vector<Piece *> pieces;
    placePieceStart(pieces, fIn);
    Board gameBoard;
    return 0;
}