#include <string>
#include <iostream>
#include <random>

#include "Character.h"
#include "ItemManager.h"

using namespace std;

void Character::attackCharacter(Character& target)
{
	int damage = m_attack - (m_attack * target.m_defense / 100);
	if (damage < 0) damage = 0; // 피해량이 음수가 되지 않도록
	target.m_hp -= damage;
	cout << m_name << " attacks " << target.m_name << " for " << damage << " damage." << endl;
	cout << target.m_name << "HP is now " << target.m_hp << endl;
}

void Character::showInfo()
{
	cout << "Name: " << m_name << endl;
	cout << "HP: " << m_hp << endl;
	cout << "Level: " << m_level << endl;
	cout << "Attack: " << m_attack << endl;
	cout << "Defense: " << m_defense << endl;
}

int Character::getHp()
{
	return m_hp;
}

void Player::showPlayerConversation()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(0, 4);

	int randomIdx = dis(gen);

	cout << m_playerConversation[randomIdx];
}

void Player::setInventory()
{
	ItemManager itemManager;
	string randomItem = itemManager.getRandomItem();
	if (randomItem != "NO")
	{
		m_inventory.push_back(randomItem);
	}
}

void Player::showInventory()
{
	cout << "----------------Your Inventory-----------------" << endl;
	for (auto it = m_inventory.begin(); it != m_inventory.end(); ++it)
	{
		cout << *it << endl;
	}
	cout << "----------------------------------------------" << endl;
}

void Monster::showMonsterConversation()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(0, 4);

	int randomIdx = dis(gen);

	cout << m_monsterConversation[randomIdx];
}