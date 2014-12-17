#ifndef YARDSTOKILOMETERSCONVERTER_H
#define YARDSTOKILOMETERSCONVERTER_H

#include "lengthconverter.hpp"
#include "converter.hpp"


class YardsToKilometersConverter : public LengthConverter
{
public:
	YardsToKilometersConverter(){};
	YardsToKilometersConverter(Converter* base);
	double convert(double inYards) const;
	std::string toString() const;
	void print() const;
	static Converter* create();
	static Converter* create(Converter* converter);
};

#endif // YARDSTOKILOMETERSCONVERTER_H