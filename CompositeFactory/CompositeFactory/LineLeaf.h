#pragma once
#include "ShapeComponent.h"

class LineLeaf : public ShapeComponent
{
private:
	int startX{ 0 };
	int startY{0};
	int endX{0};
	int endY{0};
public:
	void store(std::ostream& stream) override;
	//load
	//draw
	int get_start_x() const;
	int get_starty() const;
	int get_end_x() const;
	int get_end_y() const;
	std::string to_string() const;
	//set for each
};
