#ifndef KILOMETERSTOYARDSCONVERTER_H
#define KILOMETERSTOYARDSCONVERTER_H

#include "lengthconverter.hpp"

class KilometersToYardsConverter : public LengthConverter
{
public:
	KilometersToYardsConverter();
	double convert(double inputKilometers);
	std::string toString() const;
	void print() const;
	static Converter* create();
};

#endif // KILOMETERSTOYARDSCONVERTER_H