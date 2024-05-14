#ifndef __CYLINDRECPP
#define __CYLINDRECPP

#include <iostream>
#include "../Header/cercle.hpp"
#include "../Header/point.hpp"
#include "../Header/cylindre.hpp"
#define pi 3.14
using namespace std;

Cylindre::Cylindre(Cercle C, float axe)
{
	base = C;
	hauteur = axe;
}
Cylindre::~Cylindre()
{
	
}
Cercle Cylindre::getBase()
{
	return base;
}
float Cylindre::getHauteur()
{
	return hauteur;
}
void Cylindre::setBase(Cercle newBase)
{
	base = newBase;
}
void Cylindre::setHauteur(float newHauteur)
{
	hauteur = newHauteur;
}

// Affichage des données

void Cylindre::display()
{
	cout << "Cylindre de: " << endl << "Base" << " " ;
    base.display();
	cout << "Hauteur: " << hauteur  << endl;
}


// Calcul d'aire
void Cylindre::surface()
{
    float aire = 2*pi*base.getRayon()*hauteur;
    cout << "Le aire de ce cylindre est: " << aire  << endl;
}
// Calcul du volume
void Cylindre::volume()
{
    float volume = pi*base.getRayon()*base.getRayon()*hauteur;
    cout << "Le volume de ce cylindre est: " << volume << endl;
}
#endif 