#include "factory.hpp"

ConverterFactory* ConverterFactory::instance = NULL;

ConverterFactory::ConverterFactory(): 
factory_map{{"EuroToDollar", EuroToDollarConverter::create},
        	{"DollarToEuro", DollarToEuroConverter::create},
        	{"KilometerToYards", KilometersToYardsConverter::create},
        	{"YardsToKilometer", YardsToKilometersConverter::create},  
        	{"FahrenheitToCelsius", FahrenheitToCelsiusConverter::create},
        	{"CelsiusToFahrenheit", CelsiusToFahrenheitConverter::create}}
			{}



Converter* ConverterFactory::create(const std::string& converterName) const {
    
	auto i = factory_map.find(converterName);
    if (i != factory_map.end())
    {
    return factory_map.at(converterName)();
    }else
    {
    printf("Error: Function is not available.\n");
    return NULL;
    }
    if (factory_map.find(converterName) == factory_map.end())
        return nullptr;
    else
        return factory_map.at(converterName)();
}

ConverterFactory* ConverterFactory::_instance() {
    if (!instance){
        instance = new ConverterFactory();
    }
    return instance;
}

