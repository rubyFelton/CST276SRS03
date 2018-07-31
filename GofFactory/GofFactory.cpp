#include "stdafx.h"
#include "GofFactory.h"

Product* Creator::FactoryMethod()
{
}

void Creator::AnOperation()
{
	auto product_ = FactoryMethod();
}

ConcreteProduct* ConcreteCreator::FactoryMethod()
{
}
