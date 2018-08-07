// CompositeFactory main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DrawClient.h"
#include "LineLeaf.h"
#include "CircleLeaf.h"
#include "PolygonLeaf.h"
#include <iostream>


int main()
{
	DrawClient client(std::cout);
	//create a line
	LineLeaf line;
	CircleLeaf circle;
	PolygonLeaf poly;
	//add line to drawing
	client.Add(line);
	client.Add(circle);
	client.Add(poly);

	//store drawing to stream
	client.drawStore();

    return 0;
}

