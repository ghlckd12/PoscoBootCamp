//1. Character Ŭ���� ����
//2. �ʵ�: name, level, item_num
//3. ������: ����ڿ��� �ַܼ� ĳ���� �̸� �Է� �ް� ĳ���� �����ϱ�(�̸��� �Է¹��� ��, ����, ������ ���� 0) 
//4. ����ڿ��� ĳ���� ���� �Է��ϰ��ϱ� (0 �Է��ϱ� ������ �Է� ��ȣ �ش� �۾� �ݺ�)
//5. ���� Character Ŭ������ �޼ҵ�� �����

#include <string>
#include <iostream>

#include "CharacterManager.h"

using namespace std;

void main()
{
	string name;
	int level, itemNum;
	int option;

	cout << "Welcome!!! Please Input Character Name" << endl;
	cin >> name;
	Character CharacterInfo(name, 0, 0);

	cout << " --------------------------------------SELECT OPTION------------------------------------------" << endl;
	cout << " | (1) Change Name  (2) Level UP  (3) Get Item  (4) Use Item  (5) Show Character Information |" << endl;
	cout << " ---------------------------------------------------------------------------------------------" << endl;

	while (true)
	{
		cout << "Option Number(Quit : 0) : ";
		cin >> option;
		if (option == 0)
		{
			cout << "Bye Bye";
			break;
		}

		switch (option)
		{
		case 1:
			cout << "Your Name Is : " << CharacterInfo.getName() << endl;
			cout << "Input Name to Change!" << endl;
			cin >> name;
			CharacterInfo.setName(name);
			cout << "Name Changing Is Success!!" << endl;
			cout << " ---------------------------------------------------------------------------------------------" << endl;
			break;

		case 2:
			cout << "!!!Level UP!!!!" << endl;
			level = CharacterInfo.getLevel();
			level++;
			CharacterInfo.setLevel(level);
			cout << "Your Level Is " << CharacterInfo.getLevel() << endl;
			cout << " ---------------------------------------------------------------------------------------------" << endl;
			break;

		case 3:
			cout << "Get Item!" << endl;
			itemNum = CharacterInfo.getItemNum();
			itemNum++;
			CharacterInfo.setItemNum(itemNum);
			cout << "Your Number of Item Is " << CharacterInfo.getItemNum() << endl;
			cout << " ---------------------------------------------------------------------------------------------" << endl;
			break;

		case 4:
			cout << "Use Item!" << endl;
			itemNum = CharacterInfo.getItemNum();
			if (itemNum <= 0)
			{
				cout << "Sorry,,, Your Must Have Item, Your Number of Item Is " << itemNum << endl;
				cout << " ---------------------------------------------------------------------------------------------" << endl;
				break;
			}

			else
			{
				itemNum--;
				CharacterInfo.setItemNum(itemNum);
				cout << "Your Number of Item Is " << CharacterInfo.getItemNum() << endl;
				cout << " ---------------------------------------------------------------------------------------------" << endl;
				break;
			}

		case 5:
			cout << "Show Character Information!" << endl;
			name = CharacterInfo.getName();
			level = CharacterInfo.getLevel();
			itemNum = CharacterInfo.getItemNum();

			cout << "Name : " << name << endl;
			cout << "Level : " << level << endl;
			cout << "Number of Item : " << itemNum << endl;
			cout << " ---------------------------------------------------------------------------------------------" << endl;
			break;

		default:
			break;
		}
	}
	
}