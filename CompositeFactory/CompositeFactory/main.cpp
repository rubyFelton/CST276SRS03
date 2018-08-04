// CompositeFactory main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DrawClient.h"
#include "LineLeaf.h"
#include <iostream>


int main()
{
	DrawClient client(std::cout);
	//create a line
	LineLeaf line;
	//add line to drawing
	client.Add(line);

	//store drawing to stream
	client.drawStore();

    return 0;
}

