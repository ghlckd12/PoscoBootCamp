#pragma once
#include <iostream>

class BankAccount
{
public:
	BankAccount() { m_balance = 1000; }
	void deposit(int amount); //�Ա�
	void withdraw(int amount); //���

private:
	int m_balance;
};