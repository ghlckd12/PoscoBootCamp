// 20240423_prac7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "1부터 n까지의 합 구하기\n";

    cout << "숫자(양의 정수)를 입력하세요 : ";
    int num;
    cin >> num;

    int result;

    result = (num * (num + 1)) / 2;
    cout << "1부터 " << num << "까지의 합은 : " << result << endl;
}
