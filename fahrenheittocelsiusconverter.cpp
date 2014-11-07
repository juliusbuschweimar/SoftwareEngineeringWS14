#include "FahrenheitToCelsiusConverter.hpp"

#include <string>

FahrenheitToCelsiusConverter::FahrenheitToCelsiusConverter(){
}

/*In: value in Fahrenheit
*Out: value in Celsius
*/
double FahrenheitToCelsiusConverter::convert(double inputFahrenheit){
	return (inputFahrenheit - 32) * 5/9; // Quelle: google.com
}

std::string FahrenheitToCelsiusConverter::toString() const{
	return "Fahrenheit to Celsius Converter";
}

void FahrenheitToCelsiusConverter::print() const{
	std::cout << this->toString();
}
