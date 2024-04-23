//
// 작성자 : 김회창
// 작성일자 : 2024. 04. 22
//
// main 문이 있는 파일

#include <iostream>
#include <string>
using namespace std;

// 프로그램 전체 에서 딱 1개만 존재하는 함수
// 프로그램에서 가장 먼저 실행
int main()
{	
	// 콘솔 문자 출력
	cout << "이름을 입력하세요.\n";

	string myName;
	// 콘솔 문자 입력

	cin >> myName;

	// 콘솔 문자 출력
	cout << "나이를 입력하세요.\n";

	string myAge;
	// 콘솔 문자 입력

	cin >> myAge;

	cout << "안녕하세요! " << myName << "님(" << myAge << "세)";

	return 0;
}