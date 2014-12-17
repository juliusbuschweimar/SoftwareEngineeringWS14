#ifndef INVERSE_H
#define INVERSE_H

#include <iostream>
#include <typeinfo>
#include <string>
#include "converter.hpp"
#include "dollartoeuroconverter.hpp"
//#include "eurotodollarconverter.hpp"
#include "celsiustofahrenheitconverter.hpp"
#include "fahrenheittocelsiusconverter.hpp"

class Inverse : public Converter
{
  public:

    Inverse(Converter* const& conv) : m_converter{conv} {}
    virtual double convert(double inValue) const;
    virtual void print() const;
    virtual std::string toString() const;
    static Converter* create();
    static Converter* create(Converter* base);


  private:
    Converter* m_converter;


};



#endif  /* INVERSE_HPP */
