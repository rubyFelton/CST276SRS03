#include "stdafx.h"
#include "Drawing.h"

void Drawing::Add(ShapeComponent& component)
{
	shapes.push_back(component);
}

void Drawing::Remove(ShapeComponent& component)
{
	shapes.erase(std::remove(shapes.begin(), shapes.end(), component), shapes.end());
}

Drawing::iterator Drawing::seeBegin()
{
	return shapes.begin();
}

Drawing::const_iterator Drawing::seeEnd() const
{
	return shapes.cend();
}

