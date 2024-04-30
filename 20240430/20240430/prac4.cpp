#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void main()
{

	// 1. ����ڿ��� �� ���� �л��� �Է��� ������ ����
	int numStudent;
	cout << "�� ���� �л��� �Է��ϳ���? : ";
	cin >> numStudent;

	// 2. �л� �� ��ŭ "�̸�, ����, ����" ������ �� ���� �Է� �ޱ�
	string** studentArr = new string* [numStudent];

	for (int i = 0; i < numStudent; i++)
	{
		studentArr[i] = new string[3];
	}

	for (int i = 0; i < numStudent; i++) // 0 : �̸�, 1 : ����, 2 : ����
	{
		for (int j = 0; j < 3; j++)
		{
			cin >> studentArr[i][j];
		}
	}

	// 3. �л� ���� ���
	for (int i = 0; i < numStudent; i++)
	{
		cout << studentArr[i][0] << "�� ���̴� " << studentArr[i][1] << "�̰� ������ " << studentArr[i][2] << "�Դϴ�." << endl;
	}
	
	// 4. ��� ���� ���
	double resultSum = 0;
	for (int i = 0; i < numStudent; i++)
	{
		resultSum += double(stoi(studentArr[i][1]));
	}
	
	cout << "�л����� ��� ���̴� " << resultSum / double(numStudent) << "�� �Դϴ�." << endl;

	// 5. ���� ���� ���� ���
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
		cout << "�л��� �� ���� ���� ������ 0" << birthMin << " �Դϴ�." << endl;
	}
	else
	{
		cout << "�л��� �� ���� ���� ������ " << birthMin << " �Դϴ�." << endl;
	}
	// 6. ����
	for (int i = 0; i < 3; i++)
		delete[] studentArr[i];

	delete[] studentArr;
}