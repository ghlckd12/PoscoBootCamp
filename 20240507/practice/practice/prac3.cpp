#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void main()
{
	ifstream file;

	file.open("members.txt");

	int cntLine = 0;
	// �о�� ���� ���� üũ �� ���� ���� �ʱ�ȭ
	if (file.is_open())
	{
		cout << "------------ȸ�� ��� ���� �б�------------" << endl;
		while (!file.eof())
		{
			string line;
			if (getline(file, line))
			{
				cntLine++;
			}
		}
	}

	else
	{
		cout << "Open Fail" << endl;
	}
	
	//���� �ݱ�
	file.close();
	
	// �迭�� �Է� �ޱ�
	vector <string> vName;
	vector <string> vPassword;

	ifstream readFile;
	readFile.open("members.txt");

	for (int i = 0; i < cntLine; i++)
	{
		string str;
		readFile >> str;
		vName.push_back(str);
		readFile >> str;
		vPassword.push_back(str);
	}

	// ���� ���� �ݱ�
	readFile.close();
	
	// �α��� ���� �Է��ϱ�
	string name;
	string password;

	int loopCnt = 0;
	
	while (true)
	{
		cout << "�̸��� �Է��ϼ��� : ";
		cin >> name;

		if (find(vName.begin(), vName.end(), name) == vName.end())
		{
			cout << "�̸��� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���!" << endl;
			continue;
		}

		else
		{
			cout << "��ȣ�� �Է��ϼ��� : ";
			cin >> password;
			if (find(vPassword.begin(), vPassword.end(), password) == vPassword.end())
			{
				cout << "�̸� Ȥ�� ��ȣ�� ��ġ���� �ʽ��ϴ�. �ٽ� �Է����ּ���!" << endl;
				continue;
			}
		}

		cout << "�α��� ����";
		break;
	}
}