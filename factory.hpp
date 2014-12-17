 #ifndef FACTORY_HPP
#define	FACTORY_HPP

#include "dollartoeuroconverter.hpp"
#include "eurotodollarconverter.hpp"
#include "fahrenheittocelsiusconverter.hpp"
#include "celsiustofahrenheitconverter.hpp"
#include "kilometertoyardsconverter.hpp"
#include "yardstokilometersconverter.hpp"
#include "inverse.hpp"
#include "converter.hpp"
#include <map>
#include <string>

class ConverterFactory {
	
	public:
		
		Converter* create(std::string const& Name) const;
		static ConverterFactory* _instance();
	
	//private:
		ConverterFactory();
		static ConverterFactory* instance;
		typedef Converter* (*fcreate)(void);
		std::map<std::string, fcreate> factory_map;
		
};


#endif  /* FACTORY_HPP */