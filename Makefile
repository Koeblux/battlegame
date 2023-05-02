CXX=g++
CXXFLAGS=-Wall -Wextra -pedantic -std=c++11
LDFLAGS=

all: main

main: main.o unite.o joueur.o roboy.o
	$(CXX) $(LDFLAGS) -o $@ $^

main.o: main.cpp joueur.hpp unite.hpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

joueur.o: joueur.cpp joueur.hpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

unite.o: unite.cpp unite.hpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

roboy.o: roboy.cpp roboy.hpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -f main main.o base.o