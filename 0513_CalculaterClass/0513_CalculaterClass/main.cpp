#include <iostream>
#include <string>

#include "Calculator.h"
#include "Writer.h"

using namespace std;

int main()
{
	// 클래스 및 변수 초기화
	string wirtePath = "calculateText";
	float num1, result;
	float preResult = 0;
	int calculateOption, printOption;
	bool loopGo = true;

	Calculator calculator(preResult);
	Writer writer("");

	// 계산기 프로그램 실행
	cout << "첫 번째 숫자를 입력해주세요 : ";
	cin >> preResult;

	while (loopGo)
	{
		cout << "-------------------------------- 연산을 선택해주세요 ---------------------------------" << endl;
		cout << "| (0) 덧셈 | (1) 뺄셈 | (2) 곱셈 | (3) 나눗셈 | (4) 제곱근 | (5) 상용로그 | (6) 자연로그 |" << endl;
		cin >> calculateOption;
		switch (calculateOption)
		{
		case 0:
			cout << "덧셈할 숫자를 입력해주세요 : ";
			cin >> num1;

			result = calculator.addNum(preResult, num1);
			calculator.setResult(result);
			
			//로그에 연산 기록
			writer.saveLog4Basic(calculateOption, preResult, num1, result);
			preResult = result;
			cout << "계산이 끝났다면 결과 출력 및 저장 형태를 선택해주세요( 0 : 계속 진행, 1 : 2진수, 2 : 10진수, 3 : 16진수 ) : ";
			cin >> printOption;

			if (printOption == 0) { break; }

			else
			{
				loopGo = false;
				
				calculator.printResult(printOption);
				//기록한 로그 저장
				writer.writeLog(wirtePath);
			}
			break;

		case 1:
			cout << "뺄셈할 숫자를 입력해주세요 : ";
			cin >> num1;

			result = calculator.subNum(preResult, num1);
			calculator.setResult(result);

			//로그에 연산 기록
			writer.saveLog4Basic(calculateOption, preResult, num1, result);
			preResult = result;
			cout << "계산이 끝났다면 결과 출력 및 저장 형태를 선택해주세요( 0 : 계속 진행, 1 : 2진수, 2 : 10진수, 3 : 16진수 ) : ";
			cin >> printOption;

			if (printOption == 0) { break; }

			else
			{
				loopGo = false;

				calculator.printResult(printOption);
				//기록한 로그 저장
				writer.writeLog(wirtePath);
			}
			break;

		case 2:
			cout << "곱셈할 숫자를 입력해주세요 : ";
			cin >> num1;

			result = calculator.mulNum(preResult, num1);
			calculator.setResult(result);

			//로그에 연산 기록
			writer.saveLog4Basic(calculateOption, preResult, num1, result);
			preResult = result;
			cout << "계산이 끝났다면 결과 출력 및 저장 형태를 선택해주세요( 0 : 계속 진행, 1 : 2진수, 2 : 10진수, 3 : 16진수 ) : ";
			cin >> printOption;

			if (printOption == 0) { break; }

			else
			{
				loopGo = false;

				calculator.printResult(printOption);
				//기록한 로그 저장
				writer.writeLog(wirtePath);
			}
			break;

		case 3:
			cout << "나눗셈할 숫자를 입력해주세요 : ";
			cin >> num1;

			result = calculator.divideNum(preResult, num1);
			calculator.setResult(result);

			//로그에 연산 기록
			writer.saveLog4Basic(calculateOption, preResult, num1, result);
			preResult = result;
			cout << "계산이 끝났다면 결과 출력 및 저장 형태를 선택해주세요( 0 : 계속 진행, 1 : 2진수, 2 : 10진수, 3 : 16진수 ) : ";
			cin >> printOption;

			if (printOption == 0) { break; }

			else
			{
				loopGo = false;

				calculator.printResult(printOption);
				//기록한 로그 저장
				writer.writeLog(wirtePath);
			}
			break;

		case 4:
			result = calculator.sqrtNum(preResult);
			calculator.setResult(result);

			//로그에 연산 기록
			writer.saveLogElse(calculateOption, preResult, result);
			preResult = result;
			cout << "계산이 끝났다면 결과 출력 및 저장 형태를 선택해주세요( 0 : 계속 진행, 1 : 2진수, 2 : 10진수, 3 : 16진수 ) : ";
			cin >> printOption;

			if (printOption == 0) { break; }

			else
			{
				loopGo = false;

				calculator.printResult(printOption);
				//기록한 로그 저장
				writer.writeLog(wirtePath);
			}
			break;

		case 5:
			result = calculator.log10Num(preResult);
			calculator.setResult(result);

			//로그에 연산 기록
			writer.saveLogElse(calculateOption, preResult, result);
			preResult = result;
			cout << "계산이 끝났다면 결과 출력 및 저장 형태를 선택해주세요( 0 : 계속 진행, 1 : 2진수, 2 : 10진수, 3 : 16진수 ) : ";
			cin >> printOption;

			if (printOption == 0) { break; }

			else
			{
				loopGo = false;

				calculator.printResult(printOption);
				//기록한 로그 저장
				writer.writeLog(wirtePath);
			}
			break;

		case 6:
			result = calculator.logeNum(preResult);
			calculator.setResult(result);

			//로그에 연산 기록
			writer.saveLogElse(calculateOption, preResult, result);
			preResult = result;
			cout << "계산이 끝났다면 결과 출력 및 저장 형태를 선택해주세요( 0 : 계속 진행, 1 : 2진수, 2 : 10진수, 3 : 16진수 ) : ";
			cin >> printOption;

			if (printOption == 0) { break; }

			else
			{
				loopGo = false;

				calculator.printResult(printOption);
				//기록한 로그 저장
				writer.writeLog(wirtePath);
			}
			break;

		default:
			break;
		}
	}
	return 0;
}