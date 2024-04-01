/*
// Ŭ������ ����� Ŭ������ ���� �и�
#include "car.h"
using namespace std;

int main()
{
	Car myCar;
	int speed;

	cout << "���� �ӵ��� �Է����ּ���: ";
	cin >> speed;

	myCar.setSpeed(speed);
	cout << endl << "���� �ӵ��� " << myCar.getSpeed() << "km �Դϴ�." << endl;

	return 0;
}
*/

/*
// ������ ���� ����
#include <iostream>
#include <Windows.h>
using namespace std;

class Circle
{
public:
	void init(int xval, int yval, int r);
	void draw();
	void move()
		;
private:
	int x, y, rad;
};

void Circle::init(int xval, int yval, int r)
{
	x = xval;
	y = yval;
	rad = r;
}

void Circle::draw()
{
	HDC hdc = GetWindowDC(GetForegroundWindow());
	Ellipse(hdc, x - rad, y - rad, x + rad, y + rad);
}

void Circle::move()
{
	x += rand() % 50;
}

int main()
{
	Circle c1;
	Circle c2;

	c1.init(100, 100, 50);
	c2.init(100, 200, 40);
	for (int i = 0; i < 20; i++)
	{
		c1.move();
		c1.draw();
		c2.move();
		c2.draw();
		Sleep(1000); // 1�� stop
	}

	return 0;
}
*/

/*
// ������ �ߺ� ����
#include <iostream>
using namespace std;

class Time
{
public:
	int hour;
	int minute;

	Time()
	{
		hour = 0;
		minute = 0;
	}
	Time(int h, int m)
	{
		hour = h;
		minute = m;
	}
	void printf()
	{
		cout << hour << ":" << minute << endl;
	}
};

int main()
{
	Time a;
	Time b(10, 25);

	a.printf();
	b.printf();

	return 0;
}
*/

/*
// ����Ʈ �μ��� ����ϴ� ������
#include <iostream>
using namespace std;

class Time
{
public:
	int hour;
	int minute;

	Time(int h = 0, int m = 0)
	{
		hour = h;
		minute = m;
	}
	void printf()
	{
		cout << hour << ":" << minute << endl;
	}
};

int main()
{
	Time a;
	Time b(10, 25);

	a.printf();
	b.printf();

	return 0;
}
*/

/*
// �Ҹ���
#include <string.h>

class Mystring
{
private:
	char* s;
	int size;

public:
	Mystring(char* c)
	{
		size = strlen(c) + 1;
		s = new_cjar[size];
		strcpy(s, c);
	}
	~MyString()
	{
		delete[]s;
	}
};

int main()
{
	Mystring str("abcdefghijk";)
}
*/


/*
// �����ڿ� ������
#include <iostream>
using namespace std;

class Time
{
public:
	Time(int h, int m);
	void inc_hour();
	void print();

	int getHour()
	{
		return hour;
	}
	int getMinute()
	{
		return minute;
	}
	void setHour(int h)
	{
		hour = h;
	}
	void setMinute(int m)
	{
		minute = m;
	}

private:
	int hour, minute;
};

Time::Time(int h, int m)
{
	hour = h;
	minute = m;
}

void Time::inc_hour()
{
	++hour;

	if (hour > 23)
	{
		hour = 0;
	}
}

void Time::print()
{
	cout << hour << ":" << minute << endl;
}

int main()
{
	Time a(0, 0);

	a.setHour(7);
	a.setMinute(30);

	a.print();

	return 0;
}
*/
