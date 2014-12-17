#include "yardstokilometersconverter.hpp"

#include <string>




/*In: value of Yards
*Out: value of Kilometers
*/
double YardsToKilometersConverter::convert(double inputYards) const{
	return Converter::convert(inputYards)* 0.0009144; //Quelle: google.com
}

std::string YardsToKilometersConverter::toString() const{
	return "Yards to Kilometers Converter";
}

void YardsToKilometersConverter::print() const{
	std::cout << this->toString();
}
Converter* YardsToKilometersConverter::create() {
    return new YardsToKilometersConverter(NULL);
}

Converter* YardsToKilometersConverter::create(Converter* converter) {
    return new YardsToKilometersConverter(converter);
}

YardsToKilometersConverter::YardsToKilometersConverter(Converter* base) {
    m_base = base;
}