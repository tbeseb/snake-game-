#ifndef GAME_H
#define GAME_H

#include "snake.h"
#include "food.h"
#include "board.h"

class Game {
public:
    Game();
    void run();
private:
    Snake snake;
    Food food;
    Board board;
    bool isRunning;
    int score;
};

#endif