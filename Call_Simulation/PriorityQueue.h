#pragma once
#include "PriorityQueueInterface.h"
#include <vector>
using namespace std;
class PriorityQueue :
	public PriorityQueueInterface
{
public:
	PriorityQueue();
	~PriorityQueue();
public:

	bool isEmpty()const;

	int length()const;

	bool enqueue(const ItemType & newEntry);

	bool dequeue();

	ItemType front() const;

private:
	vector<ItemType> heap;
};

