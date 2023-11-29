#pragma once

#include "GameBoard.h"
#include "Block.h"

class TetrisGame
{
private:
    GameBoard gameBoard; // 게임 보드를 나타내는 변수
    bool isplaying;      // 게임이 진행중인지 나타내는 변수

public:
    TetrisGame();

    void initGame();                   // 게임을 초기화하는 함수
    void moveBlock(int direction = 0); // Down(Defalut) = 0, Left = 1, Right = 2, UP(DEBUG) = 3
    void rotateBlock();                // 블록을 회전시키는 함수

    int *getBoard()
    {
        return gameBoard.getBoard();
    }
};
