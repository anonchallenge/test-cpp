#include "stdafx.h"
#include "City.h"


using namespace std;

City::City()
{
}

City::City(const string& name, const Location& coordinates, const string& provinceState, const string& country)
	:m_name(name), m_coordinates(coordinates), m_provinceState(provinceState), m_country(country)
{
}

