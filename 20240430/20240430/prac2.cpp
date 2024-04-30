#include <iostream>
#include <string>
using namespace std;

bool checkIsInt(string str)
{
	bool isInt = false;
	for (char s : str)
	{
		isInt = isdigit(s);
		if (!isInt) { return isInt; }
	}

	return isInt;
}

void main()
{
	// 1. �� ���ڿ��� �Է� �޾� �������� �˻� �� �ƴϸ� �ݺ�
	string str1;
	int numStr;
	int loopCnt = 0;
	bool isInt = false;

	cout << "�� ���� ���ڿ��� �Է����� �Է����ּ��� : " << endl;
	cin >> numStr;
	string *strArr = new string [numStr];

	while (numStr-loopCnt)
	{
		cout << loopCnt + 1 << " ��° ���ڿ��� �Է����ּ��� : ";
		cin >> str1;
		strArr[loopCnt] = str1;

		isInt = checkIsInt(str1);
		
		if (!isInt) { cout << "�ٽ� �Է����ּ���" << endl; continue; }

		loopCnt++;
	}

	// 2. �տ��� �Է� ���� ���� ���ڿ��� �̾ ���
	cout << "���ڷ� �� ���ڿ��� �̾� �ٿ� ���" << endl;
	string connectedStr = "";

	for (int i = 0; i < numStr; i++)
	{
		connectedStr += strArr[i];
	}

	cout << connectedStr << endl;

	// 3. �տ��� �Է� ���� ������ ���� ���
	int sumStr = 0;
	for (int i = 0; i < numStr; i++)
	{
		sumStr += stoi(strArr[i]);
	}
	cout << "���ڷ� �� ���ڿ��� ���� ���" << endl;	
	cout << sumStr;

	delete[] strArr;

}