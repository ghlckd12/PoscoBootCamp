#include <iostream>

#include "Calculator.h"

void Calculator::setResult(float result) { m_result = result; }

void Calculator::selectCalculate(char symbol, float userInput)
{
    if (symbol == '+')
    {
        m_result = addNum(m_result, userInput);
    }

    else if (symbol == '-')
    {
        m_result = subNum(m_result, userInput);
    }

    else if (symbol == '*')
    {
        m_result = mulNum(m_result, userInput);
    }

    else if (symbol == '/')
    {
        m_result = divideNum(m_result, userInput);
    }
}

// 사칙연산
float Calculator::addNum(float num1, float num2) { return num1 + num2; }

float Calculator::subNum(float num1, float num2) { return num1 - num2; }

float Calculator::mulNum(float num1, float num2) { return num1 * num2; }

float Calculator::divideNum(float num1, float num2) { return num1 / num2; }

void Calculator::printResult()
{
    cout << "출력 결과 : " << m_result << endl;
}

void Calculator::clearResult() { m_result = 0.0; }