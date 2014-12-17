#ifndef COMMAND_HPP
#define	COMMAND_HPP

#include <string>
#include <sstream>
#include "factory.hpp"
#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "fahrenheittocelsiusconverter.hpp"
#include "celsiustofahrenheitconverter.hpp"
#include "kilometertoyardsconverter.hpp"
#include "yardstokilometersconverter.hpp"
class Command {
public:

Command(std::string const& command) : m_command{command} {};
void execute() const;
private:
std::string m_conversion;
double m_value;
std::string m_command;
};
#endif	/* COMMAND_HPP */