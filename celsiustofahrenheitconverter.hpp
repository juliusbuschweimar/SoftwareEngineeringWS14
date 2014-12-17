#ifndef CELSIUSTOFAHRENHEITCONVERTER_H
#define CELSIUSTOFAHRENHEITCONVERTER_H

#include "temperatureconverter.hpp"
#include "converter.hpp"
class CelsiusToFahrenheitConverter: public TemperatureConverter
{
public:
	CelsiusToFahrenheitConverter(){};
	CelsiusToFahrenheitConverter(Converter* base);
	double convert(double inCelsius) const;
	std::string toString() const;
	void print() const;
	static Converter* create();
	static Converter* create(Converter* converter);
};

#endif // CELSIUSTOFAHRENHEITCONVERTER_H