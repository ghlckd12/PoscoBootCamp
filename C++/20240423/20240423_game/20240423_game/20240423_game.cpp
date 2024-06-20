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
        cout << "숫자를 입력하세요 : ";
        cin >> num;

        if (num < goal)
        {
            cout << "더 큰 숫자를 입력하세요.";
        }
        
        else if (num > goal)
        {
            cout << "더 작은 숫자를 입력하세요.";
        }

        else
        {
            cout << "정답입니다!";
            break;
        }
    }
}
