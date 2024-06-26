#include "BankAccount.h"

void BankAccount::deposit(int balance)
{	
	//mtx.lock();
	
	int expected = m_balance + balance;
	bool result = m_balance.compare_exchange_weak(expected, m_balance + balance);
	std::cout << "입금 금액 : " << balance << std::endl;
	//m_balance = m_balance + balance;
	std::cout << "남은 예금 : " << m_balance << std::endl;
	//mtx.unlock();
}

void BankAccount::withdraw(int balance)
{
	//mtx.lock();
	int expected = m_balance - balance;
	bool result = m_balance.compare_exchange_weak(expected, m_balance - balance);
	std::cout << "출금 금액 : " << balance << std::endl;
	//m_balance = m_balance - balance;
	std::cout << "남은 예금 : " << m_balance << std::endl;
	//mtx.unlock();
}