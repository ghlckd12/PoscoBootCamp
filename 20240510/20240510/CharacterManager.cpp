#include <string>
#include <iostream>

using namespace std;

class Character
{
private:
	string m_name;
	int m_level;
	int m_itemNum;

public:
	Character(string name, int level, int itemNum) { m_name = name; m_level = level; m_itemNum = itemNum; }
	~Character() {}

};