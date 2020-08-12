#pragma once
class Location
{
public:
	Location();
	Location(double latitude, double longitude);

	double getLatitude() const {
		return m_latitude;
	}
	double getLongitude() const{
		return m_longitude;
	}

private: 
	double m_latitude;
	double m_longitude;

};

