#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void main()
{
	std::srand(time(NULL)); // �Ź� ���� ���� �����Ϸ��� srand() �Լ��� seed ����.
	
	int cnt = 0;
	int lottoNumArr[6];
	bool isError = false;

	while(cnt<6)
	{
		int randomNumber = std::rand();
		int num = randomNumber % 45 + 1;
		for (int lottoNum : lottoNumArr)
		{
			if (num == lottoNum)
			{
				isError = true;
			}
		}
		
		if (isError) continue;

		lottoNumArr[cnt] = num;
		cnt++;
	}

	cout << "��õ�� �ζ� ��ȣ�� ����մϴ�." << endl;
	for (int nn : lottoNumArr)
	{
		cout << nn << " ";
	}
}
