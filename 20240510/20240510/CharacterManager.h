#pragma once

#include <string>

using namespace std;

#ifndef _MY_ADD_
#define _MY_ADD_

class Character
{
public:
	Character(string name) { m_name = name; m_level = 1; m_itemNum = 0; m_abilityPoint = 1; m_health = 100; m_defense = 10; m_attack = 10; m_intelligence = 10; m_lucky = 10; }
	~Character() {}

	void UseAbilityPoint();
	void ShowCharacterInfo();

	string getName();
	void setName(string name);

	int getLevel();
	void setLevel(int level);

	int getItemNum();
	void setItemNum(int itemNum);

	int getAbilityPoint();
	void setAbilityPoint(int abilityPoint);

	int getHealth();
	void setHealth(int health);

	int getDefense();
	void setDefense(int defense);

	int getAttack();
	void setAttack(int attack);

	int getIntelligence();
	void setIntelligence(int intelligence);

	int getLucky();
	void setLucky(int lucky);

private:
	string m_name;
	int m_level;
	int m_itemNum;
	int m_abilityPoint;
	int m_health;
	int m_defense;
	int m_attack;
	int m_intelligence;
	int m_lucky;
};

#endif // !_MY_ADD_