#include <iostream>
#include <string>
using namespace std;

void main()
{
	// 1. �� ���� �л� ���� ����� ���� �� �Է�

	int numStudent;
	
	cout << "�л� �� �Է� : ";
	cin >> numStudent;

	// 2. �Է¹��� �л��� �� ��ŭ ���� �Է�

	double* studentArr = new double[numStudent]; // ���� �迭 ����

	for (int i = 0; i < numStudent; i++) // �Է��� �л� �� ��ŭ ���� �Է�
	{
		cout << i+1 << "�� �л��� ������ �Է��ϼ���: ";
		cin >> studentArr[i];
	}

	// 3. �л����� ���� ��� ����
	double result_sum = 0;
	for (int i = 0; i < numStudent; i++)
	{
		result_sum += studentArr[i];
	}

	cout << "���� ��� : " << result_sum / double(numStudent);
	delete[] studentArr;
}