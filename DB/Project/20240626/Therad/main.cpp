#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

#include "BankAccount.h"

std::mutex mtx;

void thread_deposit(BankAccount& BA, int cnt)
{
	for (int i = 0; i < cnt; i++)
	{
		mtx.lock();
		BA.deposit(100);
		mtx.unlock();
	}
}

void thread_withdraw(BankAccount& BA, int cnt)
{
	for (int i = 0; i < cnt; i++)
	{
		mtx.lock();
		BA.withdraw(100);
		mtx.unlock();
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