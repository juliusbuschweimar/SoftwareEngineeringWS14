#include "celsiustofahrenheitconverter.hpp"

#include <string>

CelsiusToFahrenheitConverter::CelsiusToFahrenheitConverter()
{
}

/*In: double value of dollars
*Out: Euro value of input dollars as of 19.10.14
*/
double CelsiusToFahrenheitConverter::convert(double inputCelsius){
	return inputCelsius *1.8 + 32; //Quelle: google.com
}

std::string CelsiusToFahrenheitConverter::toString() const{
	return "Celsius to Fahrenheit Converter";
}

void CelsiusToFahrenheitConverter::print() const{
	std::cout << this->toString();
}
