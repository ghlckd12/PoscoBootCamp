#include <iostream>

#include "User.h"

bool User::checkAndSetInput(int userInput)
{
	if (!(userInput < 1 or userInput > 25))
	{
		if (find(m_userInputVector.begin(), m_userInputVector.end(), userInput) == m_userInputVector.end()) { setUserInput(userInput); }

		else { cout << "�ߺ��� �����Դϴ�. �ٽ��Է����ּ���." << endl; return false; }
	}

	else { cout << "�߸��� �����Դϴ�. �ٽ��Է����ּ���." << endl; return false; }
}

vector <int> User::getUserVector() { return m_userInputVector; }

void User::setUserInput(int userInput) { m_userInputVector.push_back(userInput); }