#include <stdio.h>
#include <time.h>
#include <iostream>

using namespace std;

void main()
{
	time_t start, end;
	double result;

	start = time(NULL);

	for (int i = 0; i < 200000; i++)
	{
		cout << i << endl;
	}

	end = time(NULL);

	result = double (end - start);

	cout << "수행 시간 : " << result << " sec" << "\n";

	clock_t start1, end1;
	double result1;

	start1 = clock();

	end1 = clock();
	for (int i = 0; i < 200000; i++)
	{
		cout << i << endl;
	}

	result1 = double(end1 - start1);

	cout << "수행 시간 : " << (result1 / CLOCKS_PER_SEC) << " sec" << "\n";

}