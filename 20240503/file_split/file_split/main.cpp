#include <iostream>
#include <string>
#include <algorithm>

#include "MyFunc.h"

using namespace std;

void main()
{
	// 1. 사용자에게 몇 명의 학생을 입력할 것인지 묻기
	int numStudent;
	cout << "몇 명의 학생을 입력하나요? : ";
	cin >> numStudent;
	cout << "---------------------------------------" << endl;

	// 2. 학생 수 만큼 "이름, 나이, 생일" 순서로 한 번에 입력 받기
	cout << "학생의 이름, 나이, 생일을 공백으로 구분하여 순서대로 입력해주세요" << endl;
	string** studentArr = new string * [numStudent];

	for (int i = 0; i < numStudent; i++)
	{
		studentArr[i] = new string[3];
	}
	
	inputStudentInfo(numStudent, studentArr);

	// 3. 학생 정보 출력
	cout << "---------------------------------------------" << endl;
	printStudentInfo(numStudent, studentArr);
	cout << "---------------------------------------------" << endl;

	// 4. 평균 나이 출력
	printAvgAge(numStudent, studentArr);

	// 5. 가장 빠른 생일 출력
	printEarlistBirth(numStudent, studentArr);
	cout << "---------------------------------------------" << endl;

	// 6. 해제
	for (int i = 0; i < 3; i++)
		delete[] studentArr[i];

	delete[] studentArr;
}