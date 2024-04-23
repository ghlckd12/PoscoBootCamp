// 20240423_prac6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "5단 출력\n";

	for (int i = 0; i < 9; i++)
	{
		cout << "5 * " << (i + 1) << " = " << 5 * (i + 1) << endl;
	}
	cout << "\n";
	
	cout << "1~9단 출력\n";
	for (int i = 0; i < 9; i++)
	{	
		cout << "\n";
		cout << "----" << i + 1 << "단----" << endl ;
		for (int j = 0; j < 9; j++)
		{
			cout << (i+1) << " * " << (j + 1) << " = " << (i+1) * (j + 1) << endl;
		}
		
	}

	return 0;
}


