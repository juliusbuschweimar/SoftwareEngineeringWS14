#include "command.hpp"


void Command::execute() const {
std::stringstream ss(m_command);
std::string help;
ss >> help;
Converter* first = ConverterFactory::_instance()->create(help);
if(!first)
{
std::cout<< help <<" is no Converter!\n";
return;
}
Converter* temp = first;
ss >> help;
Converter* temp2;
while(!isdigit(help.at(0)))
{
temp2 = ConverterFactory::_instance()->create(help);
if(!temp2)
{
std::cout<< help <<" is no Converter!\n";
return;
}
temp->link(temp2);
temp = temp2;
if(!(ss >> help))
{
std::cout<<"You need a conversionvalue!!!!\n";
return;
}
}
std::cout<<"Using converter: "<< first->toString() <<" converted: " <<std::stod(help)<< " to: "<< first->convert(std::stod(help)) <<std::endl;
}