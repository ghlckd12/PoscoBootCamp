#include <iostream>
#include <string>
using namespace std;

void main()
{
	// 1. 사용자로부터 x, y 2개의 자연수 입력
	int x;
	int y;
	bool isPossible = true;

	while (isPossible)
	{
		cout << "x를 입력하세요: ";
		cin >> x;

		cout << "y를 입력하세요: ";
		cin >> y;

		// 2. 음수 입력 시 에러 메시지 출력 후 다시 입력
		if (x < 0 || y < 0)
		{
			cout << "x와 y 모두 양수를 입력해주세요.";
			continue;
		}

		// 3. y * x 크기의 동적 배열 arr 선언
		int** arr = new int* [y];
		for (int i = 0; i < y; i++)
		{
			arr[i] = new int[x];
		}

		// 4. 순서대로 x * y 저장
		for (int i = 0; i < y; i++) {
			for (int j = 0; j < x; j++) {
				arr[i][j] = ((j + 1) + (x * i)) ; // 동적 배열 사용
			}
		}

		for (int i = 0; i < y; i++)
		{
			for (int j = 0; j < x; j++)
			{
				cout << arr[i][j] << "\t";
			}
			cout << endl;
		}

		// 동적 배열 해제(반납)
		for (int i = 0; i < y; i++) {
			delete[] arr[i];
		}
		delete[] arr;

		isPossible = false;
	}
	
}
