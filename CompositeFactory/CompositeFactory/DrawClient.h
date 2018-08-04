#pragma once
#include <vector>
#include "ShapeComponent.h"
#include "Drawing.h"

class DrawClient
{
private:
	Drawing drawing_;
	std::ostream& stream_;
public:
	DrawClient(std::ostream& stream);
	void drawStore();
	void Add(ShapeComponent& component);
	//set file
	//open file
};
