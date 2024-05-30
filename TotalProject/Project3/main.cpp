#include <iostream>

#include "Computer.h"
#include "User.h"

using namespace std;

int main()
{
	//컴퓨터 클래스에서 랜덤 수 뽑기(1~25, 6개, 중복X)
	Computer computer;

	int loopCnt = 1;
	int userNum;
	bool isPossible = true;
	
	User user;

	cout << "숫자는 1 ~ 25까지의 숫자만 입력할 수 있습니다." << endl;
	while (1)
	{
		//사용자 클래스에서 원하는 숫자 입력(1~25, 6개, 중복X)
		cout << loopCnt << "번째 번호를 입력하세요: ";
		cin >> userNum;

		////사용자 클래스에서 체크(1~25, 중복)
		isPossible = user.checkAndSetInput(userNum);
		if (!isPossible) { continue; }
		loopCnt++;
		////6개되면 종료
		if (user.getUserVector().size() == 6) { break; }
	}

	//두 배열 비교해서 몇 등인지 출력
	int correctNum = 0;
	vector <int> randomVector = computer.getRandomVector();
	for (int userInput : user.getUserVector())
	{
		if (!(find(randomVector.begin(), randomVector.end(), userInput) == randomVector.end()))
		{
			correctNum++;
		}
	}
	cout << "-----------------------------------" << endl;
	computer.showRandomVector();
	cout << "결과 : " << (7 - correctNum) << "등입니다!!";
}