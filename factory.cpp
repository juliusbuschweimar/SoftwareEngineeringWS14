#include "factory.hpp"

ConverterFactory* ConverterFactory::instance = NULL;

ConverterFactory::ConverterFactory(): 
factory_map{{"EuroToDollar", &EuroToDollarConverter::create},
        	{"DollarToEuro", &DollarToEuroConverter::create},
        	{"KilometersToYards", &KilometersToYardsConverter::create},
        	{"YardsToKilometers", &YardsToKilometersConverter::create},  
        	{"FahrenheitToCelsius", &FahrenheitToCelsiusConverter::create},
        	{"CelsiusToFahrenheit", &CelsiusToFahrenheitConverter::create}}
			{}



Converter* ConverterFactory::create(const std::string& Name) const {
    
	auto i = factory_map.find(Name);
    if (i != factory_map.end())
    {
    return factory_map.at(Name)();
    }else
    {
    printf("Error: Function is not available.\n");
    return NULL;
    }
    /*if (factory_map.find(Name) == factory_map.end())
        return nullptr;
    else
        return factory_map.at(Name)();*/
    }

ConverterFactory* ConverterFactory::_instance() {
    if (!instance){
        instance = new ConverterFactory();
    }
    return instance;
}

