#include "calculator.h"

int main()
{
    double x;
    double y;
    char oper;
    double sum = 0;

    // 처음 계산에만 X를 입력받고 다음부터는 처음 계산 결과가 X가 되어 계산 되므로 while 밖에서 출력
    cout << "X 값을 입력하시오: ";
    cin >> x;

    while (1)
    {
        cout << "연산자를 입력하시오: "; // 연산자 입력
        cin >> oper;

        if (oper == 'Q')    // 'Q' 입력 시 프로그램 종료
        {
            cout << endl;
            cout << "종료" << endl;
            break; // 'Q' 입력 시 break를 사용하여 while문 탈출
        }

        if (oper != 'C')    // 'C'가 아닌 다른 연산자 입력 시 Y값을 입력
        {
            cout << "Y 값을 입력하시오: ";
            cin >> y;
        }

        // Calculator 클래스의 객체를 생성하여 계산 후 결과 출력
        Calculator cal(x, oper, y, sum);
        cal.print();
        sum = cal.getSum(); // 다음 연산을 위해 결과값을 x에 저장
        x = sum;
    }

    return 0;
}
