#include <string>
#include <iostream>

#include "WordManager.h"

void WordManager::setLastWord(string word)
{
	m_lastWord = word[(word.size()-1)];
}

void WordManager::saveWordVector(string word)
{
	m_wordVector.push_back(word);
}

void WordManager::showSaveWords()
{
	for (string v : m_wordVector)
	{
		cout << v;
		if (m_wordVector.back() == v) { break; }
		else { cout << "->"; }
	}
	cout << endl;
}

void WordManager::showTotalWordsLen()
{
	cout << "�� �Է��� �ܾ� ���� : " << m_wordVector.size();
}

bool WordManager::checkErrorInput(string word)
{
	if (m_lastWord == 'f') { return false; }

	if (m_lastWord != word[0])
	{
		cout << "�߸��� �Է��Դϴ�." << endl;
		return true;
	} 

	return false;
}

bool WordManager::checkDupleInput(string word)
{
	if (m_wordVector.empty()) { return false; }

	for (string v : m_wordVector)
	{
		if (v == word)
		{
			cout << "�ߺ��� �ܾ��Դϴ�." << endl;
			return true;
		}
	}
	return false;
}