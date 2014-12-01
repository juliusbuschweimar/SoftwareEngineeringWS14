#ifndef FACTORY_HPP
#define	FACTORY_HPP

#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "fahrenheittocelsiusconverter.hpp"
#include "celsiustofahrenheitconverter.hpp"
#include "kilometertoyardsconverter.hpp"
#include "yardstokilometersconverter.hpp"
#include <map>
#include <string>
typedef Converter* (*fcreate)();
class ConverterFactory {
	
	public:
		
		Converter* create(std::string const& converterName) const;
		static ConverterFactory* _instance();
	
	private:
		ConverterFactory();
		static ConverterFactory* instance;
		std::map<std::string, fcreate> factory_map;
		
};


#endif  /* FACTORY_HPP */