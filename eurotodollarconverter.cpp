#include "eurotodollarconverter.hpp"
#include <string>


/*In: double value of euro
*Out: dollar value of input euro as of 19.10.14
*/
double EuroToDollarConverter::convert(double inputEuros) const{
	return Converter::convert(inputEuros) *1.27838;// Quelle: google.com
}

std::string EuroToDollarConverter::toString() const{
	return "Euro to Dollar Converter";
}

void EuroToDollarConverter::print() const{
	std::cout << this->toString();
}
Converter* EuroToDollarConverter::create() {
    return new EuroToDollarConverter(nullptr);
}

Converter* EuroToDollarConverter::create(Converter* converter) {
    return new EuroToDollarConverter(converter);
}

EuroToDollarConverter::EuroToDollarConverter(Converter* base) {
    m_base = base;
}