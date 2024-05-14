
#include <iostream>
#include "../Header/cercle.hpp"
#include "../Header/point.hpp"
using namespace std;
// constructeur de la classe cercle 
Cercle::Cercle()
{	
}
Cercle::Cercle(Point O, float x)
{
	origine = O;
	rayon = x;
}
Cercle::~Cercle()
{
}
float Cercle::getRayon()
{
	return rayon;
}
Point Cercle::getOrigine()
{
	return origine;
}
void Cercle::setRayon(float nvRayon)
{
	rayon = nvRayon;
}
void Cercle::setOrigine(Point nvOrigine)
{
	origine = nvOrigine;
}

// Affichage des données

void Cercle::display()
{
	cout << "Cercle de: " << "centre O" ;
	origine.display();
	cout << "Rayon: " << rayon << " " << "cm" << endl;
}

// Calcul du perimetre
void Cercle::perimetre()
{
	float perimetre = 2*(3.14)*rayon;
	cout << "le perimetre de ce cercle est: " << perimetre << endl;
}
// Calcul d'aire
void Cercle::surface()
{
    float aire = (3.14)*rayon*rayon;
    cout << "L'aire de ce cercle est: " << aire  << endl;
}
