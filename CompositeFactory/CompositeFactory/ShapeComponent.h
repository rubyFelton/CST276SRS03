#pragma once
#include <vector>
#include <ostream>
#include <string>

class ShapeComponent
{
public:

	virtual void store(std::ostream& stream);
	virtual std::string to_string() const = 0;
	friend std::ostream& operator<<(std::ostream& os, const ShapeComponent& shape);
	//load
	//draw
};
