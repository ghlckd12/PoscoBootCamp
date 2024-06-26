#include "BankAccount.h"

void BankAccount::deposit(int balance)
{
	std::cout << "입금 금액 : " << balance << std::endl;
	m_balance = m_balance + balance;
	std::cout << "남은 예금 : " << m_balance << std::endl;
}

void BankAccount::withdraw(int balance)
{
	std::cout << "출금 금액 : " << balance << std::endl;
	m_balance = m_balance - balance;
	std::cout << "남은 예금 : " << m_balance << std::endl;
}