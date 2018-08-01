#include "GofComposite.h"

void Component::Operation()
{
}

void Component::AddComponent(Component component)
{	
}

void Component::RemoveComponent(Component component)
{	
}

Component Component::GetChild(int index)
{
}

void Composite::Operation()
{
	for(auto& child : children)
	{
		child.Operation();
	}
}

void Composite::AddComponent(Component component)
{
	children.push_back(component);
}

void Composite::RemoveComponent(Component component)
{
	children.erase(std::remove(children.begin(), children.end(), component), children.end());
}

Component Composite::GetChild(int index)
{
	return children[index];
}

void Leaf::Operation()
{
	
}
