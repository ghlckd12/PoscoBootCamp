#include <iostream>

#include "Character.h"

int main()
{
	Character user1("User 1", 10, 1);
	Character user2("User 2", 10, 1);

	cout << "한 턴에 한 가지의 행동만 선택 할 수 있습니다." << endl;
	cout << "ex) 무기 줍기 or 공격하기" << endl;

	int loopCnt = 1;
	bool user1CanDo = true;
	bool user2CanDo = true;

	while (user1CanDo && user2CanDo)
	{
		cout << "----------------------------------------------------" << endl;
		cout << loopCnt << "번 째 턴입니다." << endl;
		user1CanDo = user1.action(user2);
		if (!user2.getHp()) { cout << user1.getName() << "님의 승리!!"; break; }
		user2CanDo = user2.action(user1);
		if (!user2.getHp()) { cout << user2.getName() << "님의 승리!!"; break; }
		loopCnt++;
	}

	return 0;
}