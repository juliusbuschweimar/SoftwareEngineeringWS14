#include "tinytest.h"

#include "../dollartoeuroconverter.hpp"
#include "../eurotodollarconverter.hpp"
#include "../fahrenheittocelsiusconverter.hpp"
#include "../celsiustofahrenheitconverter.hpp"
#include "../kilometertoyardsconverter.hpp"
#include "../yardstokilometersconverter.hpp"


int test_DollarToEuroConverter_()
{
	DollarToEuroConverter* myConverter = new DollarToEuroConverter();
	TINYTEST_EQUAL(1.27838, myConverter->convert(1));
	TINYTEST_EQUAL(1, myConverter->convert(0.78224));
	TINYTEST_EQUAL(0, myConverter->convert(0));
	TINYTEST_EQUAL(2457, myConverter->convert(3140.97966));
	return 1;
}

TINYTEST_START_SUITE(_Test_);
	TINYTEST_ADD_TEST(test_DollarToEuroConverter_);
	
TINYTEST_END_SUITE();
TINYTEST_MAIN_SINGLE_SUITE(_Test_);