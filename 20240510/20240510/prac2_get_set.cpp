//1. prac1에서 만든 Rectangle 클래스에 get, set 선언
//2. 필드 : width, height
//3. 생성자 : width, height 설정할 2개의 숫자 매개변수로 받기
//4. 메소드 : width, height 이용한 사각형 넓이 area 메소드 만들기
//5. Rectangle rect(1,2); 클래스 선언후 넓이 출력
//6. set 사용해서 width, height 필드에 저장
//7. area 출력

#include <iostream>

using namespace std;

class Rectangle
{
private:
	float m_width;
	float m_height;

public:
	Rectangle(float width, float height) : m_width(width), m_height(height) {}

	~Rectangle() {}

	float CalculateArea() { return m_width * m_height; }

	float getWidth() { return m_width; }
	void setWidth(float width) { m_width = width; }

	float getHeight() { return m_height; }
	void setHeight(float height) { m_height = height; }
};

void main()
{
	float width, height;
	Rectangle rect(1, 2);

	cout << "사각형의 가로와 세로 길이를 입력해주세요. (띄어쓰기로 구분) ";
	cin >> width >> height;

	rect.setWidth(width);
	rect.setHeight(height);

	cout << "넓이는 : " << rect.getWidth() * rect.getHeight() << endl;
	cout << "가로 세로 길이는 : " << rect.getWidth() << " " << rect.getHeight();
}