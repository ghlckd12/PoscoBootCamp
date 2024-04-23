// prac3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "이름을 입력하세요.\n";

    string myName;
    cin >> myName;

    if (myName == "홍길동")
    {
        cout << "남자";
    }

    else if (myName == "성춘향")
    {
        cout << "여자";
    }

    else
    {
        cout << "모르겠어요.";
    }
}
