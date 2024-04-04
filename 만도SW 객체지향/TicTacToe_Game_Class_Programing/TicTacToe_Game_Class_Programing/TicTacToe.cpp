#include "TicTacToe.h"

// TicTacToe 클래스의 생성자
TicTacToe::TicTacToe() {
    currentPlayer = 'X'; // 현재 플레이어를 'X'로 초기화
    turn = 0; // 턴 수를 0으로 초기화
    gameEnd = false; // 게임 종료 여부를 false로 초기화

    // 보드 초기화
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

// 보드 출력 함수
void TicTacToe::printBoard() {
    std::cout << std::endl;
    std::cout << "   0   1   2" << std::endl;
    std::cout << " -------------" << std::endl;
    for (int i = 0; i < 3; i++) {
        std::cout << i << "| ";
        for (int j = 0; j < 3; j++) {
            std::cout << board[i][j] << " | ";
        }
        std::cout << std::endl << " -------------" << std::endl;
    }
}

// 플레이어의 움직임 처리 함수
bool TicTacToe::makeMove(int x, int y) {
    // 유효성 검사
    if (x < 0 || x >= 3 || y < 0 || y >= 3 || board[x][y] != ' ') {
        std::cout << std::endl << "잘못된 위치입니다. 다시 선택하세요." << std::endl;
        return false;
    }

    // 보드에 플레이어의 마크 표시
    board[x][y] = currentPlayer;
    turn++; // 턴 수 증가

    // 승리 조건 확인
    if (checkWin()) {
        printBoard(); // 보드 출력
        std::cout << "플레이어 " << currentPlayer << "가 이겼습니다!" << std::endl;
        gameEnd = true; // 게임 종료 상태로 변경
    }
    // 무승부 확인
    else if (checkDraw()) {
        std::cout << std::endl << "게임이 무승부로 종료되었습니다." << std::endl;
        gameEnd = true; // 게임 종료 상태로 변경
    }
    else {
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X'; // 다음 플레이어 설정
    }

    return true;
}

// 승리 여부 확인 함수
bool TicTacToe::checkWin() {
    // 가로, 세로 확인
    for (int i = 0; i < 3; i++) {
        if ((board[i][0] == currentPlayer && board[i][1] == currentPlayer && board[i][2] == currentPlayer) ||
            (board[0][i] == currentPlayer && board[1][i] == currentPlayer && board[2][i] == currentPlayer)) {
            return true; // 승리 조건 충족 시 true 반환
        }
    }

    // 대각선 확인
    if ((board[0][0] == currentPlayer && board[1][1] == currentPlayer && board[2][2] == currentPlayer) ||
        (board[0][2] == currentPlayer && board[1][1] == currentPlayer && board[2][0] == currentPlayer)) {
        return true; // 승리 조건 충족 시 true 반환
    }

    return false; // 승리 조건을 충족하지 않을 경우 false 반환
}

// 무승부 여부 확인 함수
bool TicTacToe::checkDraw() {
    return turn == 9; // 턴 수가 9일 경우 무승부로 판단하여 true 반환
}

// 게임 실행 함수
void TicTacToe::play() {
    // 게임 종료 상태가 아닐 때까지 반복
    while (!gameEnd) {
        printBoard(); // 보드 출력
        int x, y;
        std::cout << "플레이어 " << currentPlayer << " 의 차례입니다. 좌표를 입력하세요 (x y): ";
        std::cin >> x >> y; // 좌표 입력
        makeMove(x, y); // 움직임 처리
    }
}
