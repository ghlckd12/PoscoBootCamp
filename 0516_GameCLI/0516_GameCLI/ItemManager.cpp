#include <vector>
#include <string>
#include <iostream>
#include <random>

#include "ItemManager.h"

using namespace std;

string ItemManager::getRandomItem()
{
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(0, 4);
	
	int randomIdx = dis(gen);
	if (randomIdx == 4)
	{	
		cout << "Get Item Fail,,,,, " << m_itemVector[randomIdx] << endl;
		return "No"; 
	}

	else
	{ 
		cout << "Get " << m_itemVector[randomIdx] << "!!!!!" << endl;
		return m_itemVector[randomIdx]; 
	}
}
