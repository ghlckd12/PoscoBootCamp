#include <iostream>
#include <vector>

#include "NumManager.h"
#include "Computer.h"

using namespace std;

int main()
{
	int nobNum;
	int lastNum = 0;

	Number number;
	number.setLastNum(0);
	
	Computer computer;

	while (true)
	{
		lastNum = number.getLastNum();
		cout << "1,2,3 중 몇 개의 수를 입력하겠습니까? : ";
		cin >> nobNum;

		if (0 < nobNum && nobNum <= 3)
		{
			for (int i = 0; i < nobNum; i++)
			{
				lastNum++;
				cout << lastNum << endl;
				if (lastNum == 31)
				{
					cout << "게임 종료! 컴퓨터의 승리입니다.";
					return 0;
				}
			}
		}
		
		else
		{
			cout << "1~3 사이의 수를 입력하세요!" << endl;
			continue;
		}

		
		number.setLastNum(lastNum);
		
		// 컴퓨터 랜덤 수 벡터 가져오기
		vector <int> randomVector = computer.getRandomNumVector(lastNum);
		cout << "컴퓨터가 부른 숫자 ! " << computer.getRandom() << endl;

		for (int v : randomVector)
		{
			if (v == 31)
			{
				cout << v << endl;
				cout << "게임 종료! 사용자의 승리입니다.";
				return 0;
			}

			number.setLastNum(v);
			cout << v << endl;
			computer.numVectorClear();
		}
		
	}
}