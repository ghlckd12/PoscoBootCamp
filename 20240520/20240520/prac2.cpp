#include <iostream>
#include <string>

using namespace std;

class Person
{
public:
	virtual void intro()
	{
		cout << "사람입니다~" << endl;
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
		cout << m_name << "학생입니다." << endl;
	}

	void learn() override
	{
		cout << "배웁니다." << endl;
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
		cout << m_name << "선생입니다." << endl;
	}

	void teach() override
	{
		cout << "가르칩니다." << endl;
	}
};

int main()
{
	Person* pList[3];
	string names[3];

	cout << "3명의 이름을 입력해주세요.( 선생님, 학생, 학생 )" << endl;
	cin >> names[0] >> names[1] >> names[2];

	// names[] 배열 이용하여 각 class 생성
	Teacher teacher(names[0]);
	Student student1(names[1]);
	Student student2(names[2]);

	// pList에 할당하는 코드 추가
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