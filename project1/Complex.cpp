#include <iostream>
#include <cmath>
#include "Complex.h"
using namespace std;

Complex::Complex()
{
	this->re = 0;
	this->img = 0;
}

Complex::Complex(double re, double img):re(re),img(img)
{}

Complex::Complex(const Complex& C):re(C.re),img(C.img)
{}

void Complex::afficher() const
{
	if (this->img < 0)
		cout << this->re << " " << this->img << "i" << endl;
	else
		cout << this->re << " + " << this->img << "i" << std::endl;
	
}

double Complex::module() const 
{
	return sqrt(pow(this->re,2)+pow(this->img,2));
}

Complex Complex::conjugue()
{
	return Complex(this->re, -this->img);
}

Complex Complex::operator+(const Complex& autre)
{
	return Complex(this->re + autre.re, this->img + autre.img);
}

Complex Complex::operator+(const double d) const
{
	return Complex(this->re + d, this->img);

}

Complex operator+(double d, const Complex& autre)
{
	return Complex(autre.re + d, autre.img);
}

Complex Complex::operator*(const Complex& autre)
{
	double real = this->re * autre.re - this->img * autre.img;
	double imag = this->re * autre.img + this->img * autre.re;
	return Complex(real, imag);
}

Complex Complex::operator*(const double d)
{
	return Complex(this->re * d, this->img * d);
}

Complex operator*(double d, const Complex& autre)
{
	return Complex(autre.re * d, autre.img);
}

Complex Complex::operator-(const Complex& autre)
{
	return Complex(this->re - autre.re, this->img - autre.img);


}


Complex Complex::operator-(const double d)
{
	return Complex(this->re - d, this->img);
}

Complex operator-(double d, const Complex& c)
{
	return Complex( d - c.re, c.img);
}

Complex Complex::operator/(const Complex& autre) const
{
	double denominateur = pow(autre.re,2) + pow(autre.img, 2);
	double real = (this->re * autre.re + this->img * autre.img) / denominateur;
	double imag = (this->img * autre.re - this->re * autre.img) / denominateur;
	return Complex(real, imag);
}

bool Complex::operator==(const Complex& autre) const
{
	return (this->re == autre.re && this->img == autre.img);
}







