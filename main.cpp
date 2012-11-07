/*
 * main.cpp
 *
 *  Created on: 07.11.2012
 *      Author: Alexei
 */


#include <iostream>
#include "Stack.h"

int main()
{
	StackArray sta;
	StackList  stl;
	int value;
	for(int i = 0; i < 41; i++)
	{
		if(!sta.push(i)) std::cout << "\nStackArray is Full!\n";
		stl.push(i);
	}
	std::cout << "StackArray:\n";
	for(int i = 0; i < 42; i++)
	{
		if(sta.pop(value))	std::cout << value << "\t";
		else std::cout << "\nStack is Empty!\n";
	}
	std::cout << "\n\nStackList:\n";
	for(int i = 0; i < 42; i++)
	{
		if(stl.pop(value))	std::cout << value << "\t";
		else std::cout << "\nStack is Empty!\n";
	}

	return 0;
}

