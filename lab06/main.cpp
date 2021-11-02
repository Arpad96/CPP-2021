#include <iostream>
#include "Polynomial.h"
using namespace std;

int main() 
{
	double c1[]{ 1,2,3 };
	double c2[]{ 5,6,7 };
	/**for (int i = 0; i < 3; ++i) {
		cout << c1[i] << " ";
	}*/
	Polynomial p1(2, c1), p2(2,c2);
	cout <<"P1: " << p1 << endl;
	cout << "P2: " << p2 << endl;
	cout << "P1(0) = " << p1.evaluate(0) << endl;
	cout << "P1(1) = " << p1.evaluate(1) << endl;

	cout <<"Osszeg:" << p1 + p2 << endl;

	return 0;
}