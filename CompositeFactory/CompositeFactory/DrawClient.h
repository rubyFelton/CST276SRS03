#pragma once
#include "shapeFactory.h"
#include "Drawing.h"
// #include <nlohmann/json.hpp>
#include <string>

//draw client deals with all io 
// using json = nlohmann::json;

class DrawClient
{
private:
	Drawing drawing_;
	ShapeFactory factory;
	std::string filename_;
public:
	// DrawClient(std::ostream& stream);
	void drawStore();
	void drawDisplay();
	void Add(ShapeComponent& component);
	void Remove(ShapeComponent& component);
	void setFile(std::string filename);
	void load();
};
