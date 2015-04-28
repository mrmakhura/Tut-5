#ifndef TRIANGLE_H
#define TRIANGLE_H
#include <string>
#include<iomanip>
#include "Shapes.h"

using namespace std;
class Triangle : public Shape
{
public:
	Triangle();
	void name() const;
	float perimeter();
	float area();
	void draw() const;
	void setHB(float, float);

};

#endif