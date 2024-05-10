//1. Rectangle Ŭ���� �����
//2. �ʵ� : width, height
//3. ������ : width, height ������ 2���� ���� �Ű������� �ޱ�
//4. �޼ҵ� : width, height �̿��� �簢�� ���� area �޼ҵ� �����
//5. ��ü ���� �� width, height�� ����ڿ��� �Է¹޾� �����ڷ� �Ѱ� �ֱ�

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
	cout << "�簢���� ���ο� ���� ���̸� �Է����ּ���. (����� ����) ";
	cin >> width >> height;

	Rectangle R(width, height);

	cout << "���̴� : " << R.CalculateArea();
}