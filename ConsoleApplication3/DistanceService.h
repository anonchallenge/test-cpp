#pragma once
#include <set>
#include <map>
#include <string>
#include <vector>
#include <list>

#include "City.h"
#include "VincentyService.h"

class DistanceService
{
public:
	DistanceService(const std::vector<City>& cities);

	std::pair<std::string, std::string> findClosestCities(const std::set<std::string>& cityNames);

private:
	std::map<std::string, City> m_CityLocations;
	std::list<City> lookupCities(const std::set<std::string>& cityNames);
};

