//1. Rectangle 클래스 만들기
//2. 필드 : width, height
//3. 생성자 : width, height 설정할 2개의 숫자 매개변수로 받기
//4. 메소드 : width, height 이용한 사각형 넓이 area 메소드 만들기
//5. 객체 생성 시 width, height을 사용자에게 입력받아 생성자로 넘겨 주기

#include <iostream>

using namespace std;

class Rectangle
{
public:
	Rectangle(float width, float height) : m_width(width), m_height(height) {}
	float CalculateArea() { return m_width * m_height; }

private:
	float m_width;
	float m_height;
};

void main()
{
	float width, height;
	cout << "사각형의 가로와 세로 길이를 입력해주세요. (띄어쓰기로 구분) ";
	cin >> width >> height;

	Rectangle R(width, height);

	cout << "넓이는 : " << R.CalculateArea();
}