#include "BankAccount.h"

void BankAccount::deposit(int balance)
{	
	//mtx.lock();
	counter.store(999);
	int expected = 999;
	bool result = counter.compare_exchange_weak(expected, 30);
	std::cout << "입금 금액 : " << balance << std::endl;
	m_balance = m_balance + balance;
	std::cout << "남은 예금 : " << m_balance << std::endl;
	//mtx.unlock();
}

void BankAccount::withdraw(int balance)
{
	//mtx.lock();
	counter.store(999);
	int expected = 999;
	bool result = counter.compare_exchange_weak(expected, 30);
	std::cout << "출금 금액 : " << balance << std::endl;
	m_balance = m_balance - balance;
	std::cout << "남은 예금 : " << m_balance << std::endl;
	//mtx.unlock();
}