#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

void main()
{
	std::srand(time(NULL)); // 매번 같은 값을 생성하려면 srand() 함수에 seed 전달.
	
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

	cout << "추천한 로또 번호를 출력합니다." << endl;
	for (int nn : lottoNumArr)
	{
		cout << nn << " ";
	}
}
