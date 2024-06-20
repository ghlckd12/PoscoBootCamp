#include <iostream>
#include <vector>

#include "NumManager.h"
#include "Computer.h"

using namespace std;

int main()
{
	int nobNum;
	int lastNum = 0;

	Number number;
	number.setLastNum(0);
	
	Computer computer;

	while (true)
	{
		lastNum = number.getLastNum();
		cout << "1,2,3 �� �� ���� ���� �Է��ϰڽ��ϱ�? : ";
		cin >> nobNum;

		if (0 < nobNum && nobNum <= 3)
		{
			for (int i = 0; i < nobNum; i++)
			{
				lastNum++;
				cout << lastNum << endl;
				if (lastNum == 31)
				{
					cout << "���� ����! ��ǻ���� �¸��Դϴ�.";
					return 0;
				}
			}
		}
		
		else
		{
			cout << "1~3 ������ ���� �Է��ϼ���!" << endl;
			continue;
		}

		
		number.setLastNum(lastNum);
		
		// ��ǻ�� ���� �� ���� ��������
		vector <int> randomVector = computer.getRandomNumVector(lastNum);
		cout << "��ǻ�Ͱ� �θ� ���� ! " << computer.getRandom() << endl;

		for (int v : randomVector)
		{
			if (v == 31)
			{
				cout << v << endl;
				cout << "���� ����! ������� �¸��Դϴ�.";
				return 0;
			}

			number.setLastNum(v);
			cout << v << endl;
			computer.numVectorClear();
		}
		
	}
}