
#ifndef MOVELISTGENERATOR
#define MOVELISTGENERATOR

#include <vector>

class Board;
class Piece;
class RuleTable;

class MoveListGenerator
{
    public:
        virtual void genMoveList(Board* board) const = 0;
        virtual int getScore(Board* board) const = 0;
        virtual void handle(Board* board)const = 0;
        static void genPossibleMoveAndEat(Board* board, std::vector<std::pair<char, char>>* moveVector, Piece* piece);
        static void genPossibleMove(Board* board, std::vector<std::pair<char, char>>* moveVector, Piece* piece);
        static void genPossibleEat(Board* board, std::vector<std::pair<char, char>>* moveVector, Piece* piece);
        static void genPossibleFlip(Board* board, std::vector<std::pair<char, char>>* moveVector);
};

#endif //MOVELISTGENERATOR