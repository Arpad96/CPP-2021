#include "Point.h"

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

/*double distanceTo(const Point& point)const
{

}*/


