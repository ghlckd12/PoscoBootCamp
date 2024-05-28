#pragma once
#include <vector>

using namespace std;

class User
{
public:
	User() {}
	~User() {}

	void setInputVector(int num1, int num2, int num3);
	vector <int> getInputVector();
	void clearInputVector();

private:
	vector <int> m_userInputVector;
};