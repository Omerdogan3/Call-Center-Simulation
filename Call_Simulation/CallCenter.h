
#include "CallCenterInterface.h"
#include "PriorityQueue.h"
class CallCenter :
	public CallCenterInterface
{
public:
	CallCenter();
	CallCenter(int arrive_rate, int m_accept);
	void simulation();
	bool answer();
	~CallCenter();

public: 
	PriorityQueue waitList;
private:
	int arr_rate;
	int accept_time;
};

