#include <thread>
#include <chrono>
#include <iostream>
#include <mutex>

//std::chrono::seconds();
using namespace std;

mutex alarm_mutex;
bool alarm_time = false;

bool alarm_set()
{
	lock_guard<mutex> lock(alarm_mutex);
	return alarm_time;
}

void wait_for_alarm(int sec)
{
	while (!alarm_set())
	{
		this_thread::sleep_for(chrono::seconds(sec));
	}
	cout << "�˶��� �︳�ϴ�!!";
}

void action_program()
{
	cout << "�˶��� ��ٸ��� ��...." << endl;
}

int main()
{
	int sec = 5;

	action_program();

	thread timer_t([](int sec) { this_thread::sleep_for(chrono::seconds(sec));
			{
				lock_guard<mutex> lock(alarm_mutex);
				alarm_time = true;
			}
		}, sec);

	thread alarm_t(wait_for_alarm, sec);

	timer_t.join();
	alarm_t.join();

	return 0;
}