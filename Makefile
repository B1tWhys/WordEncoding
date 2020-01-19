CXX = g++
CXXFLAGS = -g -O0

main: Main.o Word.o
	$(CXX) $(CXXFLAGS) -o encodingGen Main.o Word.o

Main.o: Main.cpp
	$(CXX) $(CXXFLAGS) -c Main.cpp

Word.o: Word.hpp Word.cpp

run: main
	./encodingGen

dbg: main
	gdb ./encodingGen 

.PHONY: clean
clean:
	rm -f ./encodingGen *.o
