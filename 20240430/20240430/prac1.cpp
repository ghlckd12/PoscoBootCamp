#include <iostream>
#include <string>
using namespace std;

void main()
{
	string s = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";

	// 2. ���ڿ��� ���� ���
	cout << s.length() << endl;

	// 3. 100��° ���� ���
	cout << s[99] << endl;

	// 4. "two" ���ڿ��� ó�� ������ index ���
	cout << s.find("two") << endl;

	// 5. "two" ���ڿ��� �� ��°�� ������ index ���
	cout << s.find("two", s.find("two")+1);

}