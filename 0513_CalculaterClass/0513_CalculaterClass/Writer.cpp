#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <sstream>

#include "Writer.h"
#include "Calculator.h"

using namespace std;

void Writer::saveLog4Basic(int calculateOption, float preResult, float num1, float result)
{
	switch (calculateOption)
	{
	case 0:
		cout << preResult << " + " << num1 << " = " << result << endl;
		m_log += to_string(preResult) + " + " + to_string(num1) + " = " + to_string(result) + "\n";
		break;

	case 1:
		cout << preResult << " - " << num1 << " = " << result << endl;
		m_log += to_string(preResult) + " - " + to_string(num1) + " = " + to_string(result) + "\n";
		break;

	case 2:
		cout << preResult << " * " << num1 << " = " << result << endl;
		m_log += to_string(preResult) + " * " + to_string(num1) + " = " + to_string(result) + "\n";
		break;

	case 3:
		cout << preResult << " / " << num1 << " = " << result << endl;
		m_log += to_string(preResult) + " / " + to_string(num1) + " = " + to_string(result) + "\n";
		break;

	default:
		break;
	}
}

void Writer::saveLogElse(int calculateOption, float preResult, float result)
{
	switch (calculateOption)
	{
	case 4:
		cout << preResult << "�� ������ �� : " << result << endl;
		m_log += to_string(preResult) + "�� ������ ó�� = " + to_string(result) + "\n";
		break;

	case 5:
		cout << preResult << "�� ���α� �� : " << result << endl;
		m_log += to_string(preResult) + "�� ���α� ó�� = " + to_string(result) + "\n";
		break;

	case 6:
		cout << preResult << "�� �ڿ��α� �� : " << result << endl;
		m_log += to_string(preResult) + "�� �ڿ��α� ó�� = " + to_string(result) + "\n";
		break;

	default:
		break;
	}
}

string getCurrentDateTime()
{
	time_t now = time(0);
	tm localtm;
	localtime_s(&localtm, &now);

	ostringstream oss;
	oss << (localtm.tm_year + 1900)
		<< (localtm.tm_mon + 1)
		<< localtm.tm_mday << "_"
		<< (localtm.tm_hour < 10 ? "0" : "") << localtm.tm_hour
		<< (localtm.tm_min < 10 ? "0" : "") << localtm.tm_min
		<< (localtm.tm_sec < 10 ? "0" : "") << localtm.tm_sec;

	return oss.str();
}

void Writer::writeLog(string writePath)
{
	ofstream write_file;

	writePath = writePath + getCurrentDateTime() + ".txt";
	write_file.open(writePath);

	if (write_file.is_open())
	{
		write_file << m_log;
		cout << "�α� ���忡 �����Ͽ����ϴ�. ���α׷��� �����մϴ�.";
	}

	else
	{
		cout << "Open Fail" << endl;
	}
}

