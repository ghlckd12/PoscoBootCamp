#include <iostream>
#include <string>
using namespace std;

void main()
{
	// 1. 행과 열의 수 입력
	int numRow, numCol;
	cout << "행과 열의 수를 입력하세요" << endl;
	cin >> numRow >> numCol;

	cout << "행렬 원소를 입력하세요" << endl;

	// 2. 입력받은 행과 열 만큼 원소 입력

	int** arr = new int* [numRow]; //선언하고자 하는 이차원 배열의 행의 수 만큼 동적 할당

	for (int i = 0; i < numRow; i++) //각각의 인덱스에 선언하고자 하는 배열의 크기만큼을 가르키게 함.
		arr[i] = new int[numCol];

	for (int i = 0; i < numRow; i++)
	{
		for (int j = 0; j < numCol; j++)
		{
			cin >> arr[i][j];
		}
	}

	// 3. 각 행과 열의 합을 출력
	
	cout << "각 행의 합:" << endl;
	for (int i = 0; i < numRow; i++)
	{
		int resultSumRow = 0;
		for (int j = 0; j < numCol; j++)
		{
			resultSumRow += arr[i][j];
		}
		cout << "행 " << i + 1 << ": " << resultSumRow << endl;
	}

	cout << "각 열의 합:" << endl;
	for (int i = 0; i < numRow; i++)
	{
		int resultSumCol = 0;
		for (int j = 0; j < numCol; j++)
		{
			resultSumCol += arr[j][i];
		}
		cout << "열 " << i + 1 << ": " << resultSumCol << endl;
	}

	// 4. 해제
	for (int i = 0; i < numCol; i++)
		delete[] arr[i];

	delete[] arr;

}