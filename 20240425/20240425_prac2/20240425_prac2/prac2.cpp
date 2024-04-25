#include <iostream>
#include <string>
using namespace std;


void reverse(int *arrReference)
{
	int tempArr[5];
	for (int idx = 0; idx < 5; idx++)
	{
		tempArr[idx] = *(arrReference + idx);
	}

	int j = 0;

	for (int i = 4; i >= 0; i--)
	{
		int temp = tempArr[i];
		*(arrReference+j) = temp;
		j++;
	}
}


void main()
{
	int iArr[5] = { 1,2,3,4,5 };
	
	// arrReference에 iArr 주소 값 저장
	int* arrReference = & iArr[0];
	reverse(&arrReference[0]);
	for (int i = 0; i < 5; i++)
	{
		cout << *(arrReference+i);
	}
}