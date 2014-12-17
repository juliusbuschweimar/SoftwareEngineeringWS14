#include "dollartoeuroconverter.hpp"
#include <string>



/*In: double value of dollars
 *Out: Euro value of input dollars as of 19.10.14
 */
double DollarToEuroConverter::convert(double inputDollars) const{
  return Converter::convert(inputDollars)*0.78224; // Quelle: google.com
}

std::string DollarToEuroConverter::toString() const{
  return "Dollar to Euro Converter";
}

void DollarToEuroConverter::print() const{
  std::cout<<this->toString();
}

Converter* DollarToEuroConverter::create() {
    return new DollarToEuroConverter(nullptr);
}

Converter* DollarToEuroConverter::create(Converter* converter) {
    return new DollarToEuroConverter(converter);
}

DollarToEuroConverter::DollarToEuroConverter(Converter* base) {
    m_base = base;
}