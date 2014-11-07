#include "yardstokilometersconverter.hpp"

#include <string>

YardsToKilometersConverter::YardsToKilometersConverter()
{
}

/*In: value of Yards
*Out: value of Kilometers
*/
double YardsToKilometersConverter::convert(double inputYards){
	return inputYards * 0,0009144; //Quelle: google.com
}

std::string YardsToKilometersConverter::toString() const{
	return "Yards to Kilometers Converter";
}

void YardsToKilometersConverter::print() const{
	std::cout << this->toString();
}
