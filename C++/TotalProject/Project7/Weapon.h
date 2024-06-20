#pragma once
#include <iostream>

using namespace std;

class Weapon
{
public:
	Weapon(int damage, int usableCnt, string name) { m_damage = damage; m_usableCnt = usableCnt; m_name = name; }
	virtual ~Weapon() {}

	int attackUseWeapon();

	virtual void attack() const = 0;
	virtual int getDamage() const = 0;
	virtual int getUsableCnt() const = 0;
	virtual string getName() const = 0;

protected:
	int m_damage;
	int m_usableCnt;
	string m_name;
};

class Gun : public Weapon
{
public:
	Gun(int damage, int usableCnt, string name) : Weapon(damage, usableCnt, name) {}
	~Gun() {}
	void attack() const override;
	int getDamage() const override;
	int getUsableCnt() const override;
	string getName() const override;
};

class Sword : public Weapon
{
public:
	Sword(int damage, int usableCnt, string name) : Weapon(damage, usableCnt, name) {}
	~Sword() {}
	void attack() const override;
	int getDamage() const override;
	int getUsableCnt() const override;
	string getName() const override;
};