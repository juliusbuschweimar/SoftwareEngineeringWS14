#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "currencyconverter.hpp"
#include "converter.hpp"

class DollarToEuroConverter: public CurrencyConverter
{
public:
	DollarToEuroConverter(){};
	DollarToEuroConverter(Converter* base);
	double convert(double inDollar) const;
	std::string toString() const;
	void print() const;
	static Converter* create();
	static Converter* create(Converter* converter);
};

#endif // DOLLARTOEUROCONVERTER_H
