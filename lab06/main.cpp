#include <iostream>
#include "Polynomial.h"
using namespace std;

int main() 
{
	double c1[]{ 1,2,3 };
	Polynomial p1(2, c1);
	cout <<"P1: " << p1 << endl;
	cout << "P1(0) = " << p1.evaluate(0) << endl;
	cout << "P1(1) = " << p1.evaluate(1) << endl;
	return 0;
}