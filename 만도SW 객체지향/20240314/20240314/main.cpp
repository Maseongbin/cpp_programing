/*
// while 루프
#include <iostream>

using namespace std;

int main()
{
	int n = 10;
	while (n > 0)
	{
		cout << n << " ";
		n--;
	}
	cout << "발사!" << endl;

	return 0;
}
*/

/*
// 구구단 출력하기
#include <iostream>

using namespace std;

int main()
{
	int n;
	int i = 1;

	cout << "구구단 중에서 출력하고 싶은 단 입력: ";
	cin >> n;

	while (i <= 9)
	{
		cout << n << " * " << i << " = " << n * i << endl;
		i++;
	}
}
*/

/*
// do-while문
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	do
	{
		cout << "문자열을 입력하시오: ";
		getline(cin, str);
		cout << "사용자의 입력: " << str << endl;
	} while (str != "종료");
	
	return 0;
}
*/

/*
// for 루프
#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int num;

	cout << "숫자 입력: ";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		sum += i;
	}

	cout << "1부터 " << num << "까지의 정수의 합 = " << sum << endl;

	return 0;
}
*/

/*
// break 문
#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i < 10; i++)
	{
		cout << i << endl;
		if (i == 4)
		{
			cout << endl << i << "에서 강제 종료!!!" << endl;
			break;
		}
	}
	return 0;
}
*/

/*
// continue 문
#include <iostream>

using namespace std;

int main()
{
	int i = 0;

	do
	{
		i++;
		cout << "continue 문장 전에 있는 문장" << endl;
		continue;
		cout << "continue 문장 전에 있는 문장" << endl;
	} while (i < 3);

	return 0;
}
*/

/*
// 숫자 맞추기 게임
#include <iostream>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));

	int answer = rand() % 100;
	int guess;
	int tries = 0;

	do
	{
		cout << "정답을 추측하여 보시오: ";
		cin >> guess;
		tries++;

		if (guess > answer)
		{
			cout << "제시한 정수가 더 높습니다.\n";
		}

		if (guess < answer)
		{
			cout << "제시한 정수가 더 낮습니다.\n";
		}	
	} while (guess != answer);

	cout << "축하합니다. 시도 횟수 = " << tries << endl;

	return 0;
}
*/

/*
// 산수 문제 자동 출력
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
	srand(time(NULL));

	int i, answer;
	int tries = 0;
	cout << "산수 문제를 자동으로 출제합니다." << endl;

	while (true)
	{
		int x = rand() % 100;
		int y = rand() % 100;

		cout << x << " + " << y << " = ";
		cin >> answer;
		tries++; 

		if (x + y == answer)
		{
			cout << "\n정답입니다. 시도 횟수 = " << tries << endl;
			break;
		}
		else
		{
			cout << "오답입니다." << endl;
		}
	}

	return 0;
}
*/

/*
// 배열
#include <iostream>

using namespace std;

int main()
{
	const int STUDENTS = 11;
	int scores[STUDENTS];
	int sum = 0;
	int i, average;

	for (i = 1; i < STUDENTS; i++)
	{
		cout << i << "번째 학생들의 성적을 입력하시오: ";
		cin >> scores[i];
		sum += scores[i];
	}

	average = sum / (STUDENTS - 1);
	cout << "성적평균 = " << average << endl;

	return 0;
}
*/










