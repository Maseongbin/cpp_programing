/*
// 매개 변수를 가지는 생성자
#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
	int speed;
	int gear;
	string color;
public:
	Car(int s, int g, string c)
	{
		//cout << "디폴트 생성자 호출" << endl;
		speed = 0;
		gear = g;
		color = c;
	}
	Car()
	{
		speed = 0;
		gear = 1;
		color = "white";
	}
	void print()
	{
		cout << "=================" << endl;
		cout << "속도: " << speed << endl;
		cout << "기어: " << gear << endl;
		cout << "색상: " << color << endl;
		cout << "=================" << endl;
	}
};

int main()
{
	Car c1(0, 1, "red");
	Car c2(0, 1, "blue");
	Car c3;
	c1.print();
	c2.print();
	c3.print();

	return 0;
}
*/

/*
#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
	int speed;
	int gear;
	string color;
public:
	Car(int s = 0, int g = 1, string c = "red")
	{
		speed = 0;
		gear = g;
		color = c;
	}
	void print()
	{
		cout << "=================" << endl;
		cout << "속도: " << speed << endl;
		cout << "기어: " << gear << endl;
		cout << "색상: " << color << endl;
		cout << "=================" << endl;
	}
};

int main()
{
	Car c1;
	c1.print();

	return 0;
}
*/

/*
// 생성자에서 다른 생성자 호출하기
#include <iostream>
#include <string>
using namespace std;

class Car
{
private:
	int speed;
	int gear;			
	string color;
public:
	Car(int s, int g, string c)
	{
		speed = s;
		gear  = g;
		color = c;
	}
	Car(string c)
	{
		Car(0, 0, c);
	}
	void print()
	{
		cout << "=================" << endl;
		cout << "속도: " << speed << endl;
		cout << "기어: " << gear << endl;
		cout << "색상: " << color << endl;
		cout << "=================" << endl;
	}
};

int main()
{
	Car c1("white");
	c1.print();

	return 0;
}
*/

// Circle 클래스
#include <windows.h>
#include <iostream>
using namespace std;

class Circle
{
	int x, y, radius;
	string color;
public:
	Circle(int xval = 0, int yval = 0, int r = 0, string c = "");
	double calcArea()
	{
		return radius * radius * 3.14;
	}
	void draw();
};

Circle::Circle(int xval, int yval, int r, string c)
{
	x = xval;
	y = yval;
	radius = r;
	color = c;
}

void Circle::draw()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, x - radius, y - radius, x + radius, y + radius);
}

int main()
{
	for (int i = 0; i < 10; i++)
	{
		int x = 100 + rand() % 300;
		int y = 100 + rand() % 300;
		int r = rand() % 300;
		Circle c(x, y, r, "yellow");
		c.draw();
		Sleep(1000);
	}

	return 0;
}

