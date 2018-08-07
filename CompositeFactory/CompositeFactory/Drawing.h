#pragma once
#include <vector>
#include "ShapeComponent.h"

class Drawing
{
private:
	std::vector<std::reference_wrapper<ShapeComponent>> shapes;
	
public:

	void Add(ShapeComponent& component);
	void Remove(ShapeComponent& component)
	using iterator = std::vector<std::reference_wrapper<ShapeComponent>>::iterator;
	using const_iterator = std::vector<std::reference_wrapper<ShapeComponent>>::const_iterator;
	iterator seeBegin();
	const_iterator seeEnd() const;
};
