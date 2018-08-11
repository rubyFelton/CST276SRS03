#include "stdafx.h"
#include "DrawClient.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <cassert>
//handles all file io
// grabbed string parse from here https://www.geeksforgeeks.org/extract-integers-string-c/

void DrawClient::drawStore()
{
	std::ofstream stream(filename_);
	assert(stream.good());
	auto const end{ drawing_.seeEnd() };
	auto iter{drawing_.seeBegin()};
	
	while(iter != end)
	{
		stream << iter->get();
		assert(stream.good());

		++iter;
	}
}

void DrawClient::drawDisplay()
{
	auto const end{ drawing_.seeEnd() };
	auto iter{drawing_.seeBegin()};
	
	while(iter != end)
	{
		std::cout << iter->get();
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

void DrawClient::setFile(std::string filename)
{
	filename_ = filename;
}

void DrawClient::load()
{
	std::string line;
	std::ifstream stream(filename_);
	assert(stream.good());
	// if (stream.is_open())
	// {
		while (getline(stream, line))
		{
			std::vector<int> values;
			std::stringstream ss;
			ss << line;
			std::string temp;
			int found;

			while (!ss.eof()) {

				ss >> temp;
				if (std::stringstream(temp) >> found)
				{
					values.push_back(found);
				}
				temp = "";
			}
			factory.makeShape(values);
		}
	// }
 //
	// else std::cout << "Unable to open file";
}

