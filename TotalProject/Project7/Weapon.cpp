#include "Weapon.h"

int Weapon::attackUseWeapon()
{
    if (m_usableCnt > 0) {
        --m_usableCnt;
    }
    else {
        std::cout << "�� ���⸦ �� ����� �� �����ϴ�." << std::endl;
    }

    return m_damage;
}

void Sword::attack() const
{
	std::cout << "!!!!!!!!!���!!!!!!!!!" << std::endl;
}

void Gun::attack() const
{
	std::cout << "!!!!!!!!!�ѽ��!!!!!!!!!" << std::endl;
}

int Sword::getDamage() const { return m_damage; }
int Gun::getDamage() const { return m_damage; }

int Sword::getUsableCnt() const { return m_usableCnt; }
int Gun::getUsableCnt() const { return m_usableCnt; }

string Sword::getName() const { return m_name; }
string Gun::getName() const { return m_name; }