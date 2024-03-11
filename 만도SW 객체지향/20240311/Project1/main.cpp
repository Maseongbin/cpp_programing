// cout -> printf
// cin  -> scanf
// endl -> \n


/*
// Hello World 출력_1
#include <iostream>

int main()
{
	std::cout << "Hello World!\n";

	return 0;
}
*/

/*
// Hello World 출력_2
#include <iostream>

using namespace std;

int main()
{
	cout << "Hello World!"<< endl;

	return 0;
}
*/

/*
// 문자열_1
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
// 문자열_2
#include <iostream>
#include<string>

using namespace std;

int main()
{
	string s1 = "사과";
	string s2;
	s2 = s1 + " " + to_string(10) + "개";
	cout << s2 << endl;
	return 0;
}
*/

/*
// 이름 받아서 출력하기
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string name;
	cout << "이름을 입력하시오: ";
	cin >> name;
	cout << name << "님 환영합니다." << endl;

	return 0;
}
*/

/*
// 최대한의 사탕 사기
#include <iostream>
#include <string>

using namespace std;

int main()
{
	int money;
	int candy_price;
	int n_candies;
	int change;

	cout << "현재 가지고 있는 돈: ";
	cin >> money;
	cout << "캔디의 가격: ";
	cin >> candy_price;

	n_candies = money / candy_price;
	cout << "최대로 살 수 있는 캔디의 개수: " << n_candies << "개" << endl;

	change = money % candy_price;
	cout << "캔디 구입 후 남은 돈: " << change << "원" << endl;

	return 0;
}
*/

/*
// 화씨 온도 => 섭씨 온도
#include <iostream>
#include <string>

using namespace std;

int main()
{
	double c_temp;
	double f_temp;

	cout << "화씨 온도: ";
	cin >> f_temp;

	c_temp = (f_temp - 32) / 1.8;

	cout << "화씨 온도: " << f_temp << "  =======>  " << "섭씨 온도: " << c_temp << endl;

	return 0;
}
*/

/*
// 주사위 게임(random 함수)
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

	cout << "첫번째 주사위: " << dice1 << endl;
	cout << "두번째 주사위: " << dice2 << endl;
	cout << "두 주사위의 합: " << sum << endl;

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
	cout << std::boolalpha; // 이진법(1, 0) -> ture, false
	cout << b << endl;

	return 0;
}
*/

/*
// 두 수 비교하기(if-else)
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
		cout << "x가 y보다 큽니다." << endl;
	}
	else if (x < y)
	{
		cout << "y가 x보다 큽니다." << endl;
	}
	else
	{
		cout << "x랑 y가 같습니다." << endl;
	}

	return 0;
}
*/

/*
// 나이 구하기(if-else)
#include <iostream>

using namespace std;

int main()
{
	int age;

	cout << "나이를 입력하시오: ";
	cin >> age;

	if (age <= 19 && age >= 13)
	{
		cout << "청소년입니다." << endl;
	}

	else if (age <= 12)
	{
		cout << "어린이입니다." << endl;
	}
	
	else
	{
		cout << "성인입니다." << endl;
	}
}
*/

/*
// 비밀 코드 맞추기
#include <iostream>

using namespace std;

int main()
{
	char secret_code;
	char code;

	cout << "비밀코드: ";
	cin >> secret_code;

	cout << "코드: ";
	cin >> code;

	if (code < secret_code)
	{
		cout << code << " 뒤에 있음" << endl;
	}
	else if (code > secret_code)
	{
		cout << code << " 앞에 있음" << endl;
	}
	else
	{
		cout << "맞추었습니다." << endl;
	}

	return 0;
}*/

/*
// 세 개의 정수 중에서 큰 수 찾기
#include <iostream>

using namespace std;

int main()
{
	int a, b, c, largest;

	cout << "3개의 정수를 입력하시오: ";
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
	cout << "가장 큰 정수: " << largest << endl;
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

	cout << "숫자를 입력하시오: ";
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