#include "stdafx.h"
#include "PolygonLeaf.h"

std::string PolygonLeaf::to_string() const
{
	std::ostringstream oss;
	oss << "(Center X: " << centerX << ", Center Y: " << centerY << ", Number of Sides: " << numberSides << ", Side Length: " << 
		sideLength << ", Distance from center to Side: " << centerToSide << ")" << std::endl;
	auto const result{ oss.str() };
	return result;
}

void PolygonLeaf::store(std::ostream& stream)
{
	stream << to_string();
}
