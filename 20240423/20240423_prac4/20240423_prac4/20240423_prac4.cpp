// 20240423_prac4.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    double num1;
    double num2;
    int mode;

    cout << "�� ���� ������ �Է��ϼ���.\n";
    cin >> num1 >> num2;
    cout << "��带 �����ϼ���. 1: ����, 2: ����, 3: ����, 4: ������\n";
    cin >> mode;

    switch (mode) {
    case 1:
        cout << (num1 + num2) << endl;
        break;

    case 2:
        cout << (num1 - num2) << endl;
        break;

    case 3:
        cout << (num1 * num2) << endl;
        break;

    case 4:
        cout << (num1 / num2) << endl;
        break;
    }
}

