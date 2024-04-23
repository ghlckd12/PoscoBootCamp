// 20240423_prac5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "숫자를 입력해주세요.\n";
    
    int num;
    cin >> num;

    if (num % 5 == 0)
    {
        cout << num << "는 5의 배수입니다.";
    }

    else
    {
        cout << num << "는 5의 배수가 아니네요ㅜㅜ";
    }
}

