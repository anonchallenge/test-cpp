#include "stdafx.h"
#include "Utilities.h"

#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

void Utilities::PopulateCitiesFromFile(vector<City>& cities, const string& configFile)
{
	ifstream myfile(configFile);
	if (!myfile.is_open())
		throw std::logic_error("cannot open file " + configFile);

	string line;
	//skipping the title line
	if (!getline (myfile,line)) {
		cout << "file is empty";
		return;
	}

	char delim = ','; 
	while (getline (myfile,line) )	  {
		stringstream str_strm(line);
		string data;
		getline(str_strm, data, delim);
		string name = data;
		getline(str_strm, data, delim);
		double latitude = atof(data.c_str());
		getline(str_strm, data, delim);
		double longitude = atof(data.c_str());
		getline(str_strm, data, delim);
		string province_state = data;
		getline(str_strm, data, delim);
		string country = data;
		City c1(name, Location(latitude, longitude), province_state, country);
		cities.push_back(c1);
	}
	myfile.close();
}
