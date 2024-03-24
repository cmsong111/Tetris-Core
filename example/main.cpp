#include <conio.h>

#include <iostream>

#include "TetrisGame.h"

using namespace std;

int main() {
  TetrisGame tetrisGame = TetrisGame::getIncetance();

  char inputChar;

  while (true) {
    // 보드 출력
    system("cls");
    int *board = game.getBoard();
    for (int y = 0; y < BOARD_HEIGHT; y++) {
      for (int x = 0; x < BOARD_WIDTH; x++) {
        cout << board[y * BOARD_WIDTH + x] << " ";
      }
      cout << endl;
    }

    inputChar = getch();

    switch (inputChar) {
      case 72:  // UP
        game.rotateBlock();
        break;
      case 75:  // LEFT
        game.moveBlock(1);
        break;
      case 80:  // DOWN
        game.moveBlock(0);
        break;
      case 77:  // RIGHT
        game.moveBlock(2);
        break;
      default:
        break;
    }

    if (game.isGameOver()) {
      cout << "Game Over" << endl;
      break;
    }
  }
  return 0;
}
