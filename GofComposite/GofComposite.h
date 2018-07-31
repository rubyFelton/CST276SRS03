#pragma once
#include <vector>
class Client
{
	
};

class Component
{
public:
	virtual void Operation() = 0;
	virtual void AddComponent(Component component) = 0;
	virtual void RemoveComponent(Component component) = 0;
	virtual Component GetChild(int index) = 0;
};

class Leaf : public Component
{
public:
	void Operation();
};

class Composite : public Component
{
public:
	std::vector<Component> children_;
	virtual void Operation() = 0;
	virtual void AddComponent(Component component) = 0;
	virtual void RemoveComponent(Component component) = 0;
	virtual Component GetChild(int index) = 0;
};