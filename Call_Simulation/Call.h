#pragma once
#include "CallInterface.h"
#include <time.h>
class Call :
	public CallInterface
{
public:
	Call(time_t t_time);
	Call();
	~Call();
	bool operator<(Call &other);
	bool operator>(Call &other);
	bool operator<=(Call &other);
	bool operator>=(Call &other);
	bool operator==(Call &other);
	Call operator=(Call &other);
	int getPriority();
	time_t getarrivedTime();
	time_t getanswerTime();
	void run();
private:
	time_t arrivedTime;
	time_t answerTime;
	int priority;
};

