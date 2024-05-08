#include <fstream>
#include <iostream>
#include <vector>
#include <string>

using namespace std;

void memberJoin(string join);
void memberLogin();
void writePhoneNumber();

int main()
{
	while (true)
	{
		string join;
		cout << "---------------------------------------------" << endl;
		cout << "ȸ�������� ���ϸ� 'OK' ������ ������ 'NO'�� �Է����ּ���." << endl;
		cin >> join;

		// ȸ������ ����
		if (join == "OK")
		{
			memberJoin(join);
			continue;
		}

		// ȸ�������� ������ ������ �α��� ����
		else if (join == "NO")
		{
			memberLogin();
		}

		cout << "���Ḧ ���ϸ� 'QUIT', ��õ��� ���ϸ� 'RE'�� �Է����ּ���" << endl;
		string quit;
		cin >> quit;

		if (quit == "QUIT")
		{
			break;
		}

		else if (quit == "RE")
		{
			continue;
		}
	}

	return 0;
}

void editPhoneNumber(int idIdx, vector <string> vName)
{
	//�����ϱ�~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	string phoneNumber;

	ofstream readFile;
	readFile.open("member_tel.txt");
	readFile.seekp(0, ios_base::end);

	cout << "��ȭ��ȣ�� �Է��ϼ��� : ";
	cin >> phoneNumber;

	readFile << vName[idIdx] + " " + phoneNumber;

	readFile.close();
}

bool isExistPhoneNumber(string name)
{
	bool exist = false;

	ifstream file;

	file.open("member_tel.txt");

	int cntLine = 0;

	// �о�� ���� ���� üũ �� ���� ���� �ʱ�ȭ
	if (file.is_open())
	{
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

	ifstream readFile;
	readFile.open("member_tel.txt");

	for (int i = 0; i < cntLine; i++)
	{
		string str;
		readFile >> str;
		vName.push_back(str);
		readFile >> str;
	}

	// ���� ���� �ݱ�
	readFile.close();

	auto iter = find(vName.begin(), vName.end(), name);
	int idIdx = iter - vName.begin();

	if (iter != vName.end())
	{
		exist = true;
	}

	return exist;
}

void writePhoneNumber(int idIdx, vector <string> vName)
{
	string phoneNumber;

	ofstream readFile;
	readFile.open("member_tel.txt");
	readFile.seekp(0, ios_base::end);

	cout << "��ȭ��ȣ�� �Է��ϼ��� : ";
	cin >> phoneNumber;

	readFile << vName[idIdx] + " " + phoneNumber;

	readFile.close();
}

void memberLogin()
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

	while (loopCnt != 5)
	{
		cout << "---------------------------------------------" << endl;
		cout << "�α��ο� 5�� �����ϸ� ���α׷��� �����մϴ�. �õ� ȸ�� " << loopCnt << "/5" << endl;
		loopCnt++;
		cout << "�̸��� �Է��ϼ��� : ";
		cin >> name;

		auto iter = find(vName.begin(), vName.end(), name);
		int idIdx = iter - vName.begin();

		if (iter == vName.end())
		{
			if (loopCnt == 5)
			{
				cout << "�α��� ����!" << endl;
				break;
			}

			cout << "�̸��� �������� �ʽ��ϴ�. �ٽ� �Է����ּ���!" << endl;
			continue;
		}

		else
		{
			cout << "��ȣ�� �Է��ϼ��� : ";
			cin >> password;
			if (vPassword[idIdx] != password)
			{
				if (loopCnt == 5)
				{
					cout << "�α��� ����!" << endl;
					break;
				}
				cout << "�̸� Ȥ�� ��ȣ�� ��ġ���� �ʽ��ϴ�. �ٽ� �Է����ּ���!" << endl;
				continue;
			}
		}

		cout << "�α��� ����!" << endl;

		//�α��� ������ ��ȭ��ȣ �Է� �� �ش� ȸ�� ���� ����
		if (isExistPhoneNumber(vName[idIdx]))
		{
			editPhoneNumber(idIdx, vName);
		}

		writePhoneNumber(idIdx, vName);
		break;
	}
}

void memberJoin(string join)
{
	ifstream file;

	file.open("members.txt");

	int cntLine = 0;

	// �о�� ���� ���� üũ �� ���� ���� �ʱ�ȭ
	if (file.is_open())
	{
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

	ifstream readFile;
	readFile.open("members.txt");

	for (int i = 0; i < cntLine; i++)
	{
		string str;
		readFile >> str;
		vName.push_back(str);
		readFile >> str;
	}

	// ���� ���� �ݱ�
	readFile.close();

	while (true)
	{
		// ȸ�� ���� ���� üũ
		ofstream write_file;

		write_file.open("members.txt", ios_base::out | ios_base::app);

		if (write_file.is_open())
		{
			cout << "Open Success" << endl;
		}

		else
		{
			cout << "Open Fail" << endl;
		}

		string nameJoin;
		string passwordJoin;

		cout << "ȸ���� ���� �̸��� ��й�ȣ�� �������� �����Ͽ� �Է����ּ���." << endl;
		cin >> nameJoin >> passwordJoin;
		auto iter = find(vName.begin(), vName.end(), nameJoin);
		int idIdx = iter - vName.begin();

		if (iter != vName.end())
		{
			cout << "�ߺ��Ǵ� ���̵� �Դϴ�. �ٽ� ���̵� �ۼ����ּ���!" << endl;
			continue;
		}

		// ���ڿ� ���Ͽ� ����
		write_file.seekp(0, ios_base::end);
		write_file << "\n" + nameJoin + " " + passwordJoin;

		cout << "Welcome Join Us!" << endl;

		// ���� �ݱ�
		write_file.close();
		break;
	}
}