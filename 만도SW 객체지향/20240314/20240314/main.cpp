/*
// while ����
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
	cout << "�߻�!" << endl;

	return 0;
}
*/

/*
// ������ ����ϱ�
#include <iostream>

using namespace std;

int main()
{
	int n;
	int i = 1;

	cout << "������ �߿��� ����ϰ� ���� �� �Է�: ";
	cin >> n;

	while (i <= 9)
	{
		cout << n << " * " << i << " = " << n * i << endl;
		i++;
	}
}
*/

/*
// do-while��
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string str;
	do
	{
		cout << "���ڿ��� �Է��Ͻÿ�: ";
		getline(cin, str);
		cout << "������� �Է�: " << str << endl;
	} while (str != "����");
	
	return 0;
}
*/

/*
// for ����
#include <iostream>

using namespace std;

int main()
{
	int sum = 0;
	int num;

	cout << "���� �Է�: ";
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		sum += i;
	}

	cout << "1���� " << num << "������ ������ �� = " << sum << endl;

	return 0;
}
*/

/*
// break ��
#include <iostream>

using namespace std;

int main()
{
	for (int i = 1; i < 10; i++)
	{
		cout << i << endl;
		if (i == 4)
		{
			cout << endl << i << "���� ���� ����!!!" << endl;
			break;
		}
	}
	return 0;
}
*/

/*
// continue ��
#include <iostream>

using namespace std;

int main()
{
	int i = 0;

	do
	{
		i++;
		cout << "continue ���� ���� �ִ� ����" << endl;
		continue;
		cout << "continue ���� ���� �ִ� ����" << endl;
	} while (i < 3);

	return 0;
}
*/

/*
// ���� ���߱� ����
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
		cout << "������ �����Ͽ� ���ÿ�: ";
		cin >> guess;
		tries++;

		if (guess > answer)
		{
			cout << "������ ������ �� �����ϴ�.\n";
		}

		if (guess < answer)
		{
			cout << "������ ������ �� �����ϴ�.\n";
		}	
	} while (guess != answer);

	cout << "�����մϴ�. �õ� Ƚ�� = " << tries << endl;

	return 0;
}
*/

/*
// ��� ���� �ڵ� ���
#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main()
{
	srand(time(NULL));

	int i, answer;
	int tries = 0;
	cout << "��� ������ �ڵ����� �����մϴ�." << endl;

	while (true)
	{
		int x = rand() % 100;
		int y = rand() % 100;

		cout << x << " + " << y << " = ";
		cin >> answer;
		tries++; 

		if (x + y == answer)
		{
			cout << "\n�����Դϴ�. �õ� Ƚ�� = " << tries << endl;
			break;
		}
		else
		{
			cout << "�����Դϴ�." << endl;
		}
	}

	return 0;
}
*/

/*
// �迭
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
		cout << i << "��° �л����� ������ �Է��Ͻÿ�: ";
		cin >> scores[i];
		sum += scores[i];
	}

	average = sum / (STUDENTS - 1);
	cout << "������� = " << average << endl;

	return 0;
}
*/










