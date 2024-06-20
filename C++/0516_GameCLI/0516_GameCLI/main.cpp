#include <iostream>
#include <string>


#include "Character.h"
#include "ItemManager.h"

using namespace std;

int main()
{
	int botton = 1;
	int actionOption;
	string playerName;
	cout << "Input Player Name : ";
	cin >> playerName;

	//name, hp, level, attack, defense
	Player player(playerName, 100, 1, 20, 10); 
	Monster monster("Goblin", 50, 1, 10, 0);

	while (botton)
	{
		cout << "!!Your Staus!!" << endl;
		cout << "----------------------------------------------" << endl;
		player.showInfo();
		player.showInventory();

		cout << "!!Monster Status!!" << endl;
		cout << "----------------------------------------------" << endl;
		monster.showInfo();

		// 전투 or 대화 부분
		cout << "----------------------------------------------" << endl;
		cout << "--------- Fight(0) | Conversation(1) ---------" << endl;
		cout << "----------------------------------------------" << endl;
		cin >> actionOption;

		switch (actionOption)
		{
		// 전투 선택
		case 0:
			//플레이어 먼저 공격
			player.attackCharacter(monster);
			
			//몬스터 처치 이후 처리 부분
			if (monster.getHp() <= 0)
			{
				cout << "----------------------------------------------" << endl;
				cout << "!!!Kill Success!!!" << endl;
				//아이템 획득 부분
				player.setInventory();
				cout << "Do You Want to Quit? (0 : Yes | 1 : No) : ";
				cin >> botton;
			}

			monster.attackCharacter(player);
			break;

		// 대화 선택
		case 1:
			// 랜덤한 대화 나누기
			player.showPlayerConversation();
			cout << "\n";
			monster.showMonsterConversation();
			cout << "\n";

			break;

		default:
			break;
		}

		
	}

	return 0;
}