#pragma once

#include <vector>
#include <string>

using namespace std;

class Character
{
public:
	Character() : m_name(""), m_hp(0), m_level(0), m_attack(0), m_defense(0) {}
	Character(const string& name, int hp, int level, int attack, int defense)
		: m_name(name), m_hp(hp), m_level(level), m_attack(attack), m_defense(defense) {}
	virtual ~Character() {}

	void attackCharacter(Character& target);
	void showInfo();
	
	int getHp();


protected:
	string m_name;
	int m_hp;
	int m_level;
	int m_attack;
	int m_defense;
};

class Player : public Character
{
public:
	Player(const string& name, int hp, int level, int attack, int defense)
		: Character(name, hp, level, attack, defense)
	{
		m_playerConversation.push_back("Hi");
		m_playerConversation.push_back("I'll Kill You");
		m_playerConversation.push_back("Adios");
		m_playerConversation.push_back("Do You Know BTS?");
	}
	~Player() {}

	void showPlayerConversation();
	void setInventory();
	void showInventory();

private:
	vector <string> m_playerConversation;
	vector <string> m_inventory;
	
};

class Monster : public Character
{
public:
	Monster(const string& name, int hp, int level, int attack, int defense)
		: Character(name, hp, level, attack, defense)
	{
		m_monsterConversation.push_back("!!!@#$$%!%!");
		m_monsterConversation.push_back("?????!!!!!");
	}
	~Monster() {}

	void showMonsterConversation();

private:
	vector <string> m_monsterConversation;
};