#include "CallCenter.h"
#include "Call.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
CallCenter::CallCenter()
{
}
CallCenter::CallCenter(int arrive_rate, int m_accept)
{
	arr_rate = arrive_rate;
	accept_time = m_accept;
}

CallCenter::~CallCenter()
{
}

void CallCenter::simulation() {
	time_t s_time = time(0);
	Call m_call = Call(s_time);
	waitList.enqueue(m_call);
	
	if (waitList.isEmpty() == true) {
		cout << "There are not any Calls !" << endl;
		exit(1);
	}
	m_call.run();
	cout << "number of calls in the waiting list : " << waitList.length() << endl;
}
bool CallCenter::answer() {

	return waitList.dequeue();
}

