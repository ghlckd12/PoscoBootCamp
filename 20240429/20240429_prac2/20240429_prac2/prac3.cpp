#include <iostream>
#include <string>
using namespace std;

void main()
{
	// 1. ��� ���� �� �Է�
	int numRow, numCol;
	cout << "��� ���� ���� �Է��ϼ���" << endl;
	cin >> numRow >> numCol;

	cout << "��� ���Ҹ� �Է��ϼ���" << endl;

	// 2. �Է¹��� ��� �� ��ŭ ���� �Է�

	int** arr = new int* [numRow]; //�����ϰ��� �ϴ� ������ �迭�� ���� �� ��ŭ ���� �Ҵ�

	for (int i = 0; i < numRow; i++) //������ �ε����� �����ϰ��� �ϴ� �迭�� ũ�⸸ŭ�� ����Ű�� ��.
		arr[i] = new int[numCol];

	for (int i = 0; i < numRow; i++)
	{
		for (int j = 0; j < numCol; j++)
		{
			cin >> arr[i][j];
		}
	}

	// 3. �� ��� ���� ���� ���
	
	cout << "�� ���� ��:" << endl;
	for (int i = 0; i < numRow; i++)
	{
		int resultSumRow = 0;
		for (int j = 0; j < numCol; j++)
		{
			resultSumRow += arr[i][j];
		}
		cout << "�� " << i + 1 << ": " << resultSumRow << endl;
	}

	cout << "�� ���� ��:" << endl;
	for (int i = 0; i < numRow; i++)
	{
		int resultSumCol = 0;
		for (int j = 0; j < numCol; j++)
		{
			resultSumCol += arr[j][i];
		}
		cout << "�� " << i + 1 << ": " << resultSumCol << endl;
	}

	// 4. ����
	for (int i = 0; i < numCol; i++)
		delete[] arr[i];

	delete[] arr;

}