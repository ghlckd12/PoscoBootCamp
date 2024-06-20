#include <iostream>
#include <string>

#include "Calculator.h"
#include "Writer.h"

using namespace std;

int main()
{
	// Ŭ���� �� ���� �ʱ�ȭ
	string wirtePath = "calculateText";
	float num1, result;
	float preResult = 0;
	int calculateOption, printOption;
	bool loopGo = true;

	Calculator calculator(preResult);
	Writer writer("");

	// ���� ���α׷� ����
	cout << "ù ��° ���ڸ� �Է����ּ��� : ";
	cin >> preResult;

	while (loopGo)
	{
		cout << "-------------------------------- ������ �������ּ��� ---------------------------------" << endl;
		cout << "| (0) ���� | (1) ���� | (2) ���� | (3) ������ | (4) ������ | (5) ���α� | (6) �ڿ��α� |" << endl;
		cin >> calculateOption;
		switch (calculateOption)
		{
		case 0:
			cout << "������ ���ڸ� �Է����ּ��� : ";
			cin >> num1;

			result = calculator.addNum(preResult, num1);
			calculator.setResult(result);
			
			//�α׿� ���� ���
			writer.saveLog4Basic(calculateOption, preResult, num1, result);
			preResult = result;
			cout << "����� �����ٸ� ��� ��� �� ���� ���¸� �������ּ���( 0 : ��� ����, 1 : 2����, 2 : 10����, 3 : 16���� ) : ";
			cin >> printOption;

			if (printOption == 0) { break; }

			else
			{
				loopGo = false;
				
				calculator.printResult(printOption);
				//����� �α� ����
				writer.writeLog(wirtePath);
			}
			break;

		case 1:
			cout << "������ ���ڸ� �Է����ּ��� : ";
			cin >> num1;

			result = calculator.subNum(preResult, num1);
			calculator.setResult(result);

			//�α׿� ���� ���
			writer.saveLog4Basic(calculateOption, preResult, num1, result);
			preResult = result;
			cout << "����� �����ٸ� ��� ��� �� ���� ���¸� �������ּ���( 0 : ��� ����, 1 : 2����, 2 : 10����, 3 : 16���� ) : ";
			cin >> printOption;

			if (printOption == 0) { break; }

			else
			{
				loopGo = false;

				calculator.printResult(printOption);
				//����� �α� ����
				writer.writeLog(wirtePath);
			}
			break;

		case 2:
			cout << "������ ���ڸ� �Է����ּ��� : ";
			cin >> num1;

			result = calculator.mulNum(preResult, num1);
			calculator.setResult(result);

			//�α׿� ���� ���
			writer.saveLog4Basic(calculateOption, preResult, num1, result);
			preResult = result;
			cout << "����� �����ٸ� ��� ��� �� ���� ���¸� �������ּ���( 0 : ��� ����, 1 : 2����, 2 : 10����, 3 : 16���� ) : ";
			cin >> printOption;

			if (printOption == 0) { break; }

			else
			{
				loopGo = false;

				calculator.printResult(printOption);
				//����� �α� ����
				writer.writeLog(wirtePath);
			}
			break;

		case 3:
			cout << "�������� ���ڸ� �Է����ּ��� : ";
			cin >> num1;

			result = calculator.divideNum(preResult, num1);
			calculator.setResult(result);

			//�α׿� ���� ���
			writer.saveLog4Basic(calculateOption, preResult, num1, result);
			preResult = result;
			cout << "����� �����ٸ� ��� ��� �� ���� ���¸� �������ּ���( 0 : ��� ����, 1 : 2����, 2 : 10����, 3 : 16���� ) : ";
			cin >> printOption;

			if (printOption == 0) { break; }

			else
			{
				loopGo = false;

				calculator.printResult(printOption);
				//����� �α� ����
				writer.writeLog(wirtePath);
			}
			break;

		case 4:
			result = calculator.sqrtNum(preResult);
			calculator.setResult(result);

			//�α׿� ���� ���
			writer.saveLogElse(calculateOption, preResult, result);
			preResult = result;
			cout << "����� �����ٸ� ��� ��� �� ���� ���¸� �������ּ���( 0 : ��� ����, 1 : 2����, 2 : 10����, 3 : 16���� ) : ";
			cin >> printOption;

			if (printOption == 0) { break; }

			else
			{
				loopGo = false;

				calculator.printResult(printOption);
				//����� �α� ����
				writer.writeLog(wirtePath);
			}
			break;

		case 5:
			result = calculator.log10Num(preResult);
			calculator.setResult(result);

			//�α׿� ���� ���
			writer.saveLogElse(calculateOption, preResult, result);
			preResult = result;
			cout << "����� �����ٸ� ��� ��� �� ���� ���¸� �������ּ���( 0 : ��� ����, 1 : 2����, 2 : 10����, 3 : 16���� ) : ";
			cin >> printOption;

			if (printOption == 0) { break; }

			else
			{
				loopGo = false;

				calculator.printResult(printOption);
				//����� �α� ����
				writer.writeLog(wirtePath);
			}
			break;

		case 6:
			result = calculator.logeNum(preResult);
			calculator.setResult(result);

			//�α׿� ���� ���
			writer.saveLogElse(calculateOption, preResult, result);
			preResult = result;
			cout << "����� �����ٸ� ��� ��� �� ���� ���¸� �������ּ���( 0 : ��� ����, 1 : 2����, 2 : 10����, 3 : 16���� ) : ";
			cin >> printOption;

			if (printOption == 0) { break; }

			else
			{
				loopGo = false;

				calculator.printResult(printOption);
				//����� �α� ����
				writer.writeLog(wirtePath);
			}
			break;

		default:
			break;
		}
	}
	return 0;
}