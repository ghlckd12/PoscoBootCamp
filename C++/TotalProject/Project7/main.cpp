#include <iostream>

#include "Character.h"

int main()
{
	Character user1("User 1", 10, 1);
	Character user2("User 2", 10, 1);

	cout << "�� �Ͽ� �� ������ �ൿ�� ���� �� �� �ֽ��ϴ�." << endl;
	cout << "ex) ���� �ݱ� or �����ϱ�" << endl;

	int loopCnt = 1;
	bool user1CanDo = true;
	bool user2CanDo = true;

	while (user1CanDo && user2CanDo)
	{
		cout << "----------------------------------------------------" << endl;
		cout << loopCnt << "�� ° ���Դϴ�." << endl;
		user1CanDo = user1.action(user2);
		if (!user2.getHp()) { cout << user1.getName() << "���� �¸�!!"; break; }
		user2CanDo = user2.action(user1);
		if (!user2.getHp()) { cout << user2.getName() << "���� �¸�!!"; break; }
		loopCnt++;
	}

	return 0;
}