#include <iostream>
#include "Complexe.h"
#include <cmath>
using namespace std;

//constructeur sans param
Complex::Complex()
{
	this->Re = 0;
	this->Img = 0;
}

//constructeur avec param
Complex::Complex(double re, double img)
{
	this->Re = re;
	this->Img = img;
}

//constructeur de recopie
Complex::Complex(const Complex& c)
{
	this->Re = c.Re;
	this->Img = c.Img;
}

//Fonction d'affichage
void Complex::Afficher() const
{
	cout << "le nombre complexe:" << this->Re << "+" << this->Img << "i" << endl;
}

//Opérateur "+" entre deux complexes
Complex* Complex::operator+(const Complex& z)const
{
	Complex* z2 = new Complex();
	z2->Re = this->Re + z.Re;
	z2->Img = this->Img + z.Img;
	return z2;

}
//Opérateur "+" entre un complexe et un double
Complex* Complex::operator+(double r)const
{
	Complex* z2 = new Complex();
	z2->Re = this->Re + r;
	z2->Img = this->Img;
	return z2;
}

//Opérateur "-" entre deux complexes
Complex* Complex::operator-(const Complex& z)const
{
	Complex* z2 = new Complex();
	z2->Re = this->Re - z.Re;
	z2->Img = this->Img - z.Img;
	return z2;
}

//Opérateur "-" entre un complexe et un double
Complex* Complex::operator-(double r)const
{
	Complex* z2 = new Complex();
	z2->Re = this->Re - r;
	z2->Img = this->Img;
	return z2;
}

//Opérateur "*" entre deux complexes
Complex* Complex::operator*(const Complex& z)const
{
	Complex* z2 = new Complex();
	z2->Re = (this->Re * z.Re) - (this->Img * z.Img);
	z2->Img = (this->Img * z.Re) + (this->Re * z.Img);
	return z2;
}

//Opérateur "*" entre un complexe et un double
Complex* Complex::operator*(double r)const
{
	Complex* z2 = new Complex();
	z2->Re = this->Re * r;
	z2->Img = this->Img * r;
	return z2;

}

//Opérateur "/" entre deux complexes
Complex* Complex::operator/(const Complex& z)const
{
	Complex* z2 = new Complex();
	double denom = (z.Re * z.Re) + (z.Img * z.Img);

	z2->Re = ((this->Re * z.Re) + (this->Img * z.Img)) / denom;
	z2->Img = ((this->Img * z.Re) - (this->Re * z.Img)) / denom;

	return z2;
}

//Opérateur "/" entre un complexe et un double
Complex* Complex::operator/(double r)const
{
	Complex* z2 = new Complex();

	if (r != 0) {
		z2->Re = this->Re / r;
		z2->Img = this->Img / r;
	}
	else {
		cout << "Erreur : division par zéro." << endl;

	}

	return z2;
}

//Opérateur "==" entre deux complexes
bool Complex::operator==(const Complex& z) const
{
	return ((this->Re == z.Re) && (this->Img == z.Img));

}

//Conjugé d'un complex
Complex* Complex::conjuge()const
{
	Complex* z2 = new Complex();
	z2->Re = this->Re;
	z2->Img = -this->Img;
	return z2;
}

//Module d'un complex
double Complex::Module() const
{
	return sqrt((this->Re * this->Re) + (this->Img * this->Img));
}

Complex::~Complex()
{
	cout << "Destructeur d'un complexe." << endl;
}
