#pragma once
#include "ShapeComponent.h"


class PictureComposite : public ShapeComponent
{
public:
	std::vector<std::reference_wrapper<ShapeComponent>> composite_shapes;

	void AddComponent(ShapeComponent& component);
	void remove_component(ShapeComponent& component);
	ShapeComponent& get_child(int index);
	//void Operation() override;
	//store void store(std::ostream& stream);
	//load
	//draw
	//get for each
	//set for each
};
