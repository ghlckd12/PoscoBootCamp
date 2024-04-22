// prac2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int myAge;
    
    cout << "나이를 입력하세요.\n";

    cin >> myAge;

    if (myAge >= 1 && myAge <= 7)
    {
        cout << "유아";
    }

    else if (myAge >= 8 && myAge <= 13)
    {
        cout << "초등학생";
    }

    else if (myAge >= 14 && myAge <= 16)
    {
        cout << "중학생";
    }

    else if (myAge >= 17 && myAge <= 19)
    {
        cout << "고등학생";
    }

    else if (myAge >= 20)
    {
        cout << "성인";
    }

    else if (myAge >= 200)
    {
        "나이가 너무 많습니다....";
    }
}

