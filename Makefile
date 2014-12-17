# minimal makefile for SE class
all: main test

# main depends on all cpp files
main: $(patsubst %.cpp,%.o,$(wildcard *.cpp))
	g++ -Wall -o $@ $^

# a slightly ugly hack to make .o depend on .hpp if it exists
.SECONDEXPANSION:
%.o: %.cpp $$(wildcard $$*.hpp)
	g++ -Wall -c -o $@ $< -std=c++11

test: 
	#tinytest/test.o converter.o dollartoeuroconverter.o eurotodollarconverter.o kilometertoyardsconverter.o fahrenheittocelsiusconverter.o yardstokilometersconverter.o celsiustofahrenheitconverter.o
	g++ -std=c++11 -Wall -c tinytest/test.cpp -o tinytest/test.o 
	g++ -std=c++11 tinytest/test.cpp converter.cpp dollartoeuroconverter.cpp eurotodollarconverter.cpp kilometertoyardsconverter.cpp fahrenheittocelsiusconverter.cpp yardstokilometersconverter.cpp celsiustofahrenheitconverter.cpp inverse.cpp factory.cpp -o tinytest/test
	g++ -std=c++0x -o ./tinytest/test $^ 
	./tinytest/test
buildtest:
	./main DollarToEuro 
	./main EuroToDollar 
	./main CelisiusToFahrenheit 10000
	./main FahrenheitToCelsius 10000
	./main KilometersToYards 10000
	./main YardsToKilometers 
clean:
	rm main *.o tinytest/test tinytest/*.o

