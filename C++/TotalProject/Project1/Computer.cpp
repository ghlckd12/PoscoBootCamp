#include <vector>
#include <random>

#include "Computer.h"
#include "NumManager.h"

using namespace std;

int Computer::getRandom() { return m_randomNum; }

vector <int> Computer::getRandomNumVector(int lastNum)
{
	//1~3 ·£´ý ¼ö »Ì±â
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(1, 3);

	m_randomNum = dis(gen);

	for (int i = 0; i < m_randomNum; i++)
	{
		lastNum++;
		m_randomNumVector.push_back(lastNum);
	}

	return m_randomNumVector;
}

void Computer::numVectorClear() { m_randomNumVector.clear(); }
