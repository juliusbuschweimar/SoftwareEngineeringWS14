# minimal makefile for SE class
all: main test

# main depends on all cpp files
main: $(patsubst %.cpp,%.o,$(wildcard *.cpp))
	g++ -Wall -o $@ $^

# a slightly ugly hack to make .o depend on .hpp if it exists
.SECONDEXPANSION:
%.o: %.cpp $$(wildcard $$*.hpp)
	g++ -Wall -c -o $@ $<

test:
	./main DollarToEuro 10000
	./main EuroToDollar 10000
	./main CelisiusToFahrenheit 10000
	./main FahrenheitToCelsius 10000
	./main KilometersToYards 10000
	./main YardsToKilometers 10000

clean:
	rm main *.o

