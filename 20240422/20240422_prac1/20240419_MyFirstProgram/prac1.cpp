//
// �ۼ��� : ��ȸâ
// �ۼ����� : 2024. 04. 22
//
// main ���� �ִ� ����

#include <iostream>
#include <string>
using namespace std;

// ���α׷� ��ü ���� �� 1���� �����ϴ� �Լ�
// ���α׷����� ���� ���� ����
int main()
{	
	// �ܼ� ���� ���
	cout << "�̸��� �Է��ϼ���.\n";

	string myName;
	// �ܼ� ���� �Է�

	cin >> myName;

	// �ܼ� ���� ���
	cout << "���̸� �Է��ϼ���.\n";

	string myAge;
	// �ܼ� ���� �Է�

	cin >> myAge;

	cout << "�ȳ��ϼ���! " << myName << "��(" << myAge << "��)";

	return 0;
}