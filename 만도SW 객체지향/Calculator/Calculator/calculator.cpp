#include "calculator.h"

Calculator::Calculator(double x, char op, double y, double su)
{
    X = x;      // X�� x �� ����
    oper = op;  // oper�� op �� ����
    Y = y;      // Y�� y �� ����
    sum = su;   // sum�� su �� ����

    // �Էµ� �����ڿ� ���� ��� ����
    switch (oper)
    {
    case '+':   // ����
        sum = X + Y;
        break;
    case '-':   // ����
        sum = X - Y;
        break;
    case '*':   // ����
        sum = X * Y;
        break;
    case '/':   // ������
        if (Y != 0) // ������ ���� 0�� �ƴ� ��� ���
        {
            sum = X / Y;
        }
        else
        {
            cout << "ERROR" << endl;  // ������ ���� 0�� ��� ���� ���
        }
        break;
    default:    // �߸��� �������� ���
        cout << "�߸��� ������" << endl;
        break;
    }
}

// ��� ����ϴ� �Լ�
void Calculator::print()
{
    cout << "RESULT: " << sum << endl;
    cout << endl;
}

// ����� ��ȯ�ϴ� �Լ�
double Calculator::getSum()
{
    return sum;
}
