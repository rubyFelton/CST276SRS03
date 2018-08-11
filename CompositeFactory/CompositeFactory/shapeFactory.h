#pragma once
#include<vector>

class ShapeComponent;
class ShapeFactory
{
public:
	// ShapeComponent* shape_;
	ShapeComponent* makeShape(std::vector<int> values);
};