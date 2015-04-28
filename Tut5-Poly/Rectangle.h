#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <string>
#include<iomanip>
#include "Shapes.h"

using namespace std;

class Rectangle : public Shape
{
public:
	Rectangle();
	void name() const;
	float perimeter();
	float area();
	void draw() const;
	void setHB(float, float);

};

#endif