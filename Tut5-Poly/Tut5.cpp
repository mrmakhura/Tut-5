#include <iostream>
#include <vector>
#include <string>
#include<iomanip>
#include<stdlib.h>//srand , rand-random
#include "Shapes.h"
#include "Circle.h"
#include "Triangle.h"
#include "Rectangle.h"

using namespace std;

void GetShape(Shape * a)
{
	/*cout << "Choose a Shape you want to prinnt Circle[1] or Triangle[2] or Rectangle[3] ";
	int choice;
	cin >> choice;*/
	float p, ar;

		(*a).name();
		p = (*a).perimeter();
		ar = (*a).area();
		cout << "The perimeter of the Shape below is :" << p << endl << "The area is :" << ar << endl<<endl<<endl;
		(*a).draw();

	
}

int main()
{
	vector<Shape*> shapes;
	shapes.push_back(new Shape());
	shapes.push_back(new Circle());
	shapes.push_back(new Triangle());
	shapes.push_back(new Rectangle());
	int iRandom;
	for (int i = 0; i < 11; ++i)
	{
		iRandom = rand() % 3 + 1; // create a random number between 1 and 3

		GetShape(shapes[iRandom]);
		cout << endl<<endl;
	}


	

	system("pause");
	return 0;

}