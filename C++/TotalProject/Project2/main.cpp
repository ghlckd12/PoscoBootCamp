#include <string>
#include <iostream>
#include <ctime>

#include "WordManager.h"

using namespace std;

int main()
{
	clock_t startTime = 0;
	bool isError = false;
	string word;

	WordManager wordManager;

	while (true)
	{
		if (isError == false)
		{ 
			clock_t startTime = clock(); 
		}

		cout << "단어를 입력하세요 : ";
		cin >> word;
		clock_t endTime = clock();
		
		// 예외 처리(잘못된 입력, 시간초과, 중복 단어 거부)
		//// 시간초과
		if (((endTime-startTime)/CLOCKS_PER_SEC) > 30)
		{ 
			cout << endl << "타임오버!!!! 게임을 종료합니다!!!!!" << endl;
			wordManager.showTotalWordsLen();
			break;
		}

		//// 잘못된 입력
		isError = wordManager.checkErrorInput(word);
		if (isError) { continue; }

		//// 중복 단어 거부
		isError = wordManager.checkDupleInput(word);
		if (isError) { continue; }

		// 단어 저장, 끝 글자 저장
		wordManager.saveWordVector(word);
		wordManager.setLastWord(word);

		// 저장한 단어 벡터 출력
		wordManager.showSaveWords();


	}
}