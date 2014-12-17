#include "celsiustofahrenheitconverter.hpp"

#include <string>



/*In: double value of dollars
*Out: Euro value of input dollars as of 19.10.14
*/
double CelsiusToFahrenheitConverter::convert(double inputCelsius) const{
	return Converter::convert(inputCelsius)*1.8 + 32; //Quelle: google.com
}

std::string CelsiusToFahrenheitConverter::toString() const{
	return "Celsius to Fahrenheit Converter";
}

void CelsiusToFahrenheitConverter::print() const{
	std::cout << this->toString();
}
Converter* CelsiusToFahrenheitConverter::create() {
    return new CelsiusToFahrenheitConverter(nullptr);
}

Converter* CelsiusToFahrenheitConverter::create(Converter* converter) {
    return new CelsiusToFahrenheitConverter(converter);
}

CelsiusToFahrenheitConverter::CelsiusToFahrenheitConverter(Converter* base) {
    m_base = base;
}