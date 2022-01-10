CXX=g++
CXXFLAGS=-std=c++11

build: main.cpp rsa.hpp includes/prime.hpp
	@echo "\n\nBuilding..."
	$(CXX) $(CXXFLAGS) -o rsa.out main.cpp

run: rsa.out
	@echo "\n\nExecuting..."
	./rsa.out

clean: rsa.out
	@echo "\n\nCleaning..."
	rm rsa.out

all: build run clean
