#include <iostream>
#include <stdlib.h>
#include <time.h>   
using namespace std;

int main()
{
    srand((unsigned int)time(NULL));

    int arr[10][5];

    cout << "입력 전:\n";
    cout << "학번  |  국어 |  영어 |  수학 |  평균" << endl;
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
            if (arr[j][4] > arr[j + 1][4])
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
    cout << "학번  |  국어 |  영어 |  수학 |  평균" << endl;
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 5; ++j)
            cout << "  " << arr[i][j] << '\t';
        cout << endl;
    }

    // 각 과목별 최저 점수 및 학번 찾기
    int min_score[3] = { 101, 101, 101 }; // 각 과목별 최저 점수 초기화
    int min_student[3] = { 0, 0, 0 };     // 각 과목별 최저 점수를 받은 학생의 학번 초기화

    for (int i = 0; i < 10; ++i)
    {
        for (int j = 1; j <= 3; ++j)
        {
            if (arr[i][j] < min_score[j - 1])
            {
                min_score[j - 1] = arr[i][j];
                min_student[j - 1] = arr[i][0];
            }
        }
    }

    // 최저 점수 출력
    cout << "\n각 과목별 최저 점수자:\n";
    cout << "과목  | 점수 | 학번" << endl;
    cout << "국어     " << min_score[0] << '\t' << min_student[0] << endl;
    cout << "영어     " << min_score[1] << '\t' << min_student[1] << endl;
    cout << "수학     " << min_score[2] << '\t' << min_student[2] << endl;

    return 0;
}
