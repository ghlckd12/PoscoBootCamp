#pragma once
#include <iostream>
//#include <mutex>
#include <atomic>

class BankAccount
{
public:
	BankAccount() { m_balance = 1000; }
	void deposit(int amount); //�Ա�
	void withdraw(int amount); //���

private:
	//std::mutex mtx;
	std::atomic<int> m_balance;
};