#include "BankAccount.h"

void BankAccount::deposit(int balance)
{	
	//mtx.lock();
	counter.store(999);
	int expected = 999;
	bool result = counter.compare_exchange_weak(expected, 30);
	std::cout << "�Ա� �ݾ� : " << balance << std::endl;
	m_balance = m_balance + balance;
	std::cout << "���� ���� : " << m_balance << std::endl;
	//mtx.unlock();
}

void BankAccount::withdraw(int balance)
{
	//mtx.lock();
	counter.store(999);
	int expected = 999;
	bool result = counter.compare_exchange_weak(expected, 30);
	std::cout << "��� �ݾ� : " << balance << std::endl;
	m_balance = m_balance - balance;
	std::cout << "���� ���� : " << m_balance << std::endl;
	//mtx.unlock();
}