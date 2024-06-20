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
	
	cout << "가로 세로 길이를 입력하세요 : ";
	cin >> r.width >> r.height;
	
	cout << "넓이 : " << (r.width * r.height);
}