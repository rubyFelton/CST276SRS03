#pragma once
#include "ShapeComponent.h"

class CircleLeaf : public ShapeComponent
{
private:
	int centerX{ 0 };
	int centerY{0};
	int radious{0};
public:
	std::string to_string() const;
	void store(std::ostream& stream) override;

	//void Operation() override;
	//store void store(std::ostream& stream);
	//load
	//draw
	//get for each
	//set for each
};
