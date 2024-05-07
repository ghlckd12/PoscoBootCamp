#include <fstream>
#include <iostream>
#include <stack>
#include <string>

using namespace std;

void main()
{
	ifstream file;

	file.open("hello.txt");

	// 읽어올 파일 오픈 체크
	if (file.is_open())
	{
		cout << "Open Success" << endl;
	}

	else
	{
		cout << "Open Fail" << endl;
	}

	// 문자열 스택에 파일 읽어서 저장하기
	stack <string> stk;

	while (!file.eof())
	{
		string line;

		getline(file, line);

		stk.push(line);
	}

	// 파일 닫기
	file.close();

	// 쓸 파일 오픈 체크
	ofstream write_file;

	write_file.open("output.txt");

	if (write_file.is_open())
	{
		cout << "Open Success" << endl;
	}

	else
	{
		cout << "Open Fail" << endl;
	}

	// 스택의 문자열 파일에 쓰기
	for (int i = 0; i < stk.size(); i++)
	{
		write_file << stk.top() << endl;
		stk.pop();
	}

	cout << "Writing success!" << endl;

	// 파일 닫기
	write_file.close();
}