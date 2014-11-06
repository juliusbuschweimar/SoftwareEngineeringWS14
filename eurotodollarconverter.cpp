#include "EuroToDollarConverter.hpp"
#include <string>

EuroToDollarConverter::EuroToDollarConverter()
{
}

/*In: double value of euro
*Out: dollar value of input euro as of 19.10.14
*/
double EuroToDollarConverter::convert(double inputEuros){
	return inputEuros *1.27838; 
}

std::string EuroToDollarConverter::toString() const{
	return "Euro to Dollar Converter";
}

void EuroToDollarConverter::print() const{
	std::cout << this->toString();
}
