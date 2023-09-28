/*
 * mainCpp.cpp
 *
 *  Created on: Sep 28, 2023
 *      Author: Artem
 */

#include "mainCpp.hpp"
#include "main.h"
#include <string>
#include <vector>
#include <unordered_map>

class test
{
private:
	int a;

public:
	float b;
	std::vector<int> c;
};

extern "C"
{
	void mainCpp_call()
	{
		mainCpp();
	}
}

void mainCpp()
{
	test temp;
	temp.c.push_back(125);

	for( ; ; ){
		__asm__ volatile("NOP");
	}
}
