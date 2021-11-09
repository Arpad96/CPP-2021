#include<iostream>
#include "Szerzo.h"
#include <vector>
#include <fstream>
#include <stdexcept>
#include "Konyv.h"

using namespace std;

int main()
{
	cout << "1.feladat\na" << endl;
	Szerzo sz1("Antal", "Brigitta");//Szerzo objektum-> nem dinamikus helyfoglalas
	cout << sz1;
	cout << "b" << endl;
	Szerzo* sz2 = new Szerzo("Kis", "Tamara");//Szerzo objektum-> dinamikus helyfoglalas
	cout << *sz2;
	cout << "c" << endl;
	vector<Szerzo>sz; //dinamikus tomb
	ifstream fin("be.txt");
	if (!fin) {
		cout << "sikertelen beolvasas" << endl;
		return 404;
	}
	string a, b;
	while (fin >> a)
	{
		//cout << a << endl;
		fin >> b;
		sz.push_back(Szerzo(a, b));
	}
	int szam = 1;
	for (auto i : sz)
	{
		cout << szam++ << " " << i;
	}
	cout << "d" << endl;
	sz.push_back(sz1);
	sz.push_back(*sz2);
	szam = 1;
	for (auto i : sz)
	{
		cout << szam++ << " " << i;
	}

	Konyv alma;
	alma.addSzerzo(sz1); alma.addSzerzo(sz1);
	cout <<  alma << endl;
		
	try
	{
		cout << "Az 6ik szerzo:" << alma[6] << endl;
	}
	catch (const std::exception& e)
	{
		cout << e.what() << endl;
	}
}