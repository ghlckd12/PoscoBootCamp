#include "BankAccount.h"

void BankAccount::deposit(int balance)
{
	std::cout << "�Ա� �ݾ� : " << balance << std::endl;
	m_balance = m_balance + balance;
	std::cout << "���� ���� : " << m_balance << std::endl;
}

void BankAccount::withdraw(int balance)
{
	std::cout << "��� �ݾ� : " << balance << std::endl;
	m_balance = m_balance - balance;
	std::cout << "���� ���� : " << m_balance << std::endl;
}