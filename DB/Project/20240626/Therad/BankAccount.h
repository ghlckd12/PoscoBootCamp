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
	//std::mutex mtx;
	std::atomic<int> m_balance;
};