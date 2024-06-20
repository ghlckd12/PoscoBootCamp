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
	// 1. 두 문자열을 입력 받아 숫자인지 검사 및 아니면 반복
	string str1;
	int numStr;
	int loopCnt = 0;
	bool isInt = false;

	cout << "몇 개의 문자열을 입력할지 입력해주세요 : " << endl;
	cin >> numStr;
	string *strArr = new string [numStr];

	while (numStr-loopCnt)
	{
		cout << loopCnt + 1 << " 번째 문자열을 입력해주세요 : ";
		cin >> str1;
		strArr[loopCnt] = str1;

		isInt = checkIsInt(str1);
		
		if (!isInt) { cout << "다시 입력해주세요" << endl; continue; }

		loopCnt++;
	}

	// 2. 앞에서 입력 받은 숫자 문자열을 이어서 출력
	cout << "숫자로 된 문자열을 이어 붙여 출력" << endl;
	string connectedStr = "";

	for (int i = 0; i < numStr; i++)
	{
		connectedStr += strArr[i];
	}

	cout << connectedStr << endl;

	// 3. 앞에서 입력 받은 숫자의 합을 출력
	int sumStr = 0;
	for (int i = 0; i < numStr; i++)
	{
		sumStr += stoi(strArr[i]);
	}
	cout << "숫자로 된 문자열의 합을 출력" << endl;	
	cout << sumStr;

	delete[] strArr;

}