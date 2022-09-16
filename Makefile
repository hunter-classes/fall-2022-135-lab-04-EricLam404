# Starter Makefile
# add .cpp and .h files as specified in each task. 

OBJECTS=main.o shape.o
CXX=g++
CXXFLAG=-Wall -Wpendantic

main: $(OBJECTS)
	$(CXX) -o main $(OBJECTS) $(CXXFLAG)

main.o: main.cpp shape.h
	$(CXX) -c main.cpp

shape.o: shape.cpp shape.h
	$(CXX) -c shape.cpp
	
clean:
	rm -f $(OBJECTS)