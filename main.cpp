#include <iostream>
#include "TetrisGame.h"
using namespace std;

int main()
{
    TetrisGame &game = TetrisGame::getIncetance();

    string input;

    while (true)
    {
        cin >> input;

        if (input == "w")
        {
            game.moveBlock(3);
        }
        else if (input == "a")
        {
            game.moveBlock(1);
        }
        else if (input == "s")
        {
            game.moveBlock(0);
        }
        else if (input == "d")
        {
            game.moveBlock(2);
        }
        else if (input == "e")
        {
            game.rotateBlock();
        }
        else if (input == "q")
        {
            break;
        }

        // 보드 출력
        int *board = game.getBoard();
        for (int y = 0; y < BOARD_HEIGHT; y++)
        {
            for (int x = 0; x < BOARD_WIDTH; x++)
            {
                cout << board[y * BOARD_WIDTH + x] << " ";
            }
            cout << endl;
        }

        if (game.isGameOver())
        {
            cout << "Game Over" << endl;
            break;
        }
    }
    return 0;
}
