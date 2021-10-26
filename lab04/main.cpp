#include<iostream>
#include "Point.h"
#include "PointSet.h"

using namespace std;
int main() 
{
	Point p1(3, 4), p2(9, 1);
	cout<<"Ket pont kozotti tavolsag: " << p1.distanceTo(p2);

	//cout << "A P1" << p1.print() << "es a P2 " << p2.print();

	PointSet A(20);

	A.printPoints();


}