#include "calculator.h"

int main()
{
    double x;
    double y;
    char oper;
    double sum = 0;

    // ó�� ��꿡�� X�� �Է¹ް� �������ʹ� ó�� ��� ����� X�� �Ǿ� ��� �ǹǷ� while �ۿ��� ���
    cout << "X ���� �Է��Ͻÿ�: ";
    cin >> x;

    while (1)
    {
        cout << "�����ڸ� �Է��Ͻÿ�: "; // ������ �Է�
        cin >> oper;

        if (oper == 'Q')    // 'Q' �Է� �� ���α׷� ����
        {
            cout << endl;
            cout << "����" << endl;
            break; // 'Q' �Է� �� break�� ����Ͽ� while�� Ż��
        }

        if (oper != 'C')    // 'C'�� �ƴ� �ٸ� ������ �Է� �� Y���� �Է�
        {
            cout << "Y ���� �Է��Ͻÿ�: ";
            cin >> y;
        }

        // Calculator Ŭ������ ��ü�� �����Ͽ� ��� �� ��� ���
        Calculator cal(x, oper, y, sum);
        cal.print();
        sum = cal.getSum(); // ���� ������ ���� ������� x�� ����
        x = sum;
    }

    return 0;
}
