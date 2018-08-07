#pragma once
#include "ShapeComponent.h"
#include <sstream>

class PictureComposite : public ShapeComponent
{
public:
	std::vector<std::reference_wrapper<ShapeComponent>> composite_shapes;

	void AddComponent(ShapeComponent& component);
	void remove_component(ShapeComponent& component);
	ShapeComponent& get_child(int index);
	using iterator = std::vector<std::reference_wrapper<ShapeComponent>>::iterator;
	using const_iterator = std::vector<std::reference_wrapper<ShapeComponent>>::const_iterator;
	iterator seeBegin();
	const_iterator seeEnd() const;
	std::string to_string() const;
	void store(std::ostream& stream) override;
	//load
	//draw
	//get for each
	//set for each
};
