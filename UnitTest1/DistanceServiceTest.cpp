#include "stdafx.h"
#include "CppUnitTest.h"

#include "DistanceService.h"
#include "TestDataFactory.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace UnitTest1
{		
	TEST_CLASS(DistanceServiceTest)
	{
	public:

		// a: (0,0)
		// a45: (0,45)
		// a45p: (45,0)
		// a45 and a45p are equidistant from a
		// return one of the two minimums in this case - (a,a45) or (a,a45p)
		
		TEST_METHOD(TesFindClosestCities)
		{

			TestDataFactory testDataFactory;
			City a45("a45", Location(testDataFactory.CITY_A_0_0.getCoordinates().getLatitude(), 45.0),
				testDataFactory.CITY_A_0_0.getProvinceState(),
				testDataFactory.CITY_A_0_0.getCountry());

			City a45p("a45p",  Location(45.0, testDataFactory.CITY_A_0_0.getCoordinates().getLongitude()),
				testDataFactory.CITY_A_0_0.getProvinceState(),
				testDataFactory.CITY_A_0_0.getCountry());

			vector<City> cities;
			cities.push_back(testDataFactory.CITY_A_0_0);
			cities.push_back(a45);
			cities.push_back(a45p);

			DistanceService ds(cities);

			set<string> cityNames;
			for (City c: cities) {
				cityNames.insert(c.getName());
			}
			std::pair<string, string> result = ds.findClosestCities(cityNames);
			std::pair<string, string> a_b(testDataFactory.CITY_A_0_0.getName(), a45.getName());
			std::pair<string, string> aa_b(testDataFactory.CITY_A_0_0.getName(), a45p.getName());

			Assert::IsTrue( result == (a_b) || result == (aa_b));

		}
	};
}