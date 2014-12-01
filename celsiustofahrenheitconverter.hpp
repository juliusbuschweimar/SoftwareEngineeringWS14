#ifndef CELSIUSTOFAHRENHEITCONVERTER_H
#define CELSIUSTOFAHRENHEITCONVERTER_H

#include "temperatureconverter.hpp"
#include "converter.hpp"
class CelsiusToFahrenheitConverter: public TemperatureConverter
{
public:
	CelsiusToFahrenheitConverter(){};
	double convert(double inCelsius) const;
	std::string toString() const;
	void print() const;
	static Converter* create();
};

#endif // CELSIUSTOFAHRENHEITCONVERTER_H