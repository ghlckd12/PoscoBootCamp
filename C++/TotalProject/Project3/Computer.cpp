#include <random>
#include <iostream>

#include "Computer.h"

void Computer::generateRandomVector()
{
	//1~25 ·£´ý ¼ö »Ì±â
	random_device rd;
	mt19937 gen(rd());
	uniform_int_distribution<int> dis(1, 25); //(1 ~ 25)

	while (m_randomVector.size() < 6) //(6°³, Áßº¹X)
	{
		int randomNum = dis(gen);

		if (find(m_randomVector.begin(), m_randomVector.end(), randomNum) == m_randomVector.end())
		{
			m_randomVector.push_back(randomNum);
		}
	}
}

void Computer::showRandomVector()
{
	cout << "!!!!!!!!!!!!!!!!!!´çÃ· ¹øÈ£ °ø°³!!!!!!!!!!!!!!!!!!!!!!!!" << endl;
	for (int ele : m_randomVector)
	{
		cout << ele << " ";
	}
	cout << endl;
}

vector <int> Computer::getRandomVector() { return m_randomVector; }
