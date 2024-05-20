#include <iostream>
#include <vector>

using namespace std;

class SnackBucket
{
public:
	SnackBucket() {}
	~SnackBucket() {}

	static int snackCount;
	virtual void showSnackBucket() {}
};

class Candy : public SnackBucket
{
private:
	string m_flavor;

public:
	Candy() {}
	~Candy() {}

	Candy(string flavor)
	{
		m_flavor = flavor;
		snackCount++;
	}

	void showSnackBucket() override
	{
		cout << m_flavor << "맛 사탕" << endl;
	}
};

class Chocolate : public SnackBucket
{
private:
	string m_shape;

public:
	Chocolate() {}
	~Chocolate() {}

	Chocolate(string shape)
	{
		m_shape = shape;
		snackCount++;
	}

	void showSnackBucket() override
	{
		cout << m_shape << "모양 초콜릿" << endl;
	}
};

int SnackBucket::snackCount = 0;

int main()
{
	int option = 1;
	string snackOption;
	vector<SnackBucket*> snackBucket;

	while (option)
	{
		cout << "과자 바구니에 추가할 간식을 고르시오.( 1: 사탕, 2: 초콜릿, 0: 종료) : ";
		cin >> option;

		switch (option)
		{
		case 0:
			cout << "\n";
			cout << "과자 바구니에 담긴 간식의 개수는 " << SnackBucket::snackCount << "개 입니다." << endl;
			cout << "과자 바구니에 담긴 간식 확인하기!" << endl;

			for (auto snack : snackBucket)
			{
				snack->showSnackBucket();
			}

			return 0;

		case 1:
			cout << "맛을 입력하세요. : ";
			cin >> snackOption;
			snackBucket.push_back(new Candy(snackOption));
			break;
		case 2:
			cout << "모양을 입력하세요. : ";
			cin >> snackOption;
			snackBucket.push_back(new Chocolate(snackOption));
			break;
		
		default:
			cout << "0~2 사이의 숫자를 입력하세요." << endl;
			break;
		}
	}
}