all: debug release

debug: calc-dbg

calc-dbg: calc.cpp
	g++ -g -O0 calc.cpp -o calc-dbg -Wall

release: calc

calc: calc.cpp
	g++ -O2 calc.cpp -o calc -DNDEBUG -Wall
	
clean:
	rm -f calc calc-dbg
