#ifndef EUROTODOLLARCONVERTER_H
#define EUROTODOLLARCONVERTER_H
#include "converter.hpp"

class EuroToDollarConverter: public converter
{
public:
	EuroToDollarConverter();
	double convert(double inEuro);
	std::string toString() const;
	void print() const;
};

#endif // EUROTODOLLARCONVERTER_H
