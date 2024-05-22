#pragma once

#include <vector>

using namespace std;

class Computer
{
public:
	vector <int> getRandomNumVector(int lastNum);
	int getRandom();
	void numVectorClear();

private:
	vector <int> m_randomNumVector;
	int m_randomNum;
};