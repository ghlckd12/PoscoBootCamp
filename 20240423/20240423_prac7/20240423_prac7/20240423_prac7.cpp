// 20240423_prac7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "1���� n������ �� ���ϱ�\n";

    cout << "����(���� ����)�� �Է��ϼ��� : ";
    int num;
    cin >> num;

    int result;

    result = (num * (num + 1)) / 2;
    cout << "1���� " << num << "������ ���� : " << result << endl;
}
