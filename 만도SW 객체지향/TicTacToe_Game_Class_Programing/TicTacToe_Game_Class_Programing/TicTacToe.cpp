#include "TicTacToe.h"

// TicTacToe Ŭ������ ������
TicTacToe::TicTacToe() 
{
    currentPlayer = 'X'; // ���� �÷��̾ 'X'�� �ʱ�ȭ
    turn = 0; // �� ���� 0���� �ʱ�ȭ
    gameEnd = false; // ���� ���� ���θ� false�� �ʱ�ȭ

    // ���� �ʱ�ȭ
    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            board[i][j] = ' ';
        }
    }
}

// ���� ��� �Լ�
void TicTacToe::printBoard() 
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
}

// �÷��̾��� ������ ó�� �Լ�
bool TicTacToe::makeMove(int x, int y) 
{
    // ��ȿ�� �˻�
    if (x < 0 || x >= 3 || y < 0 || y >= 3 || board[x][y] != ' ') 
    {
        cout << endl << "�߸��� ��ġ�Դϴ�. �ٽ� �����ϼ���." << endl;
        return false;
    }

    // ���忡 �÷��̾��� ��ũ ǥ��
    board[x][y] = currentPlayer;
    turn++; // �� �� ����

    // �¸� ���� Ȯ��
    if (checkWin())
    {
        printBoard(); // ���� ���
        cout << "�÷��̾� " << currentPlayer << "�� �̰���ϴ�!" << endl;
        gameEnd = true; // ���� ���� ���·� ����
    }
    // ���º� Ȯ��
    else if (checkDraw()) 
    {
        cout << endl << "������ ���ºη� ����Ǿ����ϴ�." << endl;
        gameEnd = true; // ���� ���� ���·� ����
    }
    else 
    {
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X'; // ���� �÷��̾� ����
    }

    return true;
}

// �¸� ���� Ȯ�� �Լ�
bool TicTacToe::checkWin() 
{
    // ����, ���� Ȯ��
    for (int i = 0; i < 3; i++) 
    {
        if ((board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) ||
            (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)) 
        {
            return true; // �¸� ���� ���� �� true ��ȯ
        }
    }

    // �밢�� Ȯ��
    if ((board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||
        (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)) 
    {
        return true; // �¸� ���� ���� �� true ��ȯ
    }

    return false; // �¸� ������ �������� ���� ��� false ��ȯ
}

// ���º� ���� Ȯ�� �Լ�
bool TicTacToe::checkDraw() 
{
    return turn == 9; // �� ���� 9�� ��� ���ºη� �Ǵ��Ͽ� true ��ȯ
}

// ���� ���� �Լ�
void TicTacToe::play() 
{
    // ���� ���� ���°� �ƴ� ������ �ݺ�
    while (!gameEnd)
    {
        printBoard(); // ���� ���
        int x, y;
        cout << "�÷��̾� " << currentPlayer << " �� �����Դϴ�. ��ǥ�� �Է��ϼ��� (x y): ";
        cin >> x >> y; // ��ǥ �Է�
        makeMove(x, y); // ������ ó��
    }
}
