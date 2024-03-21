#include <iostream>
using namespace std;

char board[3][3];

int main()
{
    char currentPlayer = 'X';
    bool gameEnd = false;
    int x, y, turn = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = ' ';
        }
    }

    while (!gameEnd && turn < 9)
    {
        cout << endl;
        cout << "   0   1   2" << endl;
        cout << " -------------" << endl;
        for (int i = 0; i < 3; i++)
        {
            cout << i << "| ";
            for (int j = 0; j < 3; j++)
            {
                cout << board[i][j] << " | ";
            }
            cout << endl << " -------------" << endl;
        }

        cout << "�÷��̾� " << currentPlayer << " �� �����Դϴ�. ��ǥ�� �Է��ϼ��� (x y): ";
        cin >> x >> y;

        if (x < 0 || x >= 3 || y < 0 || y >= 3 || board[x][y] != ' ')
        {
            cout << endl << "�߸��� ��ġ�Դϴ�. �ٽ� �����ϼ���." << endl;
            continue;
        }

        board[x][y] = currentPlayer;
        turn++;

        if ((board[0][0] == currentPlayer && board[0][1] == currentPlayer && board[0][2] == currentPlayer) ||
            (board[1][0] == currentPlayer && board[1][1] == currentPlayer && board[1][2] == currentPlayer) ||
            (board[2][0] == currentPlayer && board[2][1] == currentPlayer && board[2][2] == currentPlayer) ||
            (board[0][0] == currentPlayer && board[1][0] == currentPlayer && board[2][0] == currentPlayer) ||
            (board[0][1] == currentPlayer && board[1][1] == currentPlayer && board[2][1] == currentPlayer) ||
            (board[0][2] == currentPlayer && board[1][2] == currentPlayer && board[2][2] == currentPlayer) ||
            (board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||
            (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer))
        {

            cout << "  0   1   2" << endl;
            cout << "-------------" << endl;
            for (int i = 0; i < 3; i++)
            {
                cout << i << "| ";
                for (int j = 0; j < 3; j++)
                {
                    cout << board[i][j] << " | ";
                }
                cout << endl << "-------------" << endl;
            }

            cout << "�÷��̾� " << currentPlayer << "�� �̰���ϴ�!" << endl;
            gameEnd = true;
        }
        else
        {
            currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
        }
    }

    if (!gameEnd && turn == 9)
    {
        cout << endl << "������ ���ºη� ����Ǿ����ϴ�." << endl;
    }

    return 0;
}
