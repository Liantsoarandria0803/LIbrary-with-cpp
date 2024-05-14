#ifndef _CUBECPP
#define _CUBECPP

#include <iostream>
#include "../Header/cube.hpp"
using namespace std;

// Constructeur de la classe Rectangle
Cube::Cube(float x)
{
	arrete = x;
}
Cube::~Cube()
{

}
// Acceseur aux données
float Cube::getArrete()
{
	return arrete;
}

// Mutateur de donnée
void Cube::setArrete(float nvArrete)
{
	arrete = nvArrete;
}


// Affichage de donnée
void Cube::display()
{
	cout << "Cube de: " << "Arrete = " << arrete << " cm" << endl;
}


// Calcul d'aire
void Cube::surface()
{
    float aire = arrete*arrete;
    cout << "L'aire de ce cube est: " << aire << " cm²" << endl;
}
// calcul de volume
void Cube::volume()
{
    float volume = arrete*arrete*arrete;
    cout << "Le volume de ce cube est: " << volume << " cm³" << endl;
}
#endif
	