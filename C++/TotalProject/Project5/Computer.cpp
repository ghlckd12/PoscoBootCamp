#include <vector>
#include <random>
#include <iostream>

#include "Computer.h"

void Computer::doRandomThree()
{
	for (int i = 0; i < 3; i++)
	{
		//1~9 랜덤 수 뽑기
		random_device rd;
		mt19937 gen(rd());
		uniform_int_distribution<int> dis(1, 9);

		while (m_randomVector.size() < 3)
		{
			int randomNum = dis(gen);

			if (find(m_randomVector.begin(), m_randomVector.end(), randomNum) == m_randomVector.end())
			{
				m_randomVector.push_back(randomNum);
			}
		}
	}
}

void Computer::showResultCnt(int strikeCnt, int ballCnt, bool flagGame)
{
	if (!flagGame)
	{
		cout << m_resultCnt << "번 만에 맞혔습니다.";
		return;
	}

	cout << "Strike : " << strikeCnt << "\t" << "Ball : " << ballCnt << endl;
}

bool Computer::testResult(User user, bool flagGame)
{
	m_resultCnt++; // 시도 회수 증가

	int strikeCnt = 0;
	int ballCnt = 0;
	vector <int> userVector = user.getInputVector();

	// 스트라이크, 볼 판정
	for (int i = 0; i < 3; i++)
	{
		if (userVector[i] == m_randomVector[i])
		{
			strikeCnt++;
			continue;
		}

		for (int j = 0; j < 3; j++)
		{
			if(userVector[i] == m_randomVector[j])
			{
				ballCnt++;
			}
		}
	}

	// 결과
	showResultCnt(strikeCnt, ballCnt, flagGame);

	if (strikeCnt == 3)
	{
		flagGame = false;
		showResultCnt(strikeCnt, ballCnt, flagGame);
		return flagGame;
	}

	return flagGame;
}