#include "stdafx.h"
#include "Drawing.h"

void Drawing::Add(ShapeComponent& component)
{
	shapes.push_back(component);
}

Drawing::iterator Drawing::seeBegin()
{
	return shapes.begin();
}

Drawing::const_iterator Drawing::seeEnd() const
{
	return shapes.cend();
}

