
all: call callcenter priorityqueue
	g++ Call_Simulation.cpp call.o callcenter.o priorityqueue.o -o call_sim
call: Call.cpp
	g++ -c Call.cpp -o call.o
callcenter: CallCenter.cpp
	g++ -c CallCenter.cpp -o callcenter.o
priorityqueue: PriorityQueue.cpp
	g++ -c PriorityQueue.cpp -o priorityqueue.o
