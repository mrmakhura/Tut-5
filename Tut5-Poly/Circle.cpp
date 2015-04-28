#include <iostream>
#include <cmath>
#include <string>
#include "Circle.h"

using namespace std;

Circle::Circle()
{
	radius = 5;
}

void Circle::name() const
{
	cout<< "This Shape is Called A Circle ... "<<endl;
}
float Circle:: perimeter()
{
	return (2*pi*radius);
}

float  Circle::area()
{
	return(pi*(pow(radius,2)));
}

void Circle::setRadius(float x)
{
	radius = x;
}
void Circle::draw()const
{
	cout << "        * *" << endl;
	cout<< "    *         *" << endl;
	cout << "  *             *" << endl;
	cout << " *               *" << endl;
	cout << " *               *" << endl;
	cout << "  *             *" << endl;
	cout << "    *         *" << endl;
	cout << "        * *" << endl;
}
