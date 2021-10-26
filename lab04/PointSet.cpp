#include <iostream>
#include "PointSet.h"
#include "Point.h"
#include <vector> 
#include <math.h>
#include <time.h>
#include <stdlib.h>

#define M 2000


using namespace std;

PointSet::PointSet(int n)
{
	for (int i = 0; i < n; i++)
	{
		Point p1(rand() % 2000, rand() % 2000);		
		points.push_back(p1);
	}
	computeDistances();
}

void PointSet::computeDistances()
{
	for (int i = 0; i < this->points.size()-1; i++)
	{
		for (int j = i+1; j < this->points.size(); j++)
		{
			distances.push_back(this->points.at(i).distanceTo(this->points.at(j)));
		}		
	}
}

double PointSet::maxDistance() const
{
	double max = this->distances.at(0);
	for (int i = 1; i < this->distances.size(); i++)
	{
		if (this->distances.at(i) > max)
			max = this->distances.at(i);
	}
	return max;
}

void PointSet::printPoints() const
{
	for (int i = 0; i < this->points.size(); i++)
	{
		cout<< "(" << this->points[i].getX() << "," << this->points[i].getY() << ")";
		//this->points[i].print()
	}
}