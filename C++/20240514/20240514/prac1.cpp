#include "pch.h"
#include <iostream>

using namespace std;

class Monster
{
public:
	string m_Name;
	int m_HP;
	
private:
	int m_MP;

protected:
	int m_DEF;

public:
	int GetHP() { return m_HP; }
	int GetMP() { return m_MP; }

	virtual void Func() {}
};

class Fighter :public Monster
{
public:
	void Func() override
	{
		m_HP;
		m_MP;
		m_DEF;
	}
};

class Archer : private Monster
{
public:
	void Func() override
	{
		m_HP;
		m_MP;
		m_DEF;
	}
};

class Wizard : protected Monster
{
public:
	void Func() override
	{
		m_HP;
		m_MP;
		m_DEF;
	}
};

int main()
{
	Monster Temp_Monster;
	Fighter Temp_Fighter;
	Archer Temp_Archer;
	Wizard Temp_Wizard;

	Temp_Monster.m_HP;
	Temp_Monster.m_MP;
	Temp_Monster.m_DEF;

	Temp_Fighter.m_HP;
	Temp_Fighter.m_MP;
	Temp_Fighter.m_DEF;

	Temp_Archer.m_HP;
	Temp_Archer.m_MP;
	Temp_Archer.m_DEF;

	Temp_Wizard.m_HP;
	Temp_Wizard.m_MP;
	Temp_Wizard.m_DEF;

	return 0;


}