# minimal makefile for SE class
all: main test

# main depends on all cpp files
main: $(patsubst %.cpp,%.o,$(wildcard *.cpp))
	g++ -Wall -o $@ $^

# a slightly ugly hack to make .o depend on .hpp if it exists
.SECONDEXPANSION:
%.o: %.cpp $$(wildcard $$*.hpp)
	g++ -Wall -c -o $@ $<

test: tinytest/test.o converter.o dollartoeuroconverter.o eurotodollarconverter.o kilometertoyardsconverter.o fahrenheittocelsiusconverter.o yardstokilometersconverter.o celsiustofahrenheitconverter.o
	#g++ -Wall -c test/test.cpp -o test/test.o
	g++ -o tinytest/test $^
	./tinytest/test
buildtest:
	./main DollarToEuro 10000
	./main EuroToDollar 10000
	./main CelisiusToFahrenheit 10000
	./main FahrenheitToCelsius 10000
	./main KilometersToYards 10000
	./main YardsToKilometers 10000

clean:
	rm main *.o tinytest/test tinytest/*.o

