//
// John, 240424
// ¦��, Ȧ���� �����ϱ�
//
#include <iostream>
using namespace std;
void main()
{
	string city[5] = { "korea", "china", "japan", "america", "canada"};
	int arraySize = sizeof(city) / sizeof(city[0]);

	string input1;
	cin >> input1;
	if (input1 == "list")
	{
		for (int i = 0; i < arraySize; i++)
		{
			cout << city[i] << endl;
		}
	}
	cout << "--------------" << endl;

	string input2;
	cin >> input2;
	bool isError = true;

	for (int i = 0; i < arraySize; i++)
	{
		if (input2 == city[i])
		{
			isError = false;
			cout << "���� �̸� : " << city[i] << "\n" << "�ε��� : " << i << endl;
		}
	}

	if (isError == true)
	{
		cout << "error" << endl;
	}
}