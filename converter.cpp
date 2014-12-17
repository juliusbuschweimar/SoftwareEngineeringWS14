#include "converter.hpp"

Converter::Converter() :
    m_base {nullptr}
{}



Converter* Converter::create(){
    return nullptr;
}

Converter::Converter(Converter* base) :
    m_base {base}
{}



Converter* Converter::create(Converter* base){
    return nullptr;
}

double Converter::convert(double inValue) const {
    if (m_base==nullptr){
        return inValue; 
    } else {
        return m_base->convert(inValue);
    }
}

void Converter::link(Converter* const& con)
{
if(con)
{
if(m_base)
{
// std::cout<<"hier";
m_base->link(con);
}
else
{
// std::cout<<"h ";
m_base = con;
}
}
}
std::string Converter::toString() const{
if(m_base)
{
return " " + m_base->toString()+ " ";
}
else
{
return " ";
}
}

