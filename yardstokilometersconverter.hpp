#ifndef YARDSTOKILOMETERSCONVERTER_H
#define YARDSTOKILOMETERSCONVERTER_H

#include "lengthconverter.hpp"

class YardsToKilometersConverter : public LengthConverter
{
public:
	YardsToKilometersConverter();
	double convert(double inputYards);
	std::string toString() const;
	void print() const;
	static Converter* create();
};

#endif // YARDSTOKILOMETERSCONVERTER_H