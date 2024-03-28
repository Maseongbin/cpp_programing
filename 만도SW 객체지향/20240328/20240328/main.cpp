
/*
// 객체의 멤버 접근
#include <iostream>
using namespace std;

class Circle
{
public:
	int radius;
	string color;

	double calcArea()
	{
		return 3.14 * radius * radius;
	}
};

int main()
{
	Circle obj;
	obj.radius = 100;
	obj.color = "blue";

	cout << "원의 면적 = " << obj.calcArea() << endl;

	return 0;
}
*/

/*
// 사각형을 클래스로 나타내자
#include<iostream>
using namespace std;

class Rectangle
{
public:
	int width, height;
	int calcArea()
	{
		return width * height;
	}
};

int main()
{
	Rectangle obj;

	obj.width  = 3;
	obj.height = 4;

	int area = obj.calcArea();

	cout << "사각형의 넓이 = " << area << endl;

	return 0;
}
*/

/*
// 멤버 함수 중복 정의
#include<iostream>
#include<string>
using namespace std;

class PrintData
{
public:

	void print(int i)
	{
		cout << i << endl;
	}
	void print(double f)
	{
		cout << f << endl;
	}
	void print(string s = "No Data!")
	{
		cout << s << endl;
	}
};

int main()
{
	PrintData obj;

	obj.print(1);
	obj.print(3.14);
	obj.print("C++14 is cool.");
	obj.print();

	return 0;
}
*/

/*
// 클래스의 인터페이스와 구현의 분리
#include<iostream>
#include<string>
using namespace std;

class Circle
{
public:
	double calcArea();

	int radius;   //반지름
	string color; //색상
};

//클래스 외부에서 멤버 함수들이 정의된다.
double Circle::calcArea()
{
	return 3.14 * radius * radius;
}

int main()
{
	Circle c;
	c.radius = 10;
	cout << c.calcArea() << endl;

	return 0;
}
*/
