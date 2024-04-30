#include <iostream>
#include <string>
using namespace std;

void main()
{
	string s = "Police say two people are suspected of trying to create a shortcut for their construction work.The two have been detained and the case is under further investigation.The 38-year-old man and 55-year-old woman were working near the affected area, the 32nd Great Wall.";

	// 2. 문자열의 길이 출력
	cout << s.length() << endl;

	// 3. 100번째 문자 출력
	cout << s[99] << endl;

	// 4. "two" 문자열이 처음 나오는 index 출력
	cout << s.find("two") << endl;

	// 5. "two" 문자열이 두 번째로 나오는 index 출력
	cout << s.find("two", s.find("two")+1);

}