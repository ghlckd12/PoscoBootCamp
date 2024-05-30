#include <iostream>

#include "Computer.h"
#include "User.h"

using namespace std;

int main()
{
	//��ǻ�� Ŭ�������� ���� �� �̱�(1~25, 6��, �ߺ�X)
	Computer computer;

	int loopCnt = 1;
	int userNum;
	bool isPossible = true;
	
	User user;

	cout << "���ڴ� 1 ~ 25������ ���ڸ� �Է��� �� �ֽ��ϴ�." << endl;
	while (1)
	{
		//����� Ŭ�������� ���ϴ� ���� �Է�(1~25, 6��, �ߺ�X)
		cout << loopCnt << "��° ��ȣ�� �Է��ϼ���: ";
		cin >> userNum;

		////����� Ŭ�������� üũ(1~25, �ߺ�)
		isPossible = user.checkAndSetInput(userNum);
		if (!isPossible) { continue; }
		loopCnt++;
		////6���Ǹ� ����
		if (user.getUserVector().size() == 6) { break; }
	}

	//�� �迭 ���ؼ� �� ������ ���
	int correctNum = 0;
	vector <int> randomVector = computer.getRandomVector();
	for (int userInput : user.getUserVector())
	{
		if (!(find(randomVector.begin(), randomVector.end(), userInput) == randomVector.end()))
		{
			correctNum++;
		}
	}
	cout << "-----------------------------------" << endl;
	computer.showRandomVector();
	cout << "��� : " << (7 - correctNum) << "���Դϴ�!!";
}