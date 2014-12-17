#include <stdio.h>
#include <string>
#include <algorithm>
#include <iostream>
#include <deque>
#include <sstream>
#include "inverse.hpp"
#include "command.hpp"
#include "converter.hpp"
//#include "command.cpp"
#include "factory.hpp"
#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
//#include "eurotodollarconverter.cpp"
#include "fahrenheittocelsiusconverter.hpp"
//#include "fahrenheittocelsiusconverter.cpp"
#include "celsiustofahrenheitconverter.hpp"
#include "kilometertoyardsconverter.hpp"
#include "yardstokilometersconverter.hpp"

int main(int argc, char* argv[]) {
  
  if (argc<=1) {
    std::cout<<"\nInverse:\n";
        double x = 100;
        std::cout<<Inverse::create(DollarToEuroConverter::create())->toString() << " of " << x <<": "<<Inverse::create(DollarToEuroConverter::create())->convert(x)<<"\n";

        std::cout<<"\nGestackt:\n";
        std::cout<<YardsToKilometersConverter::create(CelsiusToFahrenheitConverter::create(YardsToKilometersConverter::create()))->convert(100)<<"\n";
    
        std::cout<<"\nCommand:\n";
        std::deque<Command> commandlist;
        std::string h1;
        double h2;
        
        for (std::string in; std::getline(std::cin, in);) {
            std::stringstream line(in);
            line>>h1;
            line>>h2;
            commandlist.push_back(Command(h1, h2));
        }  
        
        for (auto const& command  : commandlist){
            command.execute();
            commandlist.pop_front();
        }
  }
 
  else{    
        std::cout<<"\nPer Kommandozeilenparameter\n";
        std::string conversion = argv[1];

    if(argc > 3) {
      std::cout << "Only two arguments can be converted! \n";
      return 0;
    } 
    if (argc>1) {
      std::string conversion = argv[1];
      std::string wert=argv[2];
      if (argc>2){
        if(std::count_if(wert.begin(), wert.end(), isdigit)==(int)wert.size()){
          double value = stof(wert);
          std::cout<< "Conversion: "<<conversion<<std::endl;
          auto converter = ConverterFactory::_instance()->create(conversion);
          if (!converter){
              std::cout<< "Converter "<<conversion<<" does not exist."<<std::endl;
          }else {
              float conversionValue = converter->convert(value);
              std::cout<< "Umwandlung: "<<conversionValue<<std::endl;
           }
        }
      } else  std::cout<< "Please type in the second argument "<<std::endl;
    }
  }
  return 0;
}