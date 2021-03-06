// CompositeFactory main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "DrawClient.h"
#include "LineLeaf.h"
#include "CircleLeaf.h"
#include "PolygonLeaf.h"
#include "PictureComposite.h"

int main()
{
	DrawClient client;
	LineLeaf line;
	CircleLeaf circle;
	PolygonLeaf poly;
	PictureComposite picture;
	
	client.setFile("shape.txt");
	// client.load();
	 client.Add(line);
	 client.Add(circle);
	 client.Add(poly);
 
	 picture.AddComponent(line);
	 picture.AddComponent(circle);
	 picture.AddComponent(poly);
 
	client.Add(picture);
	client.drawDisplay();
	client.drawStore();
    return 0;
}

