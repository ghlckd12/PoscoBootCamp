#include <iostream>
#include <string>
using namespace std;

void main()
{
	// 1. ����ڷκ��� x, y 2���� �ڿ��� �Է�
	int x;
	int y;
	bool isPossible = true;

	while (isPossible)
	{
		cout << "x�� �Է��ϼ���: ";
		cin >> x;

		cout << "y�� �Է��ϼ���: ";
		cin >> y;

		// 2. ���� �Է� �� ���� �޽��� ��� �� �ٽ� �Է�
		if (x < 0 || y < 0)
		{
			cout << "x�� y ��� ����� �Է����ּ���.";
			continue;
		}

		// 3. y * x ũ���� ���� �迭 arr ����
		int** arr = new int* [y];
		for (int i = 0; i < y; i++)
		{
			arr[i] = new int[x];
		}

		// 4. ������� x * y ����
		for (int i = 0; i < y; i++) {
			for (int j = 0; j < x; j++) {
				arr[i][j] = ((j + 1) + (x * i)) ; // ���� �迭 ���
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

		// ���� �迭 ����(�ݳ�)
		for (int i = 0; i < y; i++) {
			delete[] arr[i];
		}
		delete[] arr;

		isPossible = false;
	}
	
}
