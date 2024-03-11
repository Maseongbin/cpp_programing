// cout -> printf
// cin  -> scanf
// endl -> \n


/*
// Hello World ���_1
#include <iostream>

int main()
{
	std::cout << "Hello World!\n";

	return 0;
}
*/

/*
// Hello World ���_2
#include <iostream>

using namespace std;

int main()
{
	cout << "Hello World!"<< endl;

	return 0;
}
*/

/*
// ���ڿ�_1
#include <iostream>
#include<string>

using namespace std;

int main()
{
	string s1 = "Good";
	string s2 = "Morning";
	string s3 = s1 + " " + s2 + "!";
	cout << s3 << endl;
	return 0;
}
*/

/*
// ���ڿ�_2
#include <iostream>
#include<string>

using namespace std;

int main()
{
	string s1 = "���";
	string s2;
	s2 = s1 + " " + to_string(10) + "��";
	cout << s2 << endl;
	return 0;
}
*/

/*
// �̸� �޾Ƽ� ����ϱ�
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	cout << "�̸��� �Է��Ͻÿ�: ";
	cin >> name;
	cout << name << "�� ȯ���մϴ�." << endl;

	return 0;
}
*/

/*
// �ִ����� ���� ���
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int money;
	int candy_price;
	int n_candies;
	int change;

	cout << "���� ������ �ִ� ��: ";
	cin >> money;
	cout << "ĵ���� ����: ";
	cin >> candy_price;

	n_candies = money / candy_price;
	cout << "�ִ�� �� �� �ִ� ĵ���� ����: " << n_candies << "��" << endl;

	change = money % candy_price;
	cout << "ĵ�� ���� �� ���� ��: " << change << "��" << endl;

	return 0;
}
*/

/*
// ȭ�� �µ� => ���� �µ�
#include <iostream>
#include <string>

using namespace std;

int main()
{
	double c_temp;
	double f_temp;

	cout << "ȭ�� �µ�: ";
	cin >> f_temp;

	c_temp = (f_temp - 32) / 1.8;

	cout << "ȭ�� �µ�: " << f_temp << "  =======>  " << "���� �µ�: " << c_temp << endl;

	return 0;
}
*/

/*
// �ֻ��� ����(random �Լ�)
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
	srand(time(NULL));

	int dice1 = (rand() & 6) + 1;
	int dice2 = (rand() & 6) + 1;
	int sum = dice1 + dice2;

	cout << "ù��° �ֻ���: " << dice1 << endl;
	cout << "�ι�° �ֻ���: " << dice2 << endl;
	cout << "�� �ֻ����� ��: " << sum << endl;

	return 0;
}
*/

/*
// bool
#include <iostream>

using namespace std;

int main()
{
	bool b;
	b = (1 == 2);

	//cout << b << endl;
	cout << std::boolalpha; // ������(1, 0) -> ture, false
	cout << b << endl;

	return 0;
}
*/

/*
// �� �� ���ϱ�(if-else)
#include <iostream>

using namespace std;

int main()
{
	int x, y;

	cout << "x = ";
	cin >> x;
	
	cout << "y = ";
	cin >> y;

	if (x > y)
	{
		cout << "x�� y���� Ů�ϴ�." << endl;
	}
	else if (x < y)
	{
		cout << "y�� x���� Ů�ϴ�." << endl;
	}
	else
	{
		cout << "x�� y�� �����ϴ�." << endl;
	}

	return 0;
}
*/

/*
// ���� ���ϱ�(if-else)
#include <iostream>

using namespace std;

int main()
{
	int age;

	cout << "���̸� �Է��Ͻÿ�: ";
	cin >> age;

	if (age <= 19 && age >= 13)
	{
		cout << "û�ҳ��Դϴ�." << endl;
	}

	else if (age <= 12)
	{
		cout << "����Դϴ�." << endl;
	}
	
	else
	{
		cout << "�����Դϴ�." << endl;
	}
}
*/

/*
// ��� �ڵ� ���߱�
#include <iostream>

using namespace std;

int main()
{
	char secret_code;
	char code;

	cout << "����ڵ�: ";
	cin >> secret_code;

	cout << "�ڵ�: ";
	cin >> code;

	if (code < secret_code)
	{
		cout << code << " �ڿ� ����" << endl;
	}
	else if (code > secret_code)
	{
		cout << code << " �տ� ����" << endl;
	}
	else
	{
		cout << "���߾����ϴ�." << endl;
	}

	return 0;
}*/

/*
// �� ���� ���� �߿��� ū �� ã��
#include <iostream>

using namespace std;

int main()
{
	int a, b, c, largest;

	cout << "3���� ������ �Է��Ͻÿ�: ";
	cin >> a >> b >> c;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	cout << "���� ū ����: " << largest << endl;
	return 0;
}
*/

/*
//switch
#include <iostream>

using namespace std;

int main()
{
	int number;

	cout << "���ڸ� �Է��Ͻÿ�: ";
	cin >> number;

	switch (number)
	{
		case 0:
			cout << "zero\n";
			break;
		case 1:
			cout << "one\n";
			break;
		case 2:
			cout << "two\n";
			break;
		default:
			cout << "many\n";
			break;
	}

	return 0;
}
*/