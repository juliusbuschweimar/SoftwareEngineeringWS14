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
  return 0;
}