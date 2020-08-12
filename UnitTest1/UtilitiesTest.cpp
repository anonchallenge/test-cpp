#include "stdafx.h"
#include "CppUnitTest.h"

#include "Utilities.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UtilitiesTest)
	{
	public:
		
		TEST_METHOD(TestPopulateCitiesFromFile)
		{
			std::vector<City> cities;
			const std::string configFile = "test_latlong.csv";
			Utilities::PopulateCitiesFromFile(cities, configFile);
			Assert::AreEqual((int)cities.size(), 8);
			City& city = cities[0];
			Assert::AreEqual( "Birmingham", city.getName().c_str() );
			Assert::AreEqual( 33.57, city.getCoordinates().getLatitude(), 0.001 );
			Assert::AreEqual( 86.75, city.getCoordinates().getLongitude(), 0.001 );
			Assert::AreEqual( "Alabama", city.getProvinceState().c_str() );
			Assert::AreEqual( "USA", city.getCountry().c_str() );
		}

	};
}