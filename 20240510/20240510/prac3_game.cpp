//1. Character 클래스 생성
//2. 필드: name, level, item_num
//3. 생성자: 사용자에게 콘솔로 캐리터 이름 입력 받고 캐릭터 생성하기(이름은 입력받은 값, 레벨, 아이템 수는 0) 
//4. 사용자에게 캐릭터 조작 입력하게하기 (0 입력하기 전까지 입력 번호 해당 작업 반복)
//5. 전부 Character 클래스의 메소드로 만들기

#include <string>
#include <iostream>

#include "CharacterManager.h"

using namespace std;

void main()
{
	string name;
	int level, itemNum, abilityPoint;
	int option;
	int optionMonster;
	string optionAbility;

	cout << "Welcome!!! Please Input Character Name" << endl;
	cin >> name;
	Character CharacterInfo(name);

	cout << " --------------------------------------SELECT OPTION------------------------------------------" << endl;
	cout << " | (1) Change Name  (2) Level UP  (3) Get Item  (4) Use Item  (5) Show Character Information |" << endl;
	cout << " ---------------------------------------------------------------------------------------------" << endl;

	while (true)
	{
		cout << "Option Number(Quit : 0, Fight : -1) : ";
		cin >> option;
		if (option == 0)
		{
			cout << "Bye Bye";
			break;
		}

		
		if (option == -1)
		{
			cout << "Select Monster Rank" << endl;
			cout << "(1)  0 ~ 10  (2)  11 ~ 30  (3)  31 ~ 50  (4)  51 ~ 100  (5)  101 ~ 300" << endl;
			cin >> optionMonster;
			cout << "Let's Fight!!" << endl;
			cout << "Sorry Not Implemented Yet,,,," << endl;
			/*
			switch (optionMonster)
			{
			case 1:

			default:
				break;
			}
			*/
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
			cout << "!!!Level and Ability Point UP!!!!" << endl;
			level = CharacterInfo.getLevel();
			level++;
			CharacterInfo.setLevel(level);
			cout << "Your Level Is " << CharacterInfo.getLevel() << endl;
			cout << " ---------------------------------------------------------------------------------------------" << endl;

			abilityPoint = CharacterInfo.getAbilityPoint();
			abilityPoint++;
			CharacterInfo.setAbilityPoint(abilityPoint);
			cout << "Do You Want to Use Ability Point? 'O' or 'X' : ";

			cin >> optionAbility;
			if (optionAbility == "O")
			{
				int loopCnt = 0;
				while (abilityPoint - loopCnt)
				{
					loopCnt++;
					CharacterInfo.UseAbilityPoint();
				}

			}

			else
			{
				cout << "Should Press 'O' or 'X'" << endl;
				break;
			}

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
				cout << "Sorry,,, You Must Have Item, Your Number of Item Is " << itemNum << endl;
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
			CharacterInfo.ShowCharacterInfo();
			break;

		default:
			break;
		}
	}
}