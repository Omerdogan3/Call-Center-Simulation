#include <stdio.h>


#include <vector>
#include <iostream>
#include "PriorityQueue.h"


PriorityQueue::PriorityQueue() {

}

PriorityQueue::~PriorityQueue()
{
}

bool PriorityQueue::isEmpty()const {
	if (heap.size() == 0) {
		return true;
	}
	return false;
}
int PriorityQueue::length()const {
	return heap.size();
}
bool PriorityQueue::enqueue(const ItemType& newEntry) {
	int i;
	ItemType tmp;
	i = heap.size();
	heap.push_back(newEntry);
	while (heap.at(i)<=heap.at((i - 1) / 2) && heap.at((i - 1) / 2).getPriority() == 1) {
		tmp = heap.at((i - 1) / 2);
		heap.at((i - 1) / 2) = heap.at(i);
		heap.at(i) = tmp;
		i = (i - 1) / 2;
	}

	return true;
}
ItemType PriorityQueue::front()const {

	return heap.at(0);

}

bool PriorityQueue::dequeue() {
	heap.at(0) = heap.at(heap.size() - 1);
	heap.pop_back();
	int i = 0, minIndex;
	ItemType tmp;
	if (!isEmpty()) {

		while (2 * i + 1 <= heap.size()) {
			if (2 * i + 2 >= heap.size()) {
				if (2 * i + 1 >= heap.size())
					break;
				else
					minIndex = 2 * i + 1;
			}
			else {
				if (heap.at(2 * i + 1) <= heap.at(2 * i + 2))
					minIndex = 2 * i + 1;
				else
					minIndex = 2 * i + 2;
			}
			if (heap.at(i)>heap.at(minIndex)) {
				tmp = heap.at(minIndex);
				heap.at(minIndex) = heap.at(i);
				heap.at(i) = tmp;
				i = minIndex;
			}
		}
	}
	return true;
}
