#include "pch.h"
#include <iostream>

using namespace std;

class Monster
{
public:
	virtual void Attack()
	{
		cout << "���� Monster�� �����մϴ�." << endl;
	}

	virtual ~Monster() {}
};

class Fighter : public Monster
{
public:
	void Attack() override
	{
		cout << "���� Fighter�� �����մϴ�." << endl;
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