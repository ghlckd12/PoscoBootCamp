#include <iostream>
#include <string>
using namespace std;

void main()
{
	int arr[4][3] = { {19, 66, 68}, {20, 73, 94}, {19, 58, 37}, {20, 82, 29} };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	string name[4] = { "������", "������", "�谡��", "������" };

	cout << "���̸� �Է��ϼ��� : ";
	int input;
	cin >> input;

	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i][0] == input)
		{
			cout << "�̸� : " << name[i] << "\n" << "���� ���� : " << arr[i][2] << "\n";
		}
	}
}