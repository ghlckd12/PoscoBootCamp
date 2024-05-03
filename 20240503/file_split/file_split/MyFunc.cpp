#include <string>
#include <iostream>
#include <algorithm>

#include "MyFunc.h"

using namespace std;

#define NAME 0
#define AGE 1
#define Birth 2

void inputStudentInfo(int numStudent, string** studentArr)
{
	for (int i = 0; i < numStudent; i++) // 0 : �̸�, 1 : ����, 2 : ����
	{
		cout << i + 1 << "�� ° �л��� ������ �Է����ּ���." << endl;
		for (int j = 0; j < 3; j++)
		{
			cin >> studentArr[i][j];
		}
	}
}

void printStudentInfo(int numStudent, string** studentArr)
{
	for (int i = 0; i < numStudent; i++)
	{
		cout << "'" << studentArr[i][NAME] << "'���� ���̴� " << studentArr[i][AGE] << "�̰� ������ " << studentArr[i][Birth] << "�Դϴ�." << endl;
	}
}

void printAvgAge(int numStudent, string** studentArr)
{
	double resultSum = 0;
	for (int i = 0; i < numStudent; i++)
	{
		resultSum += double(stoi(studentArr[i][AGE]));
	}
	cout << "-----------------��� ���-------------------" << endl;
	cout << "�л����� ��� ���̴� " << resultSum / double(numStudent) << "�� �Դϴ�." << endl;
}

void printEarlistBirth(int numStudent, string** studentArr)
{
	int birthMin = INT32_MAX;
	for (int i = 0; i < numStudent; i++)
	{
		if (stoi(studentArr[i][Birth]) < birthMin)
		{
			birthMin = stoi(studentArr[i][Birth]);
		}
	}
	if (birthMin < 1000)
	{
		cout << "�л��� �� ���� ���� ������ 0" << birthMin << " �Դϴ�." << endl;
	}
	else
	{
		cout << "�л��� �� ���� ���� ������ " << birthMin << " �Դϴ�." << endl;
	}
}