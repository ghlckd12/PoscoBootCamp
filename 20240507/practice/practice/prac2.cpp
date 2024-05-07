#include <fstream>
#include <iostream>
#include <queue>
#include <string>

#define NUM 3

using namespace std;

void main()
{
	// 큐에 입력 받기
	string name;
	string password;

	queue <string> qName;
	queue <string> qPassword;

	cout << "3명의 회원에 대한 이름과 비밀번호를 공백으로 구분하여 입력해주세요." << endl;
	
	for (int i = 0; i < NUM; i++)
	{
		cout << i + 1 << "번째 회원  :  ";
		cin >> name >> password;
		qName.push(name);
		qPassword.push(password);
	}

	// 쓸 파일 오픈 체크
	ofstream write_file;

	write_file.open("members.txt");

	if (write_file.is_open())
	{
		cout << "Open Success" << endl;
	}

	else
	{
		cout << "Open Fail" << endl;
	}

	// 큐의 문자열 파일에 쓰기
	for (int i = 0; i < NUM; i++)
	{
		write_file << qName.front() << " " << qPassword.front() << endl;
		qName.pop();
		qPassword.pop();
	}

	cout << "Writing success!" << endl;

	// 파일 닫기
	write_file.close();
	
	ifstream file;

	file.open("members.txt");

	// 읽어올 파일 오픈 체크
	if (file.is_open())
	{
		cout << "------------회원 명부 파일 읽기------------" << endl;
	}

	else
	{
		cout << "Open Fail" << endl;
	}
		
	while (!file.eof())
	{
		string line;
		getline(file, line);
		cout << line << endl;
	}

	// 파일 닫기
	file.close();
}