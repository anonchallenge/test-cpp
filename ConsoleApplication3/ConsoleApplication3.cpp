// ConsoleApplication3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <sstream>
#include <memory>
#include <vector>

#include "City.h"
#include "DistanceService.h"
#include "Utilities.h"

using namespace std;



const string configFile("latlong.csv");
int _tmain(int argc, char* argv[])

{	
	try {
		vector<City> cities;
		Utilities::PopulateCitiesFromFile(cities, configFile);

		DistanceService service(cities);

		set<string> cityNames;
		for (int i = 1; i < argc; i++)
			cityNames.insert(argv[i]);

		std::pair<string, string> result = service.findClosestCities(cityNames);

		cout << result.first << " " << result.second;
	} catch (std::logic_error& e) {
		cout << "ERROR: " << e.what();
	}
	return 0;
}



