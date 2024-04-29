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

	// 2. 4�� �� ������ ���
	cout << "4�� �� �� �ΰ���? : " << find4(myList) << endl;

	// 3. �������� ����
	myList.sort();

	cout << "������ �� ���� ���" << endl;
	printList(myList);

	// 4. �ߺ� ����
	cout << "�ߺ� ���� ���" << endl;
	myList.unique();
	printList(myList);

	// 5. ���� �ڿ� ��� 6, 7 �߰�
	cout << "���� �ڿ� ��� 6,7 �߰� ���" << endl;
	myList.push_back(6);
	myList.push_back(7);
	printList(myList);

	// 6. ���� �տ� ��� 0 �߰�
	cout << "���� �տ� ��� 0 �߰� ���" << endl;
	myList.push_front(0);
	printList(myList);
}