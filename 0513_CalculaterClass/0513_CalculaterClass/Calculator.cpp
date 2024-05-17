#include <iostream>
#include <cmath>
#include <bitset>
#include <string>
#include <sstream>
#include <iomanip>
#include <cstring>

#include "Calculator.h"

using namespace std;

void Calculator::setResult(float result) { m_result = result; }

// ��Ģ����
float Calculator::addNum(float num1, float num2) { return num1 + num2; }

float Calculator::subNum(float num1, float num2) { return num1 - num2; }

float Calculator::mulNum(float num1, float num2) { return num1 * num2; }

float Calculator::divideNum(float num1, float num2) { return num1 / num2; }

// ������
float Calculator::sqrtNum(float num1) { return sqrt(num1); }

// �α�(���, �ڿ�)
float Calculator::log10Num(float num1) { return log10(num1); }

float Calculator::logeNum(float num1) { return log(num1); }

void Calculator::printResult(int printOption)
{
    stringstream ss;
    switch (printOption)
    {
    case 1:
    {
        union
        {
            float input;
            uint32_t output;
        }
        data;
        data.input = m_result;
        bitset<32> bits(data.output);
        cout << "2���� ��� ��� : " << bits.to_string() << endl;
        break;
    }

    case 2:
    {
        cout << "10���� ��� ��� : " << m_result << endl;
        break;
    }

    case 3:
    {
        ss << hexfloat << m_result;
        cout << "16���� ��� ��� : " << ss.str() << endl;
        break;
    }

    default:
        cout << "!!!��� ����!!! 0 : ��� ����, 1 : 2����, 2 : 10����, 3 : 16���� �� �������ּ���" << endl;
        break;
    }
}