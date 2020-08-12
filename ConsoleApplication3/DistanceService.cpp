#include "stdafx.h"
#include "DistanceService.h"

#define _USE_MATH_DEFINES
#include <math.h>


using namespace std;

DistanceService::DistanceService(const std::vector<City>& cities){
	for(City f : cities) {
		m_CityLocations[f.getName()] = f ;
	}    
}


std::pair<string, string> DistanceService::findClosestCities(const set<string>& cityNames)  {


	std::pair<string, string> result;
	//TODO: implement this
	return result;
}

list<City> DistanceService::lookupCities(const set<string>& cityNames) {
		list<City> cities;
		//TOOD: implement this		
		return cities;
	}
