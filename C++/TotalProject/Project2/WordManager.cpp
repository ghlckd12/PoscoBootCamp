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
	cout << "총 입력한 단어 개수 : " << m_wordVector.size();
}

bool WordManager::checkErrorInput(string word)
{
	if (m_lastWord == 'f') { return false; }

	if (m_lastWord != word[0])
	{
		cout << "잘못된 입력입니다." << endl;
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
			cout << "중복된 단어입니다." << endl;
			return true;
		}
	}
	return false;
}