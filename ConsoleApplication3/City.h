#pragma once
#include <string>
#include <set>

#include "Location.h"

class City
{
public:
	City();
//	City(const City& other);
	City(const std::string& name, const Location& coordinates, const std::string& provinceState, const std::string& country);
//	const City& operator= (const City &);
	std::string getName() const {
		return m_name;
	}
	
	Location getCoordinates() const {
		return m_coordinates;
	}
	
	std::string getProvinceState() const {
		return m_provinceState;
	}
	
	std::string getCountry() const {
		return m_country;
	}
	
private:
	std::string m_name;
	Location m_coordinates;
	std::string m_provinceState;
	std::string m_country;
};

