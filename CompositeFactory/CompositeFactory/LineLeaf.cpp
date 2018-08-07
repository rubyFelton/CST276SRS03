#include "stdafx.h"
#include "LineLeaf.h"
#include <sstream>

void LineLeaf::store(std::ostream& stream)
{
	stream << to_string();
}

int LineLeaf::get_start_x() const
{
	return startX;
}

int LineLeaf::get_starty() const
{
	return startY;
}

int LineLeaf::get_end_x() const
{
	return endX;
}

int LineLeaf::get_end_y() const
{
	return endY;
}

std::string LineLeaf::to_string() const
{
	std::ostringstream oss;
	oss << "(Starting X: " << startX << ", Starting Y: " << startY << ", Ending X: " << endX << ", Ending Y: " << 
		endY << ")" << std::endl;
	auto const result{ oss.str() };
	return result;
}

