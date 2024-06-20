#pragma once

using namespace std;

class Calculator
{
public:
	void setResult(float result);
	void selectCalculate(char symbol, float userInput);
	void printResult();
	void clearResult();

private:
	float addNum(float num1, float num2);
	float subNum(float num1, float num2);
	float mulNum(float num1, float num2);
	float divideNum(float num1, float num2);

	float m_result;
};