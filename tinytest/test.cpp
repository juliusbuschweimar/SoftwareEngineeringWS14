#include "tinytest.h"

#include "../factory.hpp"
#include "../factory.cpp"
#include "../dollartoeuroconverter.hpp"
#include "../eurotodollarconverter.hpp"
#include "../fahrenheittocelsiusconverter.hpp"
#include "../celsiustofahrenheitconverter.hpp"
#include "../kilometertoyardsconverter.hpp"
#include "../yardstokilometersconverter.hpp"


int TestDollarConverter(){
	DollarToEuroConverter c;
	TINYTEST_EQUAL_EPSILON(0.782, c.convert(1));
	TINYTEST_EQUAL_EPSILON(2.72136, c.convert(3.48));
  return 1;
}

int TestEuroConverter(){
    EuroToDollarConverter c;
    TINYTEST_EQUAL_EPSILON(1.28, c.convert(1));
    TINYTEST_EQUAL_EPSILON(4.4544, c.convert(3.48));
  return 1;
}

int TestCelsiusConverter(){
	CelsiusToFahrenheitConverter c;
	TINYTEST_EQUAL_EPSILON(33.8, c.convert(1));
	TINYTEST_EQUAL_EPSILON(35.006, c.convert(1.67));
  return 1;
}

int TestFahrenheitConverter(){
    FahrenheitToCelsiusConverter c;
    TINYTEST_EQUAL_EPSILON(-17.22205, c.convert(1));
    TINYTEST_EQUAL_EPSILON(-16.12061, c.convert(2.98));
  return 1;
}

int TestYardsConverter(){
	YardsToKilometersConverter c;
	TINYTEST_EQUAL_EPSILON(0.0009144, c.convert(1));
	TINYTEST_EQUAL_EPSILON(0.23389346, c.convert(255.789));
  return 1;
}

int TestKilometersConverter(){
    KilometersToYardsConverter c;
    TINYTEST_EQUAL_EPSILON(1093.6133, c.convert(1));
    TINYTEST_EQUAL_EPSILON(377.296589, c.convert(0.345));
  return 1;
}

int TestFactoryEuroToDollar(){
    std::string conversion="EuroToDollar";
    auto conv = ConverterFactory::_instance()->create("EuroToDollar");
    conv->print();
        TINYTEST_EQUAL_EPSILON(1.28, conv->convert(1));
  return 1;

}

int TestFactoryDollarToEuro(){
    std::string conversion="DollarToEuro";
    auto c = ConverterFactory::_instance()->create(conversion);
    if(c){
        TINYTEST_EQUAL_EPSILON(0.782, c->convert(1));
    }
  return 1;
}

int TestFactoryCelsiusToFahrenheit(){
    std::string conversion="CelsiusToFahrenheit";
    auto c = ConverterFactory::_instance()->create(conversion);
    if(c){
        TINYTEST_EQUAL_EPSILON(33.8, c->convert(1));
    }
  return 1;
}

int TestFactoryFahrenheitToCelsius(){
    std::string conversion="FahrenheitToCelsius";
    auto c = ConverterFactory::_instance()->create(conversion);
    if(c){
        TINYTEST_EQUAL_EPSILON(-17.22205, c->convert(1));
    }
  return 1;
}

int TestFactoryKilometerToYards(){
    std::string conversion="KilometerToYards";
    auto c = ConverterFactory::_instance()->create(conversion);
    if(c){
        TINYTEST_EQUAL_EPSILON(1093.6133, c->convert(1));
    }
  return 1;
}

int TestFactoryYardsToKilometer(){
    std::string conversion="YardsToKilometer";
    auto c = ConverterFactory::_instance()->create(conversion);
    if(c){
        TINYTEST_EQUAL_EPSILON(0.0009144, c->convert(1));
    }
  return 1;
}





TINYTEST_START_SUITE(SimpleSuite);
  
  TINYTEST_ADD_TEST(TestDollarConverter);
  TINYTEST_ADD_TEST(TestEuroConverter);
  TINYTEST_ADD_TEST(TestCelsiusConverter);
  TINYTEST_ADD_TEST(TestFahrenheitConverter);
  TINYTEST_ADD_TEST(TestYardsConverter);
  TINYTEST_ADD_TEST(TestKilometersConverter);
  
  TINYTEST_ADD_TEST(TestFactoryEuroToDollar);
  TINYTEST_ADD_TEST(TestFactoryDollarToEuro);
  TINYTEST_ADD_TEST(TestFactoryCelsiusToFahrenheit);
  TINYTEST_ADD_TEST(TestFactoryFahrenheitToCelsius);
  TINYTEST_ADD_TEST(TestFactoryKilometerToYards);
  TINYTEST_ADD_TEST(TestFactoryYardsToKilometer);
 


TINYTEST_END_SUITE();

TINYTEST_MAIN_SINGLE_SUITE(SimpleSuite);