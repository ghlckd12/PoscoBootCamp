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
		cout << "���� �ٱ��Ͽ� ��� ������ ������ " << snackCount << "�� �Դϴ�." << endl;
	}

	void showSnackBucket()
	{
		cout << "���� �ٱ��Ͽ� ��� ���� Ȯ���ϱ�!" << endl;
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
		cout << "���� �ٱ��Ͽ� �߰��� ������ ���ÿ�.( 1: ����, 2: ���ݸ�, 0: ���� ) : ";
		cin >> option;

		switch (option)
		{
		case 0:
			break;

		case 1:
			cout << "���� �Է��ϼ���. : ";
			cin >> snackOption;
			snackBucket.addSnack(snackOption + "�� ����");
			break;

		case 2:
			cout << "����� �Է��ϼ���. : ";
			cin >> snackOption;
			snackBucket.addSnack(snackOption + "��� ���ݸ�");
			break;

		default:
			cout << "0~2 ������ ���ڸ� �Է��ϼ���." << endl;
			continue;
		}
	}
	snackBucket.showSnackBucketSize();
	snackBucket.showSnackBucket();
}