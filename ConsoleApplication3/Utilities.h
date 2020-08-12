#pragma once

#include <vector>
#include <string>


#include "City.h"

class Utilities
{
public:
	static void PopulateCitiesFromFile(std::vector<City>& cities, const std::string& configFile);
};

