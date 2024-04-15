#include <iostream>
#include <string>
using namespace std;

class Calculator
{
private:
    double X;
    char oper;
    double Y;
    double sum;

public:
    Calculator(double x, char op, double y, double su);
    void print();
    double getSum();
};

