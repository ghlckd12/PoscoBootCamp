#pragma once
#include <vector>

using namespace std;

class User
{
public:
	User() {}
	~User() {}

	bool checkAndSetInput(int userInput);
	vector <int> getUserVector();
	
private:
	void setUserInput(int userInput);
	int m_userInput;
	vector <int> m_userInputVector;
};