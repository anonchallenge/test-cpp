#include "stdafx.h"
#include "CppUnitTest.h"

#define _USE_MATH_DEFINES
#include <math.h>

#include "VincentyService.h"
#include "Location.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(VincentyServiceTest)
	{
	public:
		VincentyServiceTest()
			: NORTH_POLE(90.0, 0.0), 
			SOUTH_POLE(-90.0, 0.0),
			EQUATOR0( 0.0, 0.0),
			HOUSTON(29.97,95.35 ),
			NEW_YORK( 40.77,73.98),
			BOISE( 43.57,116.22)
	

		{}
		TEST_METHOD(angleBetweenPoleAndEquatorIsHalfRadian)
		{
			Assert::AreEqual( M_PI / 2, vince.angleBetween(NORTH_POLE, EQUATOR0), 0.001 );
		}
		TEST_METHOD(distanceBetweenNewYorkAndHoustonIsSymmetric)
		{
			Assert::AreEqual(vince.angleBetween(NEW_YORK, HOUSTON), vince.angleBetween(HOUSTON, NEW_YORK), 0.001 );
		}

	private:
		VincentyService vince;
	//// note: longitude is irrelevant in this special case, geographic poles have all longitudes
	private:
		Location NORTH_POLE;
		Location SOUTH_POLE;
		Location EQUATOR0; // the gulf of guinea
		Location HOUSTON;
		Location NEW_YORK;
		Location BOISE;	
	};
}