#ifndef ENEMYWITHOUTKING
#define ENEMYWITHOUTKING

#include "MidGame.hpp"

class EnemyWithoutKing : public MidGame
{
    public:
        static const char moveOrder[7];
        static const char eatOrder[7];
        static const char mixOrder[14];
        static std::vector<std::pair<char,char>> moveVector[14]; 
        int getScore(Board* board) const;
        static const int PIECE_SCORE[18];
};


#endif //ENEMYWITHOUTKING