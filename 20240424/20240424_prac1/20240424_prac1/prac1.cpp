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

	result = add(num1, num2);
	cout << "µ¡¼À °á°ú : " << result << endl;

	result = sub(num1, num2);
	cout << "»¬¼À °á°ú : " << result << endl;

	result = mul(num1, num2);
	cout << "°ö¼À °á°ú : " << result << endl;

	result = divide(num1, num2);
	cout << "³ª´°¼À °á°ú : " << result << endl;
}