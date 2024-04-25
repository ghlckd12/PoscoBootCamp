#include <iostream>
#include <string>
using namespace std;

void main()
{
	int arr[4][3] = { {19, 66, 68}, {20, 73, 94}, {19, 58, 37}, {20, 82, 29} };
	int arrSize = sizeof(arr) / sizeof(arr[0]);

	string name[4] = { "방지턱", "정직한", "김가루", "조나단" };

	cout << "나이를 입력하세요 : ";
	int input;
	cin >> input;

	for (int i = 0; i < arrSize; i++)
	{
		if (arr[i][0] == input)
		{
			cout << "이름 : " << name[i] << "\n" << "수학 점수 : " << arr[i][2] << "\n";
		}
	}
}