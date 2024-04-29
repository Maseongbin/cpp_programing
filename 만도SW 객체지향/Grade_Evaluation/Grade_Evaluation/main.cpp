#include <iostream>
#include <stdlib.h>
#include <time.h>   
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));

    int arr[10][5];

    cout << "�Է� ��:\n";
    cout << "\n�й�  |  ���� |  ���� |  ���� |  ���" << endl;
    for (int i = 0; i < 10; ++i)
    {
        arr[i][0] = i + 1; // �й� ����
        arr[i][4] = 0;     // ��� �ʱ�ȭ
        cout << "  " << arr[i][0] << '\t';

        // 0���� 100�� ���� �������� ���� �ο�
        for (int j = 1; j <= 3; ++j)
        {
            arr[i][j] = rand() % 101; 
            cout << "  " << arr[i][j] << '\t';
        }

        cout << "  " << arr[i][4] << '\t';
        cout << endl;
    }

    // �� �л����� ���� ��� ���
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 1; j <= 3; ++j)
        {
            arr[i][4] += arr[i][j];
        }
        arr[i][4] /= 3;
    }

    // ���� ������ ����Ͽ� ����� ���� ������ ����
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10 - i - 1; j++)
        {
            if (arr[j][4] < arr[j + 1][4])
            {
                for (int k = 0; k < 5; k++)
                {
                    int temp = arr[j][k];
                    arr[j][k] = arr[j + 1][k];
                    arr[j + 1][k] = temp;
                }
            }
        }
    }

    // ���� �� ���
    cout << "\n�Է� ��:\n";
    cout << "\n�й�  |  ���� |  ���� |  ���� |  ���" << endl;
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 5; ++j)
            cout << "  " << arr[i][j] << '\t';
        cout << endl;
    }

    return 0;
}
