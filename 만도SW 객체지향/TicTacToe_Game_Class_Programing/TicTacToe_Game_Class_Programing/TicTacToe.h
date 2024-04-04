#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <iostream>

class TicTacToe {
private:
    char board[3][3];
    char currentPlayer;
    int turn;
    bool gameEnd;

public:
    TicTacToe();
    void printBoard();
    bool makeMove(int x, int y);
    bool checkWin();
    bool checkDraw();
    void play();
};

#endif
