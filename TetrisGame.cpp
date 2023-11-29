#include "TetrisGame.h"

TetrisGame::TetrisGame()
{
    gameBoard = GameBoard();
    isplaying = false;
}

void TetrisGame::initGame()
{
    gameBoard.clearBoard();
    isplaying = true;
}

void TetrisGame::moveBlock(int direction)
{
    gameBoard.moveBlock(direction);
}

void TetrisGame::rotateBlock()
{
    gameBoard.rotateBlock();
}