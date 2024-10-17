#pragma once
class Complex
{
private:
	double Re;
	double Img;

public:

	//Les constructeurs
	Complex();
	Complex(double, double);
	Complex(const Complex&);

	//Affichage
	void Afficher() const;

	//Opérateur "+"
	Complex* operator +(const Complex& z) const;
	Complex* operator +(double r) const;

	//Opérateur "-"
	Complex* operator -(const Complex& z) const;
	Complex* operator -(double r) const;

	//Opérateur "*"
	Complex* operator *(const Complex& z) const;
	Complex* operator *(double r) const;

	//Opérateur "/"
	Complex* operator /(const Complex& z) const;
	Complex* operator /(double r) const;

	//Opérateur "=="
	bool operator ==(const Complex& z) const;

	//Conjugé
	Complex* conjuge() const;

	//Module
	double Module() const;

	//Destructeur
	~Complex();
};


