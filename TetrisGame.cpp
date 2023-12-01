#include "TetrisGame.h"

TetrisGame::TetrisGame()
{
    gameBoard = GameBoard();
}

void TetrisGame::initGame()
{
    gameBoard.clearBoard();
}

void TetrisGame::moveBlock(int direction)
{
    gameBoard.moveBlock(direction);
}

void TetrisGame::rotateBlock()
{
    gameBoard.rotateBlock();
}

bool TetrisGame::isGameOver()
{
    return gameBoard.isOver();
}

Block TetrisGame::getNextBlock()
{
    return gameBoard.getNextBlock();
}

int *TetrisGame::getBoard()
{
    return gameBoard.getBoard();
}