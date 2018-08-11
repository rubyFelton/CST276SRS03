#include "stdafx.h"
#include "CircleLeaf.h"
#include <sstream>

CircleLeaf::CircleLeaf()
{
	
}

CircleLeaf::CircleLeaf(int type, int x, int y, int r)
{
	typeId = type;
	centerX = x;
	centerY = y;
	radious = r;
}

std::string CircleLeaf::to_string() const
{
	std::ostringstream oss;
	oss << "(Type: " << typeId << " Center X: " << centerX << ", Center Y: " << centerY << ", Radious: " << radious << ")" << std::endl;
	auto const result{ oss.str() };
	return result;
}

void CircleLeaf::store(std::ostream& stream)
{
	stream << to_string();
}