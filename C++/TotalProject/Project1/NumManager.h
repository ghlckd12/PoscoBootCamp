#pragma once

class Number
{
public:
	Number() {}
	~Number() {}
	
	int getLastNum();
	void setLastNum(int lastNum);
	
private:
	int m_lastNumber;
};