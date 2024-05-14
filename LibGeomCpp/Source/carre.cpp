#ifndef _CARRECPP
#define _CARRECPP

#include <iostream>
#include "../Header/carre.hpp"
using namespace std;

// Constructeur de la classe carre
Carre::Carre(float x)
{
	cote = x;
}
Carre::~Carre()
{

}
// Acceseur aux données
float Carre::getCote()
{
	return cote;
}

// Mutateur de donnée
void Carre::setCote(float nvCote)
{
	cote = nvCote;
}


// Affichage de donnée
void Carre::display()
{
	cout << "Carre de: " << "Cote = " << cote << endl;
}

// Calcul du perimetre
void Carre::perimetre()
{
    float perimetre = cote*4;
    cout << "le perimetre est: " << perimetre << endl;
} 
// Calcul de la surface
void Carre::surface()
{
    float aire = cote*cote;
    cout << "L'aire de ce carre est: " << aire  << endl;
}
#endif
	