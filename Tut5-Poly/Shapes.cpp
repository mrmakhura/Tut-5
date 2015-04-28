#include <iostream>
#include <string>
#include<iomanip>
#include "Shapes.h";

using namespace std;

Shape::Shape() :height(0), base(0)
{
}
Shape::~Shape()
{

}
float Shape::area()
{
	return 0.0;
}

float Shape::perimeter()
{
	return 0.0;
}
void Shape::name() const
{
	cout << " This is a generic Shape .."<<endl;
}
void Shape::draw()const
{
	cout << "So , there is nothing to draw just know\nthat this is a generic shape ..." << endl;
}