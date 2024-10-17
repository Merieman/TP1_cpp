#pragma once

class Complex
{
	double re;
	double img;
public:
	Complex();
	Complex(double, double);
	Complex(const Complex&);
	void afficher() const;
	double module() const;
	Complex conjugue();
	Complex operator+(const Complex&);
	Complex operator+(const double) const;
	friend Complex operator+(double , const Complex& );
	
	Complex operator*(const Complex&);
	Complex operator*(const double);
	friend Complex operator*(double , const Complex& );

	Complex operator-(const Complex&);
	Complex operator-(const double);
	friend Complex operator-(double , const Complex& );

	Complex operator/(const Complex& ) const;
	bool operator==(const Complex&) const;




};



