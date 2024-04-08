#include "Car.h"

int Car::getSeed()
{
	return speed;
}
void Car::setSpeed(int s)
{
	speed = s;
}
int Car::getGear()
{
	return gear;
}
void Car::setGear(int g)
{
	gear = g;
}
string Car::getColor()
{
	return color;
}
void Car::setColor(string c)
{
	color = c;
}
void Car::speedUp()
{
	speed += 10;
}
void Car::speedDown()
{
	speed -= 10;
}
void Car::init(int s, int g, string c)
{
	speed = s;
	gear = g;
	color = c;
}
void Car::print()
{
	cout << "=============" << endl;
	cout << "�ӵ�: " << speed << endl;
	cout << "���: " << gear << endl;
	cout << "����: " << color << endl;
	cout << "=============" << endl;
}