#include <iostream>
#include <cmath>
#include <string>
#include<iomanip>

#include "Triangle.h"

using namespace std;
Triangle::Triangle()
{
	height = 10;
	base = 25;
}

void Triangle::name() const
{
	cout << "This Shape is Called A Triangle ..."<<endl;
}
float Triangle::perimeter()
{
	float side;
	side = sqrt(pow(base, 2) + pow(height, 2));

	return(side + side + base);

}
float Triangle::area()
{

	return(0.5*(base)*(height));

}

void Triangle::setHB(float h, float b)
{
	base = b;
	height = h;
}

void Triangle::draw() const
{
	cout << "          *" << endl;
	cout << "        *   *" << endl;
	cout << "       *     *" << endl;
	cout << "      *       *" << endl;
	cout << "     *         *" << endl;
	cout << "    *           *" << endl;
	cout << "   ***************" << endl;
}
