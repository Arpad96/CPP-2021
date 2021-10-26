#include "Point.h"
#include <math.h>
#include <iostream>

using namespace std;

Point::Point(int x, int y)
{
	if (x >= 0 && x <= 2000) this->x = x;
	else
		this->x = 0;
	if (y >= 0 && y <= 2000) this->y = y;
	else
		this->y = 0;
}

int Point::getX() const
{
	return x;
}

int Point::getY() const 
{
	return y;
}

double Point::distanceTo(const Point& point)const
{
	int distX = pow(point.getX() - this->getX(),2);
	int distY = pow(point.getY() - this->getY(),2);

	return sqrt(distX + distY);
}

void Point::print() const
{
	cout << "(" << this->getX() << "," << this->getY() << ")";
}





