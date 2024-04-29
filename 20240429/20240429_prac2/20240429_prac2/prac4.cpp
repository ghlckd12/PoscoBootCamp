#include <iostream>
#include <string>
#include <list>
using namespace std;

int find4(list<int> list)
{
	int cnt = 0;
	for (int element : list)
	{
		if (element == 4)
		{
			cnt += 1;
		}
	}
	
	return cnt;
}

void printList(list<int> myList)
{
	for (list<int>::iterator it = myList.begin(); it != myList.end(); ++it)
	{
		cout << *it << " ";
	}
	cout << "\n";
}

void main()
{
	list<int> myList = { 5,4,3,4,2,1,1 };

	// 2. 4가 몇 개인지 출력
	cout << "4가 몇 개 인가요? : " << find4(myList) << endl;

	// 3. 오름차순 정렬
	myList.sort();

	cout << "오름차 순 정렬 결과" << endl;
	printList(myList);

	// 4. 중복 제거
	cout << "중복 제거 결과" << endl;
	myList.unique();
	printList(myList);

	// 5. 가장 뒤에 요소 6, 7 추가
	cout << "가장 뒤에 요소 6,7 추가 결과" << endl;
	myList.push_back(6);
	myList.push_back(7);
	printList(myList);

	// 6. 가장 앞에 요소 0 추가
	cout << "가장 앞에 요소 0 추가 결과" << endl;
	myList.push_front(0);
	printList(myList);
}