#pragma once

#include <vector>

#include "City.h"
#include "Location.h"


class TestDataFactory
{

public:
	TestDataFactory() 
		: CITY_A_0_0("a", Location(0.0, 0.0), "XX-prov","YY-ctry"), 
		  CITY_B_0_90("b", Location(0.0, 90.0), "XX-prov", "YY-ctry"),
		  CITY_C_90_90("c", Location(90.0, 90.0),  "XX-prov", "YY-ctry"),
		  CITY_D_90_45("d", Location(90.0, 45.0), "XX-prov", "YY-ctry"),
		  CITY_E_45_45("e", Location(90.0, 45.0), "XX-prov", "YY-ctry")
	{}

	City CITY_A_0_0;
	City CITY_B_0_90;
	City CITY_C_90_90;
	City CITY_D_90_45;
	City CITY_E_45_45;

	std::vector<City> firstThreeCities() {
		std::vector<City> cities;
		cities.push_back(CITY_A_0_0);
		cities.push_back(CITY_B_0_90);
		cities.push_back(CITY_C_90_90);
		return cities;
	}

	std::vector<City> firstFiveCities() {
		std::vector<City> cities = firstThreeCities();
		cities.push_back(CITY_D_90_45);
		cities.push_back(CITY_E_45_45);

		return cities;
	}
};

