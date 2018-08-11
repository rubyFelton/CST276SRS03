#include "stdafx.h"
#include "PictureComposite.h"
#include <string.h>
#include <algorithm>

void PictureComposite::AddComponent(ShapeComponent& component)
{
	composite_shapes.push_back(component);
}

void PictureComposite::remove_component(ShapeComponent& component)
{
	composite_shapes.erase(
		std::remove_if(
			composite_shapes.begin(),
			composite_shapes.end(),
			[&component](ShapeComponent const& value)
	{
		auto const result{ &value == &component }; // same address
		return result;
	}
		),
		composite_shapes.end()
		);
}

ShapeComponent& PictureComposite::get_child(int index)
{
	return composite_shapes[index];
}

PictureComposite::iterator PictureComposite::seeBegin()
{
	return composite_shapes.begin();
}

PictureComposite::const_iterator PictureComposite::seeEnd() const
{
	return composite_shapes.cend();
}

std::string PictureComposite::to_string() const
{
	std::ostringstream oss;
	auto const end{ composite_shapes.end() };
	auto iter{ composite_shapes.begin() };
	std::string result{"\n"};

	while (iter != end)
	{
		result += iter->get().to_string();
		++iter;
	}
	return result;
}

void PictureComposite::store(std::ostream& stream)
{
	stream << to_string();
}