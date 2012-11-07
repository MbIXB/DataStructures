/*
 * Stack.h
 *
 *  Created on: 07.11.2012
 *      Author: Alexei
 */

#ifndef STACK_H_
#define STACK_H_

const int STACKSIZE = 40;

struct StackArray
{
	int *body;
	int index, size;

	StackArray(int sz= STACKSIZE):  index(0), size(sz)
	{
		body  = new int [size];
	}

	bool push( int a )
	{
		if(index >= size ) return false;
		else
		{
			body[index++] = a;
			return true;
		}
	}

	bool pop(int &dest)
	{
		if(index - 1  < 0) return false;
		else
		{
			dest = body[--index];
			return true;
		}
	}
};


struct StackList
{
	struct Node
	{
		int data;
		Node *previous;
	} *last;

	StackList( void ): last(0) {}

	bool push(int a)
	{
		Node *tmp = new Node;
		tmp -> data = a;
		tmp -> previous = last;
		last = tmp;
		return true;
	}

	bool pop(int &dest)
	{
		if(last)
		{
			dest = last -> data;
			Node *tmp = last;
			last = last -> previous;
			delete tmp;
			return true;
		}
		else return false;

	}

};

#endif /* STACK_H_ */
