#pragma once
#include <string>
#include <vector>

using namespace std;

class WordManager
{
public:
	WordManager() { m_lastWord = 'f'; }
	~WordManager() {}

	void setLastWord(string word);
	void saveWordVector(string word);
	void showSaveWords();
	void showTotalWordsLen();
	bool checkErrorInput(string word);
	bool checkDupleInput(string word);

private:
	vector <string> m_wordVector;
	char m_lastWord;
};