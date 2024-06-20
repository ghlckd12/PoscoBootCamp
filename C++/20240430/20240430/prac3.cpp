#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void main()
{
	// 1. 문자열 정의
	string s = "Codingon";

	// 2. 첫 번째 문자 소문자로 변경
	s[0] = tolower(s[0]);

	cout << s << endl;

	// 3. "ding"이라는 부분 문자열 반환
	cout << s.substr(2, 4) << endl;

	// 4. "coooooon"이 되도록 변경
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

	// 5. "con"이 되도록 변경(중복 제거)
	s.erase(unique(s.begin(), s.end()), s.end());
	cout << s;
}