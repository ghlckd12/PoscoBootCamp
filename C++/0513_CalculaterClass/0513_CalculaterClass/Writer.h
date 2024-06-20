#pragma once
#include <string>

using namespace std;

class Writer
{
public:
	Writer(string log) { m_log = log; }
	~Writer() {}
	
	void saveLog4Basic(int calculateOption, float preResult, float num1, float result);
	void saveLogElse(int calculateOption, float preResult, float result);

	void writeLog(string writePath);

private:
	string m_log;
};