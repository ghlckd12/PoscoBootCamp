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
	
	while (true)
	{
		cout << "이름을 입력하세요 : ";
		cin >> name;

		auto iter = find(vName.begin(), vName.end(), name);
		if (iter == vName.end())
		{
			cout << "이름이 존재하지 않습니다. 다시 입력해주세요!" << endl;
			continue;
		}
		
		else
		{
			int idIdx = iter - vName.begin();
			cout << "암호를 입력하세요 : ";
			cin >> password;
			if (vPassword[idIdx] != password)
			{
				cout << "이름 혹은 암호가 일치하지 않습니다. 다시 입력해주세요!" << endl;
				continue;
			}
		}

		cout << "로그인 성공";
		break;
	}
}