#include <iostream>

using namespace std;

struct Reactangle
{
	double width = 0;
	double height = 0;
};

void main()
{
	Reactangle r;
	
	cout << "���� ���� ���̸� �Է��ϼ��� : ";
	cin >> r.width >> r.height;
	
	cout << "���� : " << (r.width * r.height);
}