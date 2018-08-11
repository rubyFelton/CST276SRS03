#include "stdafx.h"
#include "PolygonLeaf.h"

PolygonLeaf::PolygonLeaf()
{
	
}

PolygonLeaf::PolygonLeaf(int type, int x, int y, int num, int len, int dist)
{
	typeId = type;
	centerX = x;
	centerY = y;
	numberSides = num;
	sideLength = len;
	centerToSide = dist;
}

std::string PolygonLeaf::to_string() const
{
	std::ostringstream oss;
	oss << "(Type: " << typeId << " Center X: " << centerX << ", Center Y: " << centerY << ", Number of Sides: " << numberSides << ", Side Length: " <<
		sideLength << ", Distance from center to Side: " << centerToSide << ")" << std::endl;
	auto const result{ oss.str() };
	return result;
}

void PolygonLeaf::store(std::ostream& stream)
{
	stream << to_string();
}
