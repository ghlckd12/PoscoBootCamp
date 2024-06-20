#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	virtual void intro()
	{
		cout << "����Դϴ�~" << endl;
	}

	virtual void learn() {}
	virtual void teach() {}
};

class Student : public Person
{
	string m_name;

public:
	Student(string name)
	{
		m_name = name;
	}

	void intro()
	{
		cout << m_name << "�л��Դϴ�." << endl;
	}

	void learn() override
	{
		cout << "���ϴ�." << endl;
	}
};

class Teacher : public Person
{
	string m_name;

public:
	Teacher(string name)
	{
		m_name = name;
	}

	void intro()
	{
		cout << m_name << "�����Դϴ�." << endl;
	}

	void teach() override
	{
		cout << "����Ĩ�ϴ�." << endl;
	}
};

int main()
{
	Person* pList[3];
	string names[3];

	cout << "3���� �̸��� �Է����ּ���.( ������, �л�, �л� )" << endl;
	cin >> names[0] >> names[1] >> names[2];

	// names[] �迭 �̿��Ͽ� �� class ����
	Teacher teacher(names[0]);
	Student student1(names[1]);
	Student student2(names[2]);

	// pList�� �Ҵ��ϴ� �ڵ� �߰�
	pList[0] = &teacher;
	pList[1] = &student1;
	pList[2] = &student2;

	for (auto p : pList)
	{
		p->intro();
	}

	pList[0]->teach();
	pList[1]->learn();
	pList[2]->learn();
	return 0;
}