#pragma once
#include <vector>
#include <string>

#include "Weapon.h"

//using namespace std;
using std::vector;

class Character
{
public:
	Character(string name, int hp, int level) { m_name = name; m_hp = hp; m_level = level; };
	//~Character();

	void pickUpWeapon();
	void attack(Character &target);
	void takeDamage(int damage);
	bool checkWeaponNum();
	bool action(Character &target);
	void showWeapons();

	string getName();
	int getHp();

private:
	string m_name;
	int m_hp;
	int m_level;
	vector <Weapon*> m_weapones;

};