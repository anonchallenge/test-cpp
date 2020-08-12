#pragma once

class Location;

class VincentyService
{
public:
	double angleBetween(const Location& p, const Location& q);

private:
	double toRadians(double degrees);
};

