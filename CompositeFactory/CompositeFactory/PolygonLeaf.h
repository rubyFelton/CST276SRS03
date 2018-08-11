#pragma once
#include "ShapeComponent.h"
#include <sstream>

class PolygonLeaf : public ShapeComponent
{
private:
	int numberSides{0};
	int sideLength{0};
	int centerX{0};
	int centerY{0};
	int centerToSide{0};
	int typeId{ 3 };
public:
	PolygonLeaf();
	PolygonLeaf(int type, int x, int y, int num, int len, int dist);
	std::string to_string() const;
	void store(std::ostream& stream) override;
};
