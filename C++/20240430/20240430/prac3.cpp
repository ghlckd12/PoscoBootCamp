#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void main()
{
	// 1. ���ڿ� ����
	string s = "Codingon";

	// 2. ù ��° ���� �ҹ��ڷ� ����
	s[0] = tolower(s[0]);

	cout << s << endl;

	// 3. "ding"�̶�� �κ� ���ڿ� ��ȯ
	cout << s.substr(2, 4) << endl;

	// 4. "coooooon"�� �ǵ��� ����
	int cnt = 0;
	for (char c : s)
	{
		if (cnt > 1 && cnt < 7)
		{
			s[cnt] = s[1];
		}
		cnt++;
	}

	cout << s << endl;

	// 5. "con"�� �ǵ��� ����(�ߺ� ����)
	s.erase(unique(s.begin(), s.end()), s.end());
	cout << s;
}