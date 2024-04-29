#include <iostream>
#include <stdlib.h>
#include <time.h>   
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));

    int arr[10][5];

    cout << "입력 전:\n";
    cout << "\n학번  |  국어 |  영어 |  수학 |  평균" << endl;
    for (int i = 0; i < 10; ++i)
    {
        arr[i][0] = i + 1; // 학번 설정
        arr[i][4] = 0;     // 평균 초기화
        cout << "  " << arr[i][0] << '\t';

        // 0부터 100점 까지 랜덤으로 성적 부여
        for (int j = 1; j <= 3; ++j)
        {
            arr[i][j] = rand() % 101; 
            cout << "  " << arr[i][j] << '\t';
        }

        cout << "  " << arr[i][4] << '\t';
        cout << endl;
    }

    // 각 학생들의 성적 평균 계산
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 1; j <= 3; ++j)
        {
            arr[i][4] += arr[i][j];
        }
        arr[i][4] /= 3;
    }

    // 버블 정렬을 사용하여 평균이 높은 순으로 나열
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

    // 나열 후 출력
    cout << "\n입력 후:\n";
    cout << "\n학번  |  국어 |  영어 |  수학 |  평균" << endl;
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 5; ++j)
            cout << "  " << arr[i][j] << '\t';
        cout << endl;
    }

    return 0;
}
