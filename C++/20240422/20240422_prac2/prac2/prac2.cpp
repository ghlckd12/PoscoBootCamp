// prac2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    int myAge;
    
    cout << "���̸� �Է��ϼ���.\n";

    cin >> myAge;

    if (myAge >= 1 && myAge <= 7)
    {
        cout << "����";
    }

    else if (myAge >= 8 && myAge <= 13)
    {
        cout << "�ʵ��л�";
    }

    else if (myAge >= 14 && myAge <= 16)
    {
        cout << "���л�";
    }

    else if (myAge >= 17 && myAge <= 19)
    {
        cout << "����л�";
    }

    else if (myAge >= 20)
    {
        cout << "����";
    }

    else if (myAge >= 200)
    {
        "���̰� �ʹ� �����ϴ�....";
    }
}

