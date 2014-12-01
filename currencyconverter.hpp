#ifndef CURRENCYCONVERTER_HPP
#define	CURRENCYCONVERTER_HPP
#include "converter.hpp"

class CurrencyConverter : public Converter 
{
  public:
    virtual double convert(double currency) = 0;
};

#endif	// CURRENCYCONVERTER_HPP 