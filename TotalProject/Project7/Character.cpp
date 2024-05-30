#include <iostream>

#include "Character.h"
//#include "Weapon.h"

using namespace std;

void Character::pickUpWeapon()
{
    int option;
    cout << "� ���⸦ �ݰڽ��ϱ�? (1) ��, (2) Į : ";
    cin >> option;

    switch (option)
    {
    case 1:
    {
        Gun gun(10, 1, "Gun");
        m_weapones.push_back(new Gun(10, 1, "Gun"));
        break;
    }

    case 2:
    {
        Sword sword(5, 3, "Sword");
        m_weapones.push_back(new Sword(5, 3, "Sword"));
        break;
    }

    default:
        break;
    }
}

void Character::showWeapons()
{
    for (int i = 0; i < m_weapones.size(); i++)
    {
        cout << i << "�� : " << m_weapones[i]->getName() << " | ���ݷ� : " << m_weapones[i]->getDamage() << " | ������ : " << m_weapones[i]->getUsableCnt() << endl;
    }
}

void Character::attack(Character &target)
{
    int itemIdx;
    cout << "�� ���� �������� ����ϰڽ��ϱ�?" << endl;
    showWeapons();
    cin >> itemIdx;
    m_weapones[itemIdx]->attack();
    target.takeDamage(m_weapones[itemIdx]->attackUseWeapon());
}

void Character::takeDamage(int damage)
{
    m_hp -= damage;
    if (m_hp <= 0)
    {
        cout << m_name << "���� ����� �������� ĳ���Ͱ� ����Ͽ����ϴ�!" << endl;
        m_hp = 0;
        return;
    }
    cout << m_name << "���� ���� ������ : " << damage << " | ���� HP : " << m_hp << endl;
}

bool Character::checkWeaponNum()
{
    if (m_weapones.size() == 0)
    {
        return false;
    }

    bool check = false;
    for (int i = 0; i < m_weapones.size(); i++)
    {
        if (m_weapones[i]->getUsableCnt()) // ��� ������ �������� 0�� �ƴϸ� true ��ȯ
        {
            check = true;
        }
    }

    return check;
}

bool Character::action(Character &target)
{
    int actionOption;
    bool existWeapon = checkWeaponNum();

    if (!existWeapon)
    {
        cout << m_name << "���� ��밡���� ���Ⱑ ��� �ݵ�� ���⸦ �ֿ��� �մϴ�!" << endl;
        pickUpWeapon();
        return true;
    }

    cout << "�ൿ�� ������ �ּ���. (1) �ݱ� (2) ���� : ";
    cin >> actionOption;

    switch (actionOption)
    {
    case 1:
        pickUpWeapon();
        break;

    case 2:
        attack(target);
        break;

    default:
        cout << "�ùٸ� �ൿ�� ������ �ּ���. (1) or (2)" << endl;
    }

    return true;
}

string Character::getName() { return m_name; }
int Character::getHp() { return m_hp; }