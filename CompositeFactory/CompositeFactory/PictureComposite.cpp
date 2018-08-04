#include "stdafx.h"
#include "PictureComposite.h"

void PictureComposite::AddComponent(ShapeComponent& component)
{
}

void PictureComposite::remove_component(ShapeComponent& component)
{
}

ShapeComponent& PictureComposite::get_child(int index)
{
	return composite_shapes[index];
}
