#include <iostream>
#include <string>
#include<iomanip>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle() 
{
	height = 10;
	base = 25;
}
void Rectangle::name() const
{
	cout << "This Shape is Called A Rectangle ..."<<endl;
}
float Rectangle::perimeter()
{
	return(2 * base + 2 * height);

}

float Rectangle::area()
{
	return(base*height);
}

void Rectangle :: setHB(float b, float h)
{
	base = b;
	height = h;
}

void Rectangle::draw() const
{
	cout << " *******************" << endl;
	cout << " *                 *" << endl;
	cout << " *                 *" << endl;
	cout << " *                 *" << endl;
	cout << " *                 *" << endl;
	cout << " *******************" << endl;
}