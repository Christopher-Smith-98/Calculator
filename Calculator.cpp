// Christopher Smith Jan 2022
// Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include "Calculator.h"

using namespace std;

int main()
{
	cout << "Calculator Console App\n\n";
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b |\n";
	return 0;
}

double Calculator::Calculate(double x, char oper, double y)
{
	switch (oper)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
	default:
		return 0.0;
	}
}