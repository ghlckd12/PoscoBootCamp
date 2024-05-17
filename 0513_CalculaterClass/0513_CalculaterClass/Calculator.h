#pragma once

class Calculator
{
public:
	Calculator(float result) { m_result = result; }
	~Calculator() {}

	void setResult(float result);

	float addNum(float num1, float num2);
	float subNum(float num1, float num2);
	float mulNum(float num1, float num2);
	float divideNum(float num1, float num2);

	float sqrtNum(float num1);
	float log10Num(float num1);
	float logeNum(float num1);

	void printResult(int printOption);

private:
	float m_result;
};