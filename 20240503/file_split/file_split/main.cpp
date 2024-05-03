#include <iostream>
#include <string>
#include <algorithm>

#include "MyFunc.h"

using namespace std;

void main()
{
	// 1. ����ڿ��� �� ���� �л��� �Է��� ������ ����
	int numStudent;
	cout << "�� ���� �л��� �Է��ϳ���? : ";
	cin >> numStudent;
	cout << "---------------------------------------" << endl;

	// 2. �л� �� ��ŭ "�̸�, ����, ����" ������ �� ���� �Է� �ޱ�
	cout << "�л��� �̸�, ����, ������ �������� �����Ͽ� ������� �Է����ּ���" << endl;
	string** studentArr = new string * [numStudent];

	for (int i = 0; i < numStudent; i++)
	{
		studentArr[i] = new string[3];
	}
	
	inputStudentInfo(numStudent, studentArr);

	// 3. �л� ���� ���
	cout << "---------------------------------------------" << endl;
	printStudentInfo(numStudent, studentArr);
	cout << "---------------------------------------------" << endl;

	// 4. ��� ���� ���
	printAvgAge(numStudent, studentArr);

	// 5. ���� ���� ���� ���
	printEarlistBirth(numStudent, studentArr);
	cout << "---------------------------------------------" << endl;

	// 6. ����
	for (int i = 0; i < 3; i++)
		delete[] studentArr[i];

	delete[] studentArr;
}