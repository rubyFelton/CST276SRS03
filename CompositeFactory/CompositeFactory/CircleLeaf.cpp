#include "stdafx.h"
#include "CircleLeaf.h"
#include <sstream>

std::string CircleLeaf::to_string() const
{
	std::ostringstream oss;
	oss << "(Center X: " << centerX << ", Center Y: " << centerY << ", Radious: " << radious << ")" << std::endl;
	auto const result{ oss.str() };
	return result;
}

void CircleLeaf::store(std::ostream& stream)
{
	stream << to_string();
}