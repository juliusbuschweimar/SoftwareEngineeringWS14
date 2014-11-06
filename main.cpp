#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"

int main(int argc, char* argv[])
{
  std::string conversion = argv[0];
  std::string value = argv[1];

  /*
   * TODO
   *
   * use desired conversion here
   *
  */

  DollarToEuroConverter* myConverter = new DollarToEuroConverter();
  double aLotOfDollars = 10000;
  double aLotOfEuros = myConverter->convert(aLotOfDollars);
  std::cout << myConverter->toString() << " has converted "<< aLotOfDollars << " Dollar to " << aLotOfEuros <<" Euros!"<<std::endl;
  return 0;
}

