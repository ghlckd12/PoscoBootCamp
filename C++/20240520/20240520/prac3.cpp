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
		cout << m_flavor << "�� ����" << endl;
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
		cout << m_shape << "��� ���ݸ�" << endl;
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
		cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ�.( 1: ����, 2: ���ݸ�, 0: ����) : ";
		cin >> option;

		switch (option)
		{
		case 0:
			cout << "\n";
			cout << "���� �ٱ��Ͽ� ��� ������ ������ " << SnackBucket::snackCount << "�� �Դϴ�." << endl;
			cout << "���� �ٱ��Ͽ� ��� ���� Ȯ���ϱ�!" << endl;

			for (auto snack : snackBucket)
			{
				snack->showSnackBucket();
			}

			return 0;

		case 1:
			cout << "���� �Է��ϼ���. : ";
			cin >> snackOption;
			snackBucket.push_back(new Candy(snackOption));
			break;
		case 2:
			cout << "����� �Է��ϼ���. : ";
			cin >> snackOption;
			snackBucket.push_back(new Chocolate(snackOption));
			break;
		
		default:
			cout << "0~2 ������ ���ڸ� �Է��ϼ���." << endl;
			break;
		}
	}
}