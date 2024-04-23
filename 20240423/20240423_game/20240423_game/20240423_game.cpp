// 20240423_game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <random>
using namespace std;

int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> dis(0, 99);
    int goal = dis(gen);
    int num;

    while (1)
    {
        cout << "���ڸ� �Է��ϼ��� : ";
        cin >> num;

        if (num < goal)
        {
            cout << "�� ū ���ڸ� �Է��ϼ���.";
        }
        
        else if (num > goal)
        {
            cout << "�� ���� ���ڸ� �Է��ϼ���.";
        }

        else
        {
            cout << "�����Դϴ�!";
            break;
        }
    }
}
