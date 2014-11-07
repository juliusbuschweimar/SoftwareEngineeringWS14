#ifndef CURRENCYCONVERTER_HPP
#define	CURRENCYCONVERTER_HPP
#include "converter.hpp"

class CurrencyConverter : public converter 
{
  public:
    virtual double convert(double currency) = 0;
};

#endif	// CURRENCYCONVERTER_HPP 