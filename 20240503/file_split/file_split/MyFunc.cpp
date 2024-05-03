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
	for (int i = 0; i < numStudent; i++) // 0 : 이름, 1 : 나이, 2 : 생일
	{
		cout << i + 1 << "번 째 학생의 정보를 입력해주세요." << endl;
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
		cout << "'" << studentArr[i][NAME] << "'님의 나이는 " << studentArr[i][AGE] << "이고 생일은 " << studentArr[i][Birth] << "입니다." << endl;
	}
}

void printAvgAge(int numStudent, string** studentArr)
{
	double resultSum = 0;
	for (int i = 0; i < numStudent; i++)
	{
		resultSum += double(stoi(studentArr[i][AGE]));
	}
	cout << "-----------------출력 결과-------------------" << endl;
	cout << "학생들의 평균 나이는 " << resultSum / double(numStudent) << "살 입니다." << endl;
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
		cout << "학생들 중 가장 빠른 생일은 0" << birthMin << " 입니다." << endl;
	}
	else
	{
		cout << "학생들 중 가장 빠른 생일은 " << birthMin << " 입니다." << endl;
	}
}