#ifndef DOLLARTOEUROCONVERTER_H
#define DOLLARTOEUROCONVERTER_H

#include "currencyconverter.hpp"
#include "converter.hpp"

class DollarToEuroConverter : public CurrencyConverter
{
  public:
    DollarToEuroConverter(){};
    double convert(double inDollars) const;
    std::string toString() const;
    void print() const;
    static Converter* create();
};

#endif // DOLLARTOEUROCONVERTER_H
