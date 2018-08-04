#include "stdafx.h"
#include "ShapeComponent.h"

void ShapeComponent::store(std::ostream& stream)
{
}

std::ostream& operator<<(std::ostream& os, const ShapeComponent& shape)
{
	os << shape.to_string();
	return os;
}
