#ifndef CONVERTER_H
#define CONVERTER_H

#include <iostream>
#include <string>

class Converter
{
  public:
    
    static Converter* create();
    virtual double convert(double inValue) const= 0;
    virtual std::string toString() const = 0;
    virtual void print() const = 0;
};

#endif // CONVERTER_H
