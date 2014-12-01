#ifndef EUROTODOLLARCONVERTER_H
#define EUROTODOLLARCONVERTER_H

#include "currencyconverter.hpp"

class EuroToDollarConverter: public CurrencyConverter
{
public:
	EuroToDollarConverter();
	double convert(double inEuro);
	std::string toString() const;
	void print() const;
	static Converter* create();
};

#endif // EUROTODOLLARCONVERTER_H
