#include <fstream>
#include <iostream>
#include <queue>
#include <string>

#define NUM 3

using namespace std;

void main()
{
	// ť�� �Է� �ޱ�
	string name;
	string password;

	queue <string> qName;
	queue <string> qPassword;

	cout << "3���� ȸ���� ���� �̸��� ��й�ȣ�� �������� �����Ͽ� �Է����ּ���." << endl;
	
	for (int i = 0; i < NUM; i++)
	{
		cout << i + 1 << "��° ȸ��  :  ";
		cin >> name >> password;
		qName.push(name);
		qPassword.push(password);
	}

	// �� ���� ���� üũ
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

	// ť�� ���ڿ� ���Ͽ� ����
	for (int i = 0; i < NUM; i++)
	{
		write_file << qName.front() << " " << qPassword.front() << endl;
		qName.pop();
		qPassword.pop();
	}

	cout << "Writing success!" << endl;

	// ���� �ݱ�
	write_file.close();
	
	ifstream file;

	file.open("members.txt");

	// �о�� ���� ���� üũ
	if (file.is_open())
	{
		cout << "------------ȸ�� ��� ���� �б�------------" << endl;
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

	// ���� �ݱ�
	file.close();
}