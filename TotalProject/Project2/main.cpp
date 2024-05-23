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

		cout << "�ܾ �Է��ϼ��� : ";
		cin >> word;
		clock_t endTime = clock();
		
		// ���� ó��(�߸��� �Է�, �ð��ʰ�, �ߺ� �ܾ� �ź�)
		//// �ð��ʰ�
		if (((endTime-startTime)/CLOCKS_PER_SEC) > 30)
		{ 
			cout << endl << "Ÿ�ӿ���!!!! ������ �����մϴ�!!!!!" << endl;
			wordManager.showTotalWordsLen();
			break;
		}

		//// �߸��� �Է�
		isError = wordManager.checkErrorInput(word);
		if (isError) { continue; }

		//// �ߺ� �ܾ� �ź�
		isError = wordManager.checkDupleInput(word);
		if (isError) { continue; }

		// �ܾ� ����, �� ���� ����
		wordManager.saveWordVector(word);
		wordManager.setLastWord(word);

		// ������ �ܾ� ���� ���
		wordManager.showSaveWords();


	}
}