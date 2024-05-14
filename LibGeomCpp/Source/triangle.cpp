#ifndef _TRIANGLECPP
#define _TRIANGLECPP

#include <iostream>
#include "../Header/triangle.hpp"
using namespace std;

// Constructeur de la classe Triangle
Triangle::Triangle()
{

}
Triangle::Triangle(float x, float y, float z,float vhauteur)
{
	base = x;
	coteB = y;
    coteC = z;
	hauteur=vhauteur;
}
Triangle::~Triangle()
{

}
// Acceseur aux données
float Triangle::getBase()
{
	return base;
}
float Triangle::getCoteB()
{
	return coteB;
}
float Triangle::getCoteC()
{
	return coteC;
}
float Triangle::getHauteur()
{
	return hauteur;
}
// Mutateur de donnée
void Triangle::setBase(float vbase)
{
	base = vbase;
}
void Triangle::setCoteB(float vCoteB)
{
	coteB = vCoteB;
}
void Triangle::setCoteC(float vCoteC)
{
	coteC= vCoteC;
}
void Triangle::setHauteur(float vhauteur)
{
	hauteur=vhauteur;
}
// Affichage de donnée
void Triangle::display()
{
	cout << "Triangle de: " << "base = " << base << " et " << "Cote B: " << coteB << "Cote C: " << coteC << endl;
}

// Calcul du perimetre
void Triangle::perimetre()
{
    float perimetre = base+ coteB + coteC;
    cout << "le perimetre est: " << perimetre << endl;
} 
// Calcul d'aire
void Triangle::surface()
{
    float surface=(base*hauteur)/2;
	cout << "la surface est: " << surface << endl;
} 

#endif
	
