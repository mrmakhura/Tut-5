#ifndef CIRCLE_H
#define CIRCLE_H


#include <string>
#include<iomanip>

#include "Shapes.h"
using namespace std;

class Circle : public Shape
{
public:
	 Circle();
	 void name() const;
	 float perimeter();
	 float area();
	 void draw() const;
	 void setRadius(float);

private:
	float radius;
	const double pi = 3.14;
};

#endif