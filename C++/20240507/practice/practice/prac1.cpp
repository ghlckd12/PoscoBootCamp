#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void main()
{
	ifstream file;

	file.open("hello.txt");

	// �о�� ���� ���� üũ
	if (file.is_open())
	{
		cout << "Open Success" << endl;
	}

	else
	{
		cout << "Open Fail" << endl;
	}

	// ���ڿ� ���Ϳ� ���� �о����
	vector <string> v;
	
	while (!file.eof())
	{
		string line;
		
		getline(file, line);

		v.push_back(line);
	}
	
	// ���� �ݱ�
	file.close();

	// �� ���� ���� üũ
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

	// ������ ���ڿ� ���Ͽ� ����
	vector<string>::reverse_iterator r_iter = v.rbegin();
	for (; r_iter != v.rend(); r_iter++)
	{
		write_file << *r_iter << endl;
	}

	cout << "Writing success!" << endl;

	// ���� �ݱ�
	write_file.close();
}