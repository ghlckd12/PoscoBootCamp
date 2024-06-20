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
		cout << "회원가입을 원하면 'OK' 원하지 않으면 'NO'를 입력해주세요." << endl;
		cin >> join;

		// 회원가입 진행
		if (join == "OK")
		{
			memberJoin(join);
			continue;
		}

		// 회원가입을 원하지 않으면 로그인 진행
		else if (join == "NO")
		{
			memberLogin();
		}

		cout << "종료를 원하면 'QUIT', 재시도를 원하면 'RE'를 입력해주세요" << endl;
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
	//수정하기~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
	string phoneNumber;

	ofstream readFile;
	readFile.open("member_tel.txt");
	readFile.seekp(0, ios_base::end);

	cout << "전화번호를 입력하세요 : ";
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

	// 읽어올 파일 오픈 체크 및 라인 개수 초기화
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

	//파일 닫기
	file.close();

	// 배열에 입력 받기
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

	// 리드 파일 닫기
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

	cout << "전화번호를 입력하세요 : ";
	cin >> phoneNumber;

	readFile << vName[idIdx] + " " + phoneNumber;

	readFile.close();
}

void memberLogin()
{
	ifstream file;

	file.open("members.txt");

	int cntLine = 0;

	// 읽어올 파일 오픈 체크 및 라인 개수 초기화
	if (file.is_open())
	{
		cout << "------------회원 명부 파일 읽기------------" << endl;
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

	//파일 닫기
	file.close();

	// 배열에 입력 받기
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

	// 리드 파일 닫기
	readFile.close();

	// 로그인 정보 입력하기
	string name;
	string password;

	int loopCnt = 0;

	while (loopCnt != 5)
	{
		cout << "---------------------------------------------" << endl;
		cout << "로그인에 5번 실패하면 프로그램을 종료합니다. 시도 회수 " << loopCnt << "/5" << endl;
		loopCnt++;
		cout << "이름을 입력하세요 : ";
		cin >> name;

		auto iter = find(vName.begin(), vName.end(), name);
		int idIdx = iter - vName.begin();

		if (iter == vName.end())
		{
			if (loopCnt == 5)
			{
				cout << "로그인 실패!" << endl;
				break;
			}

			cout << "이름이 존재하지 않습니다. 다시 입력해주세요!" << endl;
			continue;
		}

		else
		{
			cout << "암호를 입력하세요 : ";
			cin >> password;
			if (vPassword[idIdx] != password)
			{
				if (loopCnt == 5)
				{
					cout << "로그인 실패!" << endl;
					break;
				}
				cout << "이름 혹은 암호가 일치하지 않습니다. 다시 입력해주세요!" << endl;
				continue;
			}
		}

		cout << "로그인 성공!" << endl;

		//로그인 성공시 전화번호 입력 및 해당 회원 정보 저장
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

	// 읽어올 파일 오픈 체크 및 라인 개수 초기화
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

	//파일 닫기
	file.close();

	// 배열에 입력 받기
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

	// 리드 파일 닫기
	readFile.close();

	while (true)
	{
		// 회원 파일 오픈 체크
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

		cout << "회원에 대한 이름과 비밀번호를 공백으로 구분하여 입력해주세요." << endl;
		cin >> nameJoin >> passwordJoin;
		auto iter = find(vName.begin(), vName.end(), nameJoin);
		int idIdx = iter - vName.begin();

		if (iter != vName.end())
		{
			cout << "중복되는 아이디 입니다. 다시 아이디를 작성해주세요!" << endl;
			continue;
		}

		// 문자열 파일에 쓰기
		write_file.seekp(0, ios_base::end);
		write_file << "\n" + nameJoin + " " + passwordJoin;

		cout << "Welcome Join Us!" << endl;

		// 파일 닫기
		write_file.close();
		break;
	}
}