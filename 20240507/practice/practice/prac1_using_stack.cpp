#include <fstream>
#include <iostream>
#include <stack>
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

	// ���ڿ� ���ÿ� ���� �о �����ϱ�
	stack <string> stk;

	while (!file.eof())
	{
		string line;

		getline(file, line);

		stk.push(line);
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
	for (int i = 0; i < stk.size(); i++)
	{
		write_file << stk.top() << endl;
		stk.pop();
	}

	cout << "Writing success!" << endl;

	// ���� �ݱ�
	write_file.close();
}