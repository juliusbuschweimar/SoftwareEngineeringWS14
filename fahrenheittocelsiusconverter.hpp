#ifndef FAHRENHEITTOCELSIUSCONVERTER_H
#define FAHRENHEITTOCELSIUSCONVERTER_H

#include "temperatureconverter.hpp"
//#include "converter.hpp"
class FahrenheitToCelsiusConverter: public TemperatureConverter
{
public:
	FahrenheitToCelsiusConverter(){};
	FahrenheitToCelsiusConverter(Converter* base);
	double convert(double inFahrenheit) const;
	std::string toString() const;
	void print() const;
	static Converter* create();
	static Converter* create(Converter* converter);
};

#endif // FAHRENHEITTOCELSIUSCONVERTER_H