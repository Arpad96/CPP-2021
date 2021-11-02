#include "Polynomial.h"
#include <math.h>

Polynomial::Polynomial(int degree, const double coeffiecients[]) 
{
	this->capacity = degree + 1;
	this->coefficients = new double[capacity];
	for (int i = 0; i < this->capacity; ++i) 
	{
		this->coefficients[i] = coeffiecients[i];
	}
}

Polynomial::Polynomial(const Polynomial& that) 
{
	this->capacity = that.capacity;
	this->coefficients = new double[capacity];// <-
	for (int i = 0; i < capacity; ++i) 
	{
		this->coefficients[i] = that.coefficients[i];
	}
}

Polynomial::Polynomial(Polynomial&& that) 
{
	this->capacity = that.capacity;
	this->coefficients = that.coefficients;
	that.capacity = 0;
	that.coefficients = nullptr;
}

Polynomial::~Polynomial() 
{
	if (this->coefficients != nullptr) {
		delete[] this->coefficients;//<-
	}
	this->capacity = 0;
}

int Polynomial::degree() const 
{
	return this->capacity - 1;
}

double Polynomial::evaluate(double x) const //P(x) ertek szamolasa x0 pontban)
{
	double p = this->coefficients[0];
	for (int i = 1; i < this->capacity; ++i) {
		p = p + this->coefficients[i]*pow(x,i);
	}
	return p;
}

/*Polynomial Polynomial::derivative() const {}*/

double Polynomial:: operator[](int index) const 
{
	return coefficients[index];
}

Polynomial operator +(const Polynomial& a, const Polynomial& b) 
{
	double* sor = new double[a.degree() + 1];

	for (int i = 0; i <= a.degree() ; i++)
	{
		sor[i] = a[i] + b[i];
	}

	Polynomial c(a.degree(), sor);
	delete[] sor;
	return c;
}

/*Polynomial operator -(const Polynomial& a) {}

Polynomial operator +(const Polynomial& a, const Polynomial& b) {}

Polynomial operator -(const Polynomial& a, const Polynomial& b) {}

Polynomial operator *(const Polynomial& a, const Polynomial& b) {}*/

ostream& operator <<(ostream& out, const Polynomial& what)//
{
	for (int i = 0; i < what.capacity; ++i) {
		out <<  what.coefficients[i] << "x^" << i <<" ";
	}
	return out;
}


