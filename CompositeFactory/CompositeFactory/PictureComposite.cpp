#include "stdafx.h"
#include "PictureComposite.h"

void PictureComposite::AddComponent(ShapeComponent& component)
{
	composite_shapes.push_back(component);
}

void PictureComposite::remove_component(ShapeComponent& component)
{
	composite_shapes.erase(std::remove(composite_shapes.begin(), composite_shapes.end(), component), composite_shapes.end());
}

ShapeComponent& PictureComposite::get_child(int index)
{
	return composite_shapes[index];
}
