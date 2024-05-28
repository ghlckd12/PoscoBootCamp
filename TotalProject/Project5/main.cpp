#include <string>
#include <iostream>
#include <vector>

#include "Computer.h"
#include "User.h"

using namespace std;

int main()
{
	cout << "야구 게임!!" << endl;
	bool flagGame = true;
	// 컴퓨터가 랜덤한 숫자 3개 뽑기
	Computer computer;

	// 사용자 입력 받고 비교하기
	int num1, num2, num3;
	User user;

	while (flagGame)
	{
		cout << "1 ~ 9 사이의 숫자 3개를 입력하시오 (이외의 숫자: 종료)" << endl;
		cin >> num1 >> num2 >> num3;
		if (0 < num1 && num1 < 10 && 0 < num2 && num2 < 10 && 0 < num3 && num3 < 10)
		{
			user.clearInputVector();
			user.setInputVector(num1, num2, num3);
			flagGame = computer.testResult(user, flagGame);
		}
		
		else
		{
			cout << "게임을 종료하였습니다.";
			break;
		}
	}

	return 0;
}