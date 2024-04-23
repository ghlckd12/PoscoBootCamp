// 20240423_prac8_9_10.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "5단 출력\n";
	int i = 0;
	while (i < 9)
	{
		i++;
		cout << "5 * " << (i) << " = " << 5 * (i) << endl;
	}
	cout << "\n";

	int j = 0;
	int k = 0;
	cout << "1~9단 출력\n";
	while (j < 9)
	{
		j++;
		cout << "\n";
		cout << "----" << j << "단----" << endl;
		while (k < 9)
		{
			k++;
			cout << (j) << " * " << (k) << " = " << (j) * (k) << endl;
		}
		k = 0;
	}

	//prac4
	int num;
	int result = 0;
	cout << "사용자가 입력한 숫자 더하기\n";

	while(true)
	{
		cout << "숫자를 입력하세요 (0: exit) : ";
		cin >> num;

		result += num;

		if (num == 0)
		{
			cout << "사용자가 입력한 수의 합은 : " << result << endl;
			break;
		}
	}
	
	int input;
	cout << "input : ";
	cin >> input;

	int output;
	cout << "output : \n";


	string str = ("*");
	string finalStr = "";
	
	for (int i = 0; i < input; i++)
	{
		finalStr += str;
		cout << finalStr << endl;
		
	}

}
