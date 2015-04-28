#ifndef SHAPES_H
#define SHAPES_H

using namespace std;
class Shape
{
public:
	Shape( );
	~Shape();
	virtual void name() const;
	virtual float perimeter();
	virtual float area();
	virtual void draw() const;
protected:
	float height;
	float base;
};

#endif