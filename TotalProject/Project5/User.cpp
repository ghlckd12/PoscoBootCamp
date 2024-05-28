#include "User.h"

void User::setInputVector(int num1, int num2, int num3)
{
	m_userInputVector.push_back(num1);
	m_userInputVector.push_back(num2);
	m_userInputVector.push_back(num3);
}

vector <int> User::getInputVector()
{
	return m_userInputVector;
}

//시도 마다 벡터 비워주기
void User::clearInputVector()
{
	m_userInputVector.clear();
}