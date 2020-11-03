all: shapes

shape.o: shape.cpp shapes.h
	g++ -c shape.cpp

shapedriver.o: shape.o shapedriver.cpp
	g++ -c shapedriver.cpp

shapes: shapedriver.o shape.o
	g++ -o shapes shapedriver.o shape.o