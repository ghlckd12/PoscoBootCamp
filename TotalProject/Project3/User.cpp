#include <iostream>

#include "User.h"

bool User::checkAndSetInput(int userInput)
{
	if (!(userInput < 1 or userInput > 25))
	{
		if (find(m_userInputVector.begin(), m_userInputVector.end(), userInput) == m_userInputVector.end()) { setUserInput(userInput); }

		else { cout << "중복된 숫자입니다. 다시입력해주세요." << endl; return false; }
	}

	else { cout << "잘못된 숫자입니다. 다시입력해주세요." << endl; return false; }
}

vector <int> User::getUserVector() { return m_userInputVector; }

void User::setUserInput(int userInput) { m_userInputVector.push_back(userInput); }