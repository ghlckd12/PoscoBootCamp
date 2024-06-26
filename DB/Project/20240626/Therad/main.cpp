#include <iostream>
#include <thread>
#include <vector>

#include "BankAccount.h"

void thread_deposit(BankAccount& BA, int cnt)
{
	for (int i = 0; i < cnt; i++)
	{
		BA.deposit(100);
	}
}

void thread_withdraw(BankAccount& BA, int cnt)
{
	for (int i = 0; i < cnt; i++)
	{
		BA.withdraw(100);
	}
}

int main()
{
	BankAccount BA;

	std::thread t1(thread_deposit, std::ref(BA), 100);
	std::thread t2(thread_withdraw, std::ref(BA), 100);

	t1.join();
	t2.join();

	return 0;
}