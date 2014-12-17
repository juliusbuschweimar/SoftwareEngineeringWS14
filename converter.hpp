#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <string>

class Converter
{
  public:
    Converter();
    Converter(Converter* base);
    static Converter* create();
    static Converter* create(Converter* base);
    virtual double convert(double inValue) const= 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
    void link(Converter* const& con);
 
  	Converter* m_base;
};

#endif // CONVERTER_H



