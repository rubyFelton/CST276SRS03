// CompositeFactory main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DrawClient.h"
#include "LineLeaf.h"
#include "CircleLeaf.h"
#include "PolygonLeaf.h"
#include "PictureComposite.h"
#include <iostream>


int main()
{
	DrawClient client(std::cout);
	//create a line
	LineLeaf line;
	CircleLeaf circle;
	PolygonLeaf poly;
	PictureComposite picture;
	//add line to drawing
	client.Add(line);
	client.Add(circle);
	client.Add(poly);

	picture.AddComponent(line);
	picture.AddComponent(circle);
	picture.AddComponent(poly);

	client.Add(picture);
	//store drawing to stream
	client.drawStore();

    return 0;
}

