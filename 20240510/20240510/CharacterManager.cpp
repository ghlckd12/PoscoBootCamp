#include <string>
#include <iostream>

#include "CharacterManager.h"

using namespace std;

string Character::getName() { return m_name; }
void Character::setName(string name) { m_name = name; }

int Character::getLevel() { return m_level; }
void Character::setLevel(int level) { m_level = level; }

int Character::getItemNum() { return m_itemNum; }
void Character::setItemNum(int itemNum) { m_itemNum = itemNum; }

int Character::getAbilityPoint() { return m_abilityPoint; }
void Character::setAbilityPoint(int abilityPoint) { m_abilityPoint = abilityPoint; }

int Character::getHealth() { return m_health; }
void Character::setHealth(int health) { m_health = health; }

int Character::getDefense() { return m_defense; }
void Character::setDefense(int defense) { m_defense = defense; }

int Character::getAttack() { return m_attack; }
void Character::setAttack(int attack) { m_attack = attack; }

int Character::getIntelligence() { return m_intelligence; }
void Character::setIntelligence(int intelligence) { m_intelligence = intelligence; }

int Character::getLucky() { return m_lucky; }
void Character::setLucky(int lucky) { m_lucky = lucky; }

void Character::UseAbilityPoint()
{
	if (m_abilityPoint > 0)
	{
		cout << "--------------------------------------SELECT ABILITY------------------------------------------" << endl;
		cout << "|   (1) Health UP    (2) Defense UP    (3) Attack UP    (4) Intelligence UP    (5) Lucky UP   |" << endl;
		cout << "----------------------------------------------------------------------------------------------" << endl;

		int option;
		cin >> option;

		m_abilityPoint--;
		switch (option)
		{
		case 1:
			m_health++;
			cout << "Health UP!!!!" << endl;
			cout << "Your Health Is " << m_health << endl;
			break;

		case 2:
			m_defense++;
			cout << "Defense UP!!!!" << endl;
			cout << "Your Defense Is " << m_defense << endl;
			break;

		case 3:
			m_attack++;
			cout << "Attack UP!!!!" << endl;
			cout << "Your Attack Is " << m_attack << endl;
			break;

		case 4:
			m_intelligence++;
			cout << "Intelligence UP!!!!" << endl;
			cout << "Your Intelligence Is " << m_intelligence << endl;
			break;

		case 5:
			m_lucky++;
			cout << "Lucky UP!!!!" << endl;
			cout << "Your Lucky Is " << m_lucky << endl;
			break;

		default:
			break;
		}
	}

	else
	{
		cout << "You Don't Have Ability Point,,," << endl;
	}
}

void Character::ShowCharacterInfo()
{
	cout << "--------------------------------Show Character Information------------------------------------" << endl;
	cout << "Name : " << m_name << endl;
	cout << "Level : " << m_level << endl;
	cout << "Number of Item : " << m_itemNum << endl;
	cout << "Abiliy Point Stack : " << m_abilityPoint << endl;
	cout << "Health : " << m_health << " | Defense : " << m_defense << " | Attack : " << m_attack << " | Intelligence : " << m_intelligence << " | Lucky : " << m_lucky << endl;
	cout << " ---------------------------------------------------------------------------------------------" << endl;
}
