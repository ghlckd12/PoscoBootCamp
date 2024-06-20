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

		// ���� or ��ȭ �κ�
		cout << "----------------------------------------------" << endl;
		cout << "--------- Fight(0) | Conversation(1) ---------" << endl;
		cout << "----------------------------------------------" << endl;
		cin >> actionOption;

		switch (actionOption)
		{
		// ���� ����
		case 0:
			//�÷��̾� ���� ����
			player.attackCharacter(monster);
			
			//���� óġ ���� ó�� �κ�
			if (monster.getHp() <= 0)
			{
				cout << "----------------------------------------------" << endl;
				cout << "!!!Kill Success!!!" << endl;
				//������ ȹ�� �κ�
				player.setInventory();
				cout << "Do You Want to Quit? (0 : Yes | 1 : No) : ";
				cin >> botton;
			}

			monster.attackCharacter(player);
			break;

		// ��ȭ ����
		case 1:
			// ������ ��ȭ ������
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