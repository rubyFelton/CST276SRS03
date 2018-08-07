#include "stdafx.h"
#include "DrawClient.h"

DrawClient::DrawClient(std::ostream& stream) : stream_{ stream }
{}

void DrawClient::drawStore()
{
	auto const end{ drawing_.seeEnd() };
	auto iter{drawing_.seeBegin()};
	
	while(iter != end)
	{
		stream_ << iter->get();
		++iter;
	}
}

void DrawClient::Add(ShapeComponent& component)
{
	drawing_.Add(component);
}

void DrawClient::Remove(ShapeComponent& component)
{
	drawing_.Remove(component);
}
