#pragma once

#include <string>
#include <vector>

using namespace std;

class ItemManager
{
public:
	ItemManager() { m_itemVector.push_back("Sword");
	m_itemVector.push_back("Sheild");
	m_itemVector.push_back("Armor");
	m_itemVector.push_back("Shoes");
	m_itemVector.push_back("That's Too Bad,,,");
	}
	~ItemManager() {}

	string getRandomItem();

private:
	vector <string> m_itemVector;
};