#pragma once
#include"Point.h"
class Cercle
{
	int id;
	double rayon;
	Point centre;
public:
	Cercle();
	Cercle(double, Point&);
	Cercle(const Cercle&);
	void afficher() const;
	void setRayon(double);
	void translaterP(Point&);
	double perimetre();
	double surface();
	Cercle operator==(const Cercle&);


};

