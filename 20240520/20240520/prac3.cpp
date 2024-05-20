#include <vector>
#include <string>
#include <iostream>

using namespace std;

class SnackBucket
{
	static int snackCount;

private:
	vector <string> m_snackVector;

public:
	SnackBucket(vector <string> snackVector) { m_snackVector = snackVector; }

	void addSnack(string snackName)
	{
		m_snackVector.push_back(snackName);
		snackCount++;
	}

	void showSnackBucketSize()
	{
		cout << "과자 바구니에 담긴 간식의 개수는 " << snackCount << "개 입니다." << endl;
	}

	void showSnackBucket()
	{
		cout << "과자 바구니에 담긴 간식 확인하기!" << endl;
		for (string v : m_snackVector)
		{
			cout << v << endl;
		}
	}
};

int SnackBucket::snackCount = 0;

int main()
{
	vector <string> snackVector;
	SnackBucket snackBucket(snackVector);

	int option = 1;
	string snackOption;

	while (option)
	{
		cout << "과자 바구니에 추가할 간식을 고르시오.( 1: 사탕, 2: 초콜릿, 0: 종료 ) : ";
		cin >> option;

		switch (option)
		{
		case 0:
			break;

		case 1:
			cout << "맛을 입력하세요. : ";
			cin >> snackOption;
			snackBucket.addSnack(snackOption + "맛 사탕");
			break;

		case 2:
			cout << "모양을 입력하세요. : ";
			cin >> snackOption;
			snackBucket.addSnack(snackOption + "모양 초콜릿");
			break;

		default:
			cout << "0~2 사이의 숫자를 입력하세요." << endl;
			continue;
		}
	}
	snackBucket.showSnackBucketSize();
	snackBucket.showSnackBucket();
}