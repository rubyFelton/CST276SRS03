#pragma once
#include "ShapeComponent.h"

class CircleLeaf : public ShapeComponent
{
private:
	int centerX{ 0 };
	int centerY{0};
	int radious{0};
	int typeId{ 2 };
public:
	CircleLeaf();
	CircleLeaf(int type, int x, int y, int r);
	std::string to_string() const;
	void store(std::ostream& stream) override;
};
