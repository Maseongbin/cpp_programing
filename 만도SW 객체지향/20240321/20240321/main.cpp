/*
//�Լ��� ����Ͽ� �� �� ���ϱ�
#include <iostream>
using namespace std;

int max(int x, int y)
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

int main()
{
	int n, num1, num2;
	
	cout << "ù��° �� �Է�: ";
	cin >> num1;

	cout << "�ι�° �� �Է�: ";
	cin >> num2;

	n = max(num1, num2);
	cout << "�μ� �� �� ū�� = " << n << endl;

	return 0;
}
*/


/*
// �Լ��� ����Ͽ� ���� ���α׷� �ۼ�
#include <iostream>
using namespace std;

int Addition(int x, int y) 
{
	int add;
	add = x + y;

	return add;
}

int Subtraction(int x, int y) 
{
	int sub;
	sub = x - y;

	return sub;
}

int Multiplication(int x, int y)
{
	int mul;
	mul = x * y;

	return mul;
}

int Division(int x, int y)
{
	int div;
	div = x / y;

	return div;
}

int main()
{
	int num1, num2, result;
	char symbol;

	cout << "ù��° �� �Է�: ";
	cin >> num1;

	cout << "�ι�° �� �Է�: ";
	cin >> num2;

	cout << "��ȣ �Է�: ";
	cin >> symbol;

	if (symbol == '+')
	{
		result = Addition(num1, num2);
	}

	else if (symbol == '-')
	{
		result = Subtraction(num1, num2);
	}

	else if (symbol == '*')
	{
		result = Multiplication(num1, num2);
	}

	else if (symbol == '/')
	{
		result = Division(num1, num2);
	}

	else
	{
		cout << "ERROR.�ٽ� �Է����ּ���." << endl;
	}


	cout << "��� ��� = " << result << endl;

	return 0;
}
*/

// swap�Լ� �����
/*



#include <iostream>
using namespace std;

void swap(int& x, int& y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a = 100, b = 200;

	cout << "swap �� ����: " << "a = " << a << "  " << "b = " << b << endl; 
	swap(a, b);
	cout << "swap �� ����: " << "a = " << a << "  " << "b = " << b << endl;

	return 0;
}


#include <iostream>
using namespace std;

void swap(int x, int y)
{
	int temp;

	temp = x;
	x = y;
	y = temp;
}

int main()
{
	int a = 100, b = 200;

	cout << "swap �� ����: " << "a = " << a << "  " << "b = " << b << endl;
	swap(a, b);
	cout << "swap �� ����: " << "a = " << a << "  " << "b = " << b << endl;

	return 0;
}
*/

/*
// �ߺ��Լ�
#include <iostream>;
using namespace std;

int square(int i)
{
	cout << "square(int) ȣ��" << endl;
	return i * i;
}

int square(double i)
{
	cout << "square(double) ȣ��" << endl;
	return i * i;
}

int main()
{
	cout << square(10) << endl;
	cout << square(2.0) << endl;

	return 0;
}
*/

// ����Ʈ �μ�
#include <iostream>

using namespace std;

void display(char c = '*', int n = 10)
{
	for (int i = 0; i < n; i++)
	{
		cout << c;
	}
	cout << endl;
}

int main()
{
	cout << "�ƹ��� �μ��� ���޵��� �ʴ� ���: " << endl;
	display();

	cout << "�ƹ��� �μ��� ���޵��� �ʴ� ���: " << endl;
	display('#');

	cout << "�ƹ��� �μ��� ���޵��� �ʴ� ���: " << endl;
	display('#', 5);

	return 0;
}