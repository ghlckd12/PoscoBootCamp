#include <string>
#include <iostream>
#include <vector>

#include "Computer.h"
#include "User.h"

using namespace std;

int main()
{
	cout << "�߱� ����!!" << endl;
	bool flagGame = true;
	// ��ǻ�Ͱ� ������ ���� 3�� �̱�
	Computer computer;

	// ����� �Է� �ް� ���ϱ�
	int num1, num2, num3;
	User user;

	while (flagGame)
	{
		cout << "1 ~ 9 ������ ���� 3���� �Է��Ͻÿ� (�̿��� ����: ����)" << endl;
		cin >> num1 >> num2 >> num3;
		if (0 < num1 && num1 < 10 && 0 < num2 && num2 < 10 && 0 < num3 && num3 < 10)
		{
			user.clearInputVector();
			user.setInputVector(num1, num2, num3);
			flagGame = computer.testResult(user, flagGame);
		}
		
		else
		{
			cout << "������ �����Ͽ����ϴ�.";
			break;
		}
	}

	return 0;
}