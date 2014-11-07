#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "fahrenheittocelsiusconverter.hpp"
#include "celsiustofahrenheitconverter.hpp"
#include "kilometertoyardsconverter.hpp"
#include "yardstokilometersconverter.hpp"

int main(int argc, char* argv[]) {
  if(argc > 3) {
    std::cout << "Only two arguments can be converted! \n";
    return 0;
  } 
  if (argc>1) {
    std::string conversion = argv[1];
    if (argc=2){
      double value = atof(argv[2]);//http://www.cplusplus.com/reference/cstdlib/atof/
           std:cout<< "Conversion: "<<conversion<<std::endl;
      if (conversion=="DollarToEuro"){
        DollarToEuroConverter* myConverter = new DollarToEuroConverter();
        double euros = myConverter->convert(value);
        std::cout << myConverter->toString() << " has converted "<< value << " Dollars to " << euros <<" Euros!"<<std::endl;  
      } else
      if (conversion=="EuroToDollar"){
        EuroToDollarConverter* myConverter = new EuroToDollarConverter();
        double dollars = myConverter->convert(value);
        std::cout << myConverter->toString() << " has converted "<< value << " Euros to " << dollars <<" Dollars!"<<std::endl;  
      } else
      if (conversion=="CelsiusToFahrenheit"){
        CelsiusToFahrenheitConverter* myConverter = new CelsiusToFahrenheitConverter();
        double fahrenheit = myConverter->convert(value);
        std::cout << myConverter->toString() << " has converted "<< value << " °Celsius to " << fahrenheit <<" °Fahrenheit!"<<std::endl;  
      } else
      if (conversion=="FahrenheitToCelsius"){
        FahrenheitToCelsiusConverter* myConverter = new FahrenheitToCelsiusConverter();
        double celsius = myConverter->convert(value);
        std::cout << myConverter->toString() << " has converted "<< value << " °Fahrenheit to " << celsius <<" °Celsius!"<<std::endl;  
      } else    
      if (conversion=="KilometersToYards") {
        KilometersToYardsConverter* myConverter = new KilometersToYardsConverter();
        double yards = myConverter->convert(value);
        std::cout << myConverter->toString() << " has converted "<< value << " Kilometers to " << yards <<" Yards!"<<std::endl;
      } else 
      if (conversion=="YardsToKilometers") {
        YardsToKilometersConverter* myConverter = new YardsToKilometersConverter();
        double kilometers = myConverter->convert(value);
        std::cout << myConverter->toString() << " has converted "<< value << " Yards to " << kilometers <<" Kilometers!"<<std::endl;  
      }
    } else  std::cout<< "Please type in the second argument "<<std::endl;
  }
  return 0;
}