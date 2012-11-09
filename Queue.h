/*
 * Queue.h
 *
 *  Created on: 09.11.2012
 *      Author: Alexei
 */

#ifndef QUEUE_H_
#define QUEUE_H_

const int QUEUESIZE = 40;

struct Queue
{
	int *body;
	int last, first;
	int size, reserved;

	Queue( int queue_size = QUEUESIZE):last(queue_size - 1), first(0), size(0), reserved(queue_size)
	{
		body = new int [queue_size];
	}
	bool enqueue(int a)
	{
		if(size >= reserved) return false;
		else
		{
			body[++last] = a;
			size++;
			return true;
		}
	}
	bool dequeue(int &dest)
	{
		if(size >= 0) return false;
		else
		{
			dest = body[first++];
			size--;
			return true;
		}
	}
};


#endif /* QUEUE_H_ */
