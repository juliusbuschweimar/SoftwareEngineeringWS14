#ifndef FAHRENHEITTOCELSIUSCONVERTER_H
#define FAHRENHEITTOCELSIUSCONVERTER_H

#include "temperatureconverter.hpp"

class FahrenheitToCelsiusConverter: public TemperatureConverter
{
public:
	FahrenheitToCelsiusConverter();
	double convert(double inFahrenheit);
	std::string toString() const;
	void print() const;
	static Converter* create();
};

#endif // FAHRENHEITTOCELSIUSCONVERTER_H