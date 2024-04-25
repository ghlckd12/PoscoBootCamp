#include <iostream>
#include <string>
using namespace std;

void main()
{
	// 1. 몇 명의 학생 성적 평균을 구할 지 입력

	int numStudent;
	
	cout << "학생 수 입력 : ";
	cin >> numStudent;

	// 2. 입력받은 학생의 수 만큼 성적 입력

	double* studentArr = new double[numStudent]; // 동적 배열 선언

	for (int i = 0; i < numStudent; i++) // 입력한 학생 수 만큼 성적 입력
	{
		cout << i+1 << "번 학생의 성적을 입력하세요: ";
		cin >> studentArr[i];
	}

	// 3. 학생들의 성적 평균 산출
	double result_sum = 0;
	for (int i = 0; i < numStudent; i++)
	{
		result_sum += studentArr[i];
	}

	cout << "성적 평균 : " << result_sum / double(numStudent);
	delete[] studentArr;
}