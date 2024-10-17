#include "Cercle.h"
#include <iostream>

Cercle::Cercle() :rayon(0), centre()
{}

Cercle::Cercle(double r, Point& p) :rayon(r), centre(p)
{}

Cercle::Cercle(const Cercle& c):rayon(c.rayon),centre(c.centre)
{}

void Cercle::afficher() const
{
	//std::cout << "Rayon: " << rayon << " point x: " << centre.x << " point y: " << centre.y << std::endl;
}

void Cercle::setRayon(double r)
{
	this->rayon = r;
}

void Cercle::translaterP(Point& p)
{
	this->centre = p;
}

double Cercle::perimetre()
{
	return 0.0;
}

double Cercle::surface()
{
	return 0.0;
}

Cercle Cercle::operator==(const Cercle&)
{
	return Cercle();
}



