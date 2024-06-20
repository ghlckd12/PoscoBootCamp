//
// 240516, john
// Ŭ���� ���2 PPT, �ٿ�ĳ���� ��ĳ���� ����
// 


#include <iostream>

using namespace std;

class Person { // �θ�
public:
	virtual void intro() {
		cout << "����Դϴ�~" << endl;
	}
};

class Student : public Person {
	string name;

public:
	Student(string name) {
		this->name = name;
	}
	void intro() {
		cout << name << "�л��Դϴ�." << endl;
	}

	void learn() {
		cout << "���ϴ�." << endl;
	}
};

class Teacher : public Person {
	string name;

public:
	Teacher(string name) {
		this->name = name;
	}
	void intro() {
		cout << name << "�����Դϴ�." << endl;
	}

	void teach() {
		cout << "����Ĩ�ϴ�." << endl;
	}
};

int main() {
	Person* pList[3];
	string names[3];

	cout << "3���� �̸��� �Է����ּ���.(������, �л�, �л�)" << endl;
	cin >> names[0] >> names[1] >> names[2];

	/* names[] �迭 �̿��Ͽ� �� class ���� */
	Teacher teacher = Teacher(names[0]);
	Student student1 = Student(names[1]);
	Student student2 = Student(names[2]);

	/* pList�� �Ҵ��ϴ� �ڵ� �߰� */
	// ��ĳ����
	// Person*
	pList[0] = &teacher;
	pList[1] = &student1;
	pList[2] = &student2;

	// teacher, student
	for (auto p : pList) {
		p->intro();
	}

	/* �� class�� ���� �Լ� ���� */
	// �ٿ�ĳ����
	// pList: Person
	Teacher* t = (Teacher*)pList[0];
	t->teach();
	Student* s1 = (Student*)pList[1];
	s1->learn();
	Student* s2 = (Student*)pList[2];
	s2->learn();
}


