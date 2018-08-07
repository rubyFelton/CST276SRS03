#include "stdafx.h"
#include "Drawing.h"
#include <algorithm>

void Drawing::Add(ShapeComponent& component)
{
	shapes.push_back(component);
}

void Drawing::Remove(ShapeComponent& component)
{
	// shapes.erase(std::remove(shapes.begin(), shapes.end(), component), shapes.end());
	shapes.erase(
		std::remove_if(
			shapes.begin(),
			shapes.end(),
			[&component](ShapeComponent const& value)
	{
		auto const result{ &value == &component }; // same address
		return result;
	}
		),
		shapes.end()
		);
}

Drawing::iterator Drawing::seeBegin()
{
	return shapes.begin();
}

Drawing::const_iterator Drawing::seeEnd() const
{
	return shapes.cend();
}

