/* Shape class */
#include <string>
#define PI 3.14159

class Shape {

public:
	virtual float area() const = 0;
	virtual float perimeter() const = 0;
	virtual std::string str() const = 0;
	
	int checkVar(float variable);
	const char * NegativeSideErr() const throw();
	const char * NegativeRadiusErr() const throw();
};

/* Rectangle class */
class Rectangle : public Shape {

public:
	Rectangle(float length, float width);
	float getlength() const;
	float getwidth() const;
	float area() const;
	float perimeter() const;
	std::string str() const;

private:
	float length;
	float width;
};

/* Square */
class Square : public Rectangle {

public:
	Square(float side);
	std::string str() const;
};

/* Circle */
class Circle : public Shape {

public: 
	Circle(float radius);
	float getradius() const;
	float area() const;
	float perimeter() const;
	std::string str() const;

private:
	float radius;
};