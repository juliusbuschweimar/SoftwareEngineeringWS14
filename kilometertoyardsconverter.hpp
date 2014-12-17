#ifndef KILOMETERSTOYARDSCONVERTER_H
#define KILOMETERSTOYARDSCONVERTER_H

#include "lengthconverter.hpp"
#include "converter.hpp"
class KilometersToYardsConverter : public LengthConverter
{
public:
	KilometersToYardsConverter(){};
	KilometersToYardsConverter(Converter* base);
	double convert(double inKilometers) const;
	std::string toString() const;
	void print() const;
	static Converter* create();
	static Converter* create(Converter* converter);
};

#endif // KILOMETERSTOYARDSCONVERTER_H