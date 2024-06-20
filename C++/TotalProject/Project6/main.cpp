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
			cout << "���ڸ� �Է����ּ��� : ";
			cin >> userResult;
			calculator.setResult(userResult);
			loopCnt++;
			continue;
		}

		cout << "�����ڸ� �Է����ּ��� : ";
		cin >> symbol;

		cout << "���ڸ� �Է����ּ��� : ";
		cin >> userInput;
		calculator.selectCalculate(symbol, userInput);
		calculator.printResult();

		cout << "---------------------------------" << endl;
		cout << "������ ��� �����Ͻðٽ��ϱ�? (Y: ���, AC: �ʱ�ȭ, EXIT: ����) -> ";
		cin >> option;
		if (option == "Y") { continue; }
		else if (option == "AC") { calculator.clearResult(); }
		else if (option == "EXIT") { break; }
	}
}