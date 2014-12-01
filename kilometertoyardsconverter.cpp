#include "kilometertoyardsconverter.hpp"

#include <string>



/*In: value of Kilometers
*Out: value of Yards
*/
double KilometersToYardsConverter::convert(double inputKilometers) const{
	return inputKilometers * 1093.6133; //Quelle: google.com
}

std::string KilometersToYardsConverter::toString() const{
	return "Kilometer to Miles Converter";
}

void KilometersToYardsConverter::print() const{
	std::cout << this->toString();
}

Converter* KilometersToYardsConverter::create() {
    return new KilometersToYardsConverter();
}