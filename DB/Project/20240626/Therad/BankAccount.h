#pragma once
#include <iostream>
//#include <mutex>
#include <atomic>

class BankAccount
{
public:
	BankAccount() { m_balance = 1000; }
	void deposit(int amount); //입금
	void withdraw(int amount); //출금

private:
	int m_balance;
	//std::mutex mtx;
	std::atomic<int> counter;
};