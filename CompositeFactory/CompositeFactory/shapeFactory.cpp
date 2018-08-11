#include "stdafx.h"
#include "shapeFactory.h"
#include "LineLeaf.h"
#include "CircleLeaf.h"
#include "PolygonLeaf.h"

ShapeComponent * ShapeFactory::makeShape(std::vector<int> values)
{
	switch(values[0])
	{
	case 1: {
		LineLeaf* line{ new LineLeaf(values[0], values[1], values[2],values[3], values[4]) };

		return line;
	}
	case 2: {
		CircleLeaf* circle{ new CircleLeaf(values[0], values[1], values[2], values[3]) };
		return circle;
	}
	case 3: {
		PolygonLeaf* poly{ new PolygonLeaf(values[0], values[1], values[2], values[3], values[4], values[5]) };
		return poly;
	}
	}
	
}
