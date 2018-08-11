#pragma once
#include "ShapeComponent.h"

class LineLeaf : public ShapeComponent
{
private:
	int startX{ 0 };
	int startY{0};
	int endX{0};
	int endY{0};
	int typeId{ 1 };
public:
	LineLeaf();
	LineLeaf(int type, int x1, int y1, int x2, int y2);
	void store(std::ostream& stream) override;
	int get_start_x() const;
	int get_starty() const;
	int get_end_x() const;
	int get_end_y() const;
	std::string to_string() const;
};
