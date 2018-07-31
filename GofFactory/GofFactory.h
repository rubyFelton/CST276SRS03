#pragma once
#include "stdafx.h"
#include <vector>

class Product
{
};

class Creator
{
public:
	Product product_;
	virtual Product* FactoryMethod();
	void AnOperation();
};

class ConcreteProduct : public Product
{	
};

class ConcreteCreator : public Creator
{
public:
	ConcreteProduct* FactoryMethod() override;
};