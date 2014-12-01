#ifndef TEMPERATURECONVERTER_HPP
#define	TEMPERATURECONVERTER_HPP
#include "converter.hpp"

class TemperatureConverter : public Converter 
{
  public:
    virtual double convert(double temperature) = 0;
};

#endif	/* TEMPERATURECONVERTER_HPP */