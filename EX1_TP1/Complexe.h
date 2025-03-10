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

	//Op�rateur "+"
	Complex* operator +(const Complex& z) const;
	Complex* operator +(double r) const;

	//Op�rateur "-"
	Complex* operator -(const Complex& z) const;
	Complex* operator -(double r) const;

	//Op�rateur "*"
	Complex* operator *(const Complex& z) const;
	Complex* operator *(double r) const;

	//Op�rateur "/"
	Complex* operator /(const Complex& z) const;
	Complex* operator /(double r) const;

	//Op�rateur "=="
	bool operator ==(const Complex& z) const;

	//Conjug�
	Complex* conjuge() const;

	//Module
	double Module() const;

	//Destructeur
	~Complex();
};


