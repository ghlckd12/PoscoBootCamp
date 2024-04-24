#include <iostream>
#include <string>
using namespace std;

int add(int num1, int num2)
{
	int result = num1 + num2;

	return result;
}

int sub(int num1, int num2)
{
	int result;
	if (num1 > num2)
	{ 
		result = num1 - num2;
	}

	else
	{ 
		result = num2 - num1;
	}

	return result;
}

int mul(int num1, int num2)
{
	int result = num1 * num2;

	return result;
}

double divide(double num1, double num2)
{
	double result = num1 / num2;

	return result;
}

int main()
{
	int num1;
	int num2;
	double result;

	cin >> num1 >> num2;
	result = divide(num1, num2);
	cout << result;
}