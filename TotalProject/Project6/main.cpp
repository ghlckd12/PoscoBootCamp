#include <string>
#include <iostream>

#include "Calculator.h"

using namespace std;

int main()
{
	int loopCnt = 0;
	int userResult;
	int userInput;
	string option;
	char symbol;

	Calculator calculator;

	while (1)
	{
		if (!loopCnt)
		{
			cout << "숫자를 입력해주세요 : ";
			cin >> userResult;
			calculator.setResult(userResult);
			loopCnt++;
			continue;
		}

		cout << "연산자를 입력해주세요 : ";
		cin >> symbol;

		cout << "숫자를 입력해주세요 : ";
		cin >> userInput;
		calculator.selectCalculate(symbol, userInput);
		calculator.printResult();

		cout << "---------------------------------" << endl;
		cout << "연산을 계속 진행하시겟습니까? (Y: 계속, AC: 초기화, EXIT: 종료) -> ";
		cin >> option;
		if (option == "Y") { continue; }
		else if (option == "AC") { calculator.clearResult(); }
		else if (option == "EXIT") { break; }
	}
}