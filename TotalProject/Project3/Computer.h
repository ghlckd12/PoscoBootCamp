#pragma once

#include <vector>

using namespace std;

class Computer
{
public:
	Computer() { generateRandomVector(); }
	~Computer() {}

	vector <int> getRandomVector();
	void showRandomVector();

private:
	void generateRandomVector();
	vector <int> m_randomVector;
};