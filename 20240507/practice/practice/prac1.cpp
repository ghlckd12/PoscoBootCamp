#include <fstream>
#include <iostream>
#include <vector>
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

	// 문자열 벡터에 파일 읽어오기
	vector <string> v;
	
	while (!file.eof())
	{
		string line;
		
		getline(file, line);

		v.push_back(line);
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

	// 벡터의 문자열 파일에 쓰기
	vector<string>::reverse_iterator r_iter = v.rbegin();
	for (; r_iter != v.rend(); r_iter++)
	{
		write_file << *r_iter << endl;
	}

	cout << "Writing success!" << endl;

	// 파일 닫기
	write_file.close();
}