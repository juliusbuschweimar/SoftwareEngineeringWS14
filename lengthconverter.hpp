#ifndef LENGTHCONVERTER_HPP
#define	LENGTHCONVERTER_HPP
#include "converter.hpp"

class LengthConverter : public Converter 
{
  public:
    virtual double convert(double length) const= 0;
};

#endif	// LENGTHCONVERTER_HPP 