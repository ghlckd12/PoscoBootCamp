#pragma once

#include <string>

using namespace std;

#ifndef _MY_ADD_
#define _MY_ADD_

class Character
{
public:
	Character(string name, int level, int itemNum) { m_name = name; m_level = level; m_itemNum = itemNum; }
	~Character() {}

	string getName() { return m_name; }
	void setName(string name) { m_name = name; }

	int getLevel() { return m_level; }
	void setLevel(int level) { m_level = level; }

	int getItemNum() { return m_itemNum; }
	void setItemNum(int itemNum) { m_itemNum = itemNum; }

private:
	string m_name;
	int m_level;
	int m_itemNum;
};

#endif // !_MY_ADD_