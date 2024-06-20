#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void main()
{

	// 1. 사용자에게 몇 명의 학생을 입력할 것인지 묻기
	int numStudent;
	cout << "몇 명의 학생을 입력하나요? : ";
	cin >> numStudent;
	cout << "---------------------------------------" << endl;
	// 2. 학생 수 만큼 "이름, 나이, 생일" 순서로 한 번에 입력 받기
	string** studentArr = new string* [numStudent];

	cout << "학생의 이름, 나이, 생일을 공백으로 구분하여 순서대로 입력해주세요" << endl;
	for (int i = 0; i < numStudent; i++)
	{
		studentArr[i] = new string[3];
	}

	for (int i = 0; i < numStudent; i++) // 0 : 이름, 1 : 나이, 2 : 생일
	{
		cout << i + 1 << "번 째 학생의 정보를 입력해주세요." << endl;
		for (int j = 0; j < 3; j++)
		{	
			cin >> studentArr[i][j];
		}
	}

	// 3. 학생 정보 출력
	cout << "---------------------------------------------" << endl;
	for (int i = 0; i < numStudent; i++)
	{
		cout << "'" << studentArr[i][0] << "'님의 나이는 " << studentArr[i][1] << "이고 생일은 " << studentArr[i][2] << "입니다." << endl;
	}
	cout << "---------------------------------------------" << endl;
	// 4. 평균 나이 출력
	double resultSum = 0;
	for (int i = 0; i < numStudent; i++)
	{
		resultSum += double(stoi(studentArr[i][1]));
	}
	cout << "-----------------출력 결과-------------------" << endl;
	cout << "학생들의 평균 나이는 " << resultSum / double(numStudent) << "살 입니다." << endl;

	// 5. 가장 빠른 생일 출력
	int birthMin = INT32_MAX;
	for (int i = 0; i < numStudent; i++)
	{
		if (stoi(studentArr[i][2]) < birthMin)
		{
			birthMin = stoi(studentArr[i][2]);
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
	cout << "---------------------------------------------" << endl;
	// 6. 해제
	for (int i = 0; i < 3; i++)
		delete[] studentArr[i];

	delete[] studentArr;
}