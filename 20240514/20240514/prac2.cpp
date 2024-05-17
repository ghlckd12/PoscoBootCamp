#include "pch.h"
#include <iostream>

using namespace std;

class Monster
{
public:
	virtual void Attack()
	{
		cout << "나는 Monster를 공격합니다." << endl;
	}

	virtual ~Monster() {}
};

class Fighter : public Monster
{
public:
	void Attack() override
	{
		cout << "나는 Fighter를 공격합니다." << endl;
	}
};

class Archer : private Monster
{
public:
	void Attack() override
	{
		cout
	}
};