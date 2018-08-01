#pragma once
#include <vector>
class Client
{
public:
	Composite composite_; //could live anywhere in assignment passed in
	Component & component_;
	client(): component_{composite_}
	//for assignment this is a drawing
};

class Component
{ 	//for assignment this is a shape

public:
	std::vector<Component> children;
	virtual void Operation() = 0;
	virtual void AddComponent(Component component) = 0;
	virtual void RemoveComponent(Component component) = 0;
	virtual Component GetChild(int index) = 0;
};

class Leaf : public Component
{ 	//for assignment this is a specific shape
public:
	void Operation();
};

class Composite : public Component
{ 	//for assignment this is a group of shapes
public:
	std::vector<Component> children_;
	void Operation();
	void AddComponent(Component component);
	void RemoveComponent(Component component);
	Component GetChild(int index);
};