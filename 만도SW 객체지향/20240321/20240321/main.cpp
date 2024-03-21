/*
//함수를 사용하여 두 수 비교하기
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
	
	cout << "첫번째 수 입력: ";
	cin >> num1;

	cout << "두번째 수 입력: ";
	cin >> num2;

	n = max(num1, num2);
	cout << "두수 중 더 큰수 = " << n << endl;

	return 0;
}
*/


/*
// 함수를 사용하여 계산기 프로그램 작성
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

	cout << "첫번째 수 입력: ";
	cin >> num1;

	cout << "두번째 수 입력: ";
	cin >> num2;

	cout << "기호 입력: ";
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
		cout << "ERROR.다시 입력해주세요." << endl;
	}


	cout << "계산 결과 = " << result << endl;

	return 0;
}
*/

// swap함수 만들기
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

	cout << "swap 전 숫자: " << "a = " << a << "  " << "b = " << b << endl; 
	swap(a, b);
	cout << "swap 후 숫자: " << "a = " << a << "  " << "b = " << b << endl;

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

	cout << "swap 전 숫자: " << "a = " << a << "  " << "b = " << b << endl;
	swap(a, b);
	cout << "swap 후 숫자: " << "a = " << a << "  " << "b = " << b << endl;

	return 0;
}
*/

/*
// 중복함수
#include <iostream>;
using namespace std;

int square(int i)
{
	cout << "square(int) 호출" << endl;
	return i * i;
}

int square(double i)
{
	cout << "square(double) 호출" << endl;
	return i * i;
}

int main()
{
	cout << square(10) << endl;
	cout << square(2.0) << endl;

	return 0;
}
*/

// 디폴트 인수
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
	cout << "아무런 인수가 전달되지 않는 경우: " << endl;
	display();

	cout << "아무런 인수가 전달되지 않는 경우: " << endl;
	display('#');

	cout << "아무런 인수가 전달되지 않는 경우: " << endl;
	display('#', 5);

	return 0;
}