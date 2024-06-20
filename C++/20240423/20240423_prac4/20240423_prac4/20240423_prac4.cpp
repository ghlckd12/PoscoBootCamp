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

    cout << "µÎ °³ÀÇ º¯¼ö¸¦ ÀÔ·ÂÇÏ¼¼¿ä.\n";
    cin >> num1 >> num2;
    cout << "¸ðµå¸¦ ¼±ÅÃÇÏ¼¼¿ä. 1: µ¡¼À, 2: »¬¼À, 3: °ö¼À, 4: ³ª´°¼À\n";
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

