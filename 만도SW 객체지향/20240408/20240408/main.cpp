/*
// Car Ŭ���� �ۼ�
#include <iostream>
#include <string>
using namespace std;

class Car
{
public:
	int speed;
	int gear;
	string color;

	void speedUp()
	{
		speed += 10;
	}
	void speedDown()
	{
		speed -= 10;
	}
	void gearUp()
	{
		gear += 1;
	}
	void gearDown()
	{
		gear -= 1;
	}
	void print()
	{
		cout << "=============" << endl;
		cout << "�ӵ�: " << speed << endl;
		cout << "���: " << gear << endl;
		cout << "����: " << color << endl;
		cout << "=============" << endl;
	}
};

int main()
{
	Car myCar, yourCar;

	myCar.speed = 100;
	myCar.gear = 3;
	myCar.color = "red";

	yourCar.speed = 10;
	yourCar.gear = 1;
	yourCar.color = "blue";

	myCar.speedUp();
	myCar.gearUp();

	yourCar.speedDown();
	yourCar.gearDown();

	myCar.print();
	yourCar.print();

	return 0;
}
*/

/*
// private�� public
#include <iostream>
#include <string>
using namespace std;

class Employee
{
	string name;
	int salary;
	int age;

	int getSalary()
	{
		return salary;
	}
	int getAge()
	{
		return age;
	}
	string getName()
	{
		return name;
	}
};

int main()
{
	Employee e;
	e.salary = 300;
	e.age = 26;
	int sa = e.getSalary();
	string s = e.getName();
	int a = e.getAge();

	return 0;
}
*/

/*
// �ڵ��� ���� ����
// Car.h , Car.cpp

#include "Car.h"

int main()
{
	Car car1, car2;

	car1.init(rand() % 200, 1, "red");
	car1.print();

	car2.init(rand() % 200, 1, "blue");
	car2.print();

	cout << endl;
	if (car1.getSeed() > car2.getSeed())
	{
		cout << "car1�� �¸��Ͽ����ϴ�." << endl;
	}
	else
	{
		cout << "car2�� �¸��Ͽ����ϴ�." << endl;
	}

	return 0;
}
*/

