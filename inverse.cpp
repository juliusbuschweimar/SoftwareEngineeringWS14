#include "inverse.hpp"




std::string Inverse::toString() const{
  return "Inverse " + m_converter->toString();
}

void Inverse::print() const{
  std::cout<<"Inverse " +m_converter->toString();
}

Converter* Inverse::create() {
    return new Inverse(nullptr);
}

Converter* Inverse::create(Converter* converter) {
    return new Inverse(converter);
}

double Inverse::convert(double inValue) const {

    if((m_converter->toString()=="Dollar to Euro Converter") || (m_converter->toString()=="Euro to Dollar Converter"))
    {
        return 0;  
    }
    else
    {
        return inValue * inValue / m_converter->convert(inValue);
    }
        
}