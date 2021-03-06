#include "fahrenheittocelsiusconverter.hpp"

#include <string>



/*In: value in Fahrenheit
*Out: value in Celsius
*/
double FahrenheitToCelsiusConverter::convert(double inputFahrenheit)const{
	return Converter::convert(inputFahrenheit - 32) * 5/9; // Quelle: google.com
}

std::string FahrenheitToCelsiusConverter::toString() const{
	return "Fahrenheit to Celsius Converter";
}

void FahrenheitToCelsiusConverter::print() const{
	std::cout << this->toString();
}
Converter* FahrenheitToCelsiusConverter::create() {
    return new FahrenheitToCelsiusConverter(nullptr);
}

Converter* FahrenheitToCelsiusConverter::create(Converter* converter) {
   
    return new FahrenheitToCelsiusConverter( converter);
}

FahrenheitToCelsiusConverter::FahrenheitToCelsiusConverter(Converter* base) {
    m_base = base;
}