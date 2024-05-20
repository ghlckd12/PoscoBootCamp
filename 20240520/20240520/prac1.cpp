//
// 240516, john
// Ŭ���� ��ȭ PPT, �ǽ�2 ������
// 


#include <iostream>
#include <string>


using std::cout;
using std::string;
using std::endl;


class Snack
{
protected:
	int m_price;
	string m_prod_name;
	string m_manufac_name;

public:
	void printProdName() { std::cout << m_prod_name << endl; }
	void printManufacName() { std::cout << m_manufac_name << endl; }
};


class Candy : public Snack
{
	string taste;

public:
	Candy(string prod_name, string manufac_name)
	{
		m_prod_name = prod_name;
		m_manufac_name = manufac_name;
	}
};


class Chocolate : public Snack
{
	string shape;

public:
	Chocolate(string prod_name, string manufac_name)
	{
		m_prod_name = prod_name;
		m_manufac_name = manufac_name;
	}
};


int main()
{
	Candy candy1("chupachups", "Haribo");
	Candy candy2("rollipop", "Haribo");
	Chocolate choco1("gana", "Lotte");
	Chocolate choco2("ferrero", "Hersh");

	// 스낵의 인스턴스로 업캐스팅
	Snack* snackBasket[4];
	snackBasket[0] = &candy1;
	snackBasket[1] = &candy2;
	snackBasket[2] = &choco1;
	snackBasket[3] = &choco2;

	for (auto snack : snackBasket)
	{
		snack->printProdName();
	}

	cout << endl;

	for (auto snack : snackBasket)
	{
		snack->printManufacName();
	}

	cout << endl;

	// 캔디,초코의 인스턴스로 다운캐스팅
	Candy* candy3 = (Candy*)snackBasket[0];
	Candy* candy4 = (Candy*)snackBasket[0];
	Chocolate* choco3 = (Chocolate*)snackBasket[0];
	Chocolate* choco4 = (Chocolate*)snackBasket[0];

	return 0;
}
