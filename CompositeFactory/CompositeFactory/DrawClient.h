#pragma once
#include <vector>
#include "ShapeComponent.h"
#include "Drawing.h"
#include <nlohmann/json.hpp>

//Factory method
// for convenience
using json = nlohmann::json;

class DrawClient
{
private:
	Drawing drawing_;
	std::ostream& stream_;
public:
	DrawClient(std::ostream& stream);
	void drawStore();
	void Add(ShapeComponent& component);
	void Remove(ShapeComponent& component);
	//set file
	//open file
};
