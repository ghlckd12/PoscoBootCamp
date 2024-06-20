#include <iostream>

#include "Character.h"
//#include "Weapon.h"

using namespace std;

void Character::pickUpWeapon()
{
    int option;
    cout << "어떤 무기를 줍겠습니까? (1) 총, (2) 칼 : ";
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
        cout << i << "번 : " << m_weapones[i]->getName() << " | 공격력 : " << m_weapones[i]->getDamage() << " | 내구도 : " << m_weapones[i]->getUsableCnt() << endl;
    }
}

void Character::attack(Character &target)
{
    int itemIdx;
    cout << "몇 번의 아이템을 사용하겠습니까?" << endl;
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
        cout << m_name << "님이 방금의 공격으로 캐릭터가 사망하였습니다!" << endl;
        m_hp = 0;
        return;
    }
    cout << m_name << "님이 받은 데미지 : " << damage << " | 현재 HP : " << m_hp << endl;
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
        if (m_weapones[i]->getUsableCnt()) // 모든 무기의 내구도가 0이 아니면 true 반환
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
        cout << m_name << "님은 사용가능한 무기가 없어서 반드시 무기를 주워야 합니다!" << endl;
        pickUpWeapon();
        return true;
    }

    cout << "행동을 선택해 주세요. (1) 줍기 (2) 공격 : ";
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
        cout << "올바른 행동을 선택해 주세요. (1) or (2)" << endl;
    }

    return true;
}

string Character::getName() { return m_name; }
int Character::getHp() { return m_hp; }