#ifndef EUROTODOLLARCONVERTER_H
#define EUROTODOLLARCONVERTER_H

#include "currencyconverter.hpp"
#include "converter.hpp"

class EuroToDollarConverter: public CurrencyConverter
{
public:
	EuroToDollarConverter(){};
	double convert(double inEuros) const;
	std::string toString() const;
	void print() const;
	static Converter* create();
};

#endif // EUROTODOLLARCONVERTER_H
