#pragma once

#include <vector>
#include <string>

#include "User.h"

using namespace std;


class Computer
{
public:
	Computer() { doRandomThree(); }
	~Computer() {}

	void doRandomThree();
	void showResultCnt(int strikeCnt, int ballCnt, bool flagGame);
	bool testResult(User user, bool flagGame);

private:
	vector <int> m_randomVector;
	int m_resultCnt;
};