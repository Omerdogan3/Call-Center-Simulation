
#include "Call.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
Call::Call(time_t t_time)
{
	arrivedTime = t_time;
	srand(time(NULL));
	int m_rand = rand() % 4 + 1;
	int n_rand = rand() % 5 + 1;
	priority = m_rand;
	answerTime = n_rand;
}
Call::Call() {

}

void Call::run() {
	struct tm *localTime;
	time(&arrivedTime);                   // Get the current time
	localTime = localtime(&arrivedTime);  // Convert the current time to the local time
	int Hour = localTime->tm_hour;
	int Min = localTime->tm_min;
	int Sec = localTime->tm_sec;
	std::cout << "This program was exectued at: " << Hour << ":" << Min << ":" << Sec << std::endl;

}
Call::~Call()
{
}
int Call::getPriority() {
	return priority;
}
time_t Call::getarrivedTime() {
	return arrivedTime;
}
time_t Call::getanswerTime() {
	return answerTime;
}
bool Call::operator<(Call &other) {
	return priority < other.getPriority();
}
bool Call::operator>(Call &other) {
	return priority > other.getPriority();
}
bool Call::operator<=(Call &other) {
	return priority <= other.getPriority();
}
bool Call::operator>=(Call &other) {
	return priority >= other.getPriority();
}
bool Call::operator==(Call &other) {
	return priority == other.getPriority();
}
Call Call::operator=(Call &other) {
	if (this == &other)      // Same object?
		return *this;        // Yes, so skip assignment, and just return *this.

	return *this;
}
