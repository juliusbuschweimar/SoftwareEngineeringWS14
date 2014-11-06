#include "dollartoeuroconverter.hpp"
#include <string>

DollarToEuroConverter::DollarToEuroConverter()
{
}

/*In: double value of dollars
 *Out: Euro value of input dollars as of 19.10.14
 */
double DollarToEuroConverter::convert(double inputDollars){
  return inputDollars*0.78224;
}

std::string DollarToEuroConverter::toString() const{
  return "Dollar to Euro Converter";
}

void DollarToEuroConverter::print() const{
  std::cout<<this->toString();
}
