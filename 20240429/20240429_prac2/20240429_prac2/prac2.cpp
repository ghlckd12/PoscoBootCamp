#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

void main()
{
	vector<int> myVector = { 10, 20, 30, 20, 40, 10, 50 };

	//오름차순 정렬(sorting)
	sort(myVector.begin(), myVector.end());

	//set(중복제거)하기
	myVector.erase(unique(myVector.begin(), myVector.end()), myVector.end());

	vector<int>::iterator itr = myVector.begin();

	for (itr; itr != myVector.end(); itr++)
	{
		cout << *itr << "\t";
	}
}