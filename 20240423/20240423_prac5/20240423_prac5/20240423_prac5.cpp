// 20240423_prac5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "���ڸ� �Է����ּ���.\n";
    
    int num;
    cin >> num;

    cout << num << ((num % 5 == 0) ? "�� 5�� ����Դϴ�." : "�� 5�� ����� �ƴϳ׿� �̤�");
    
}

