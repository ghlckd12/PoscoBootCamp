//1. prac1���� ���� Rectangle Ŭ������ get, set ����
//2. �ʵ� : width, height
//3. ������ : width, height ������ 2���� ���� �Ű������� �ޱ�
//4. �޼ҵ� : width, height �̿��� �簢�� ���� area �޼ҵ� �����
//5. Rectangle rect(1,2); Ŭ���� ������ ���� ���
//6. set ����ؼ� width, height �ʵ忡 ����
//7. area ���

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

	cout << "�簢���� ���ο� ���� ���̸� �Է����ּ���. (����� ����) ";
	cin >> width >> height;

	rect.setWidth(width);
	rect.setHeight(height);

	cout << "���̴� : " << rect.getWidth() * rect.getHeight() << endl;
	cout << "���� ���� ���̴� : " << rect.getWidth() << " " << rect.getHeight();
}