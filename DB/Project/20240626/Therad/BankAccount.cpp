#include "BankAccount.h"

void BankAccount::deposit(int balance)
{	
	//mtx.lock();
	
	int expected = m_balance + balance;
	bool result = m_balance.compare_exchange_weak(expected, m_balance + balance);
	std::cout << "�Ա� �ݾ� : " << balance << std::endl;
	//m_balance = m_balance + balance;
	std::cout << "���� ���� : " << m_balance << std::endl;
	//mtx.unlock();
}

void BankAccount::withdraw(int balance)
{
	//mtx.lock();
	int expected = m_balance - balance;
	bool result = m_balance.compare_exchange_weak(expected, m_balance - balance);
	std::cout << "��� �ݾ� : " << balance << std::endl;
	//m_balance = m_balance - balance;
	std::cout << "���� ���� : " << m_balance << std::endl;
	//mtx.unlock();
}